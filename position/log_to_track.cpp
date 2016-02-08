#include "opencv2/video/tracking.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <stdio.h>
#include <time.h>
#include "cv.h"
#include <unistd.h>

#define pi (3.14159265359)
#define METERS_PER_DEGREE_LAT (111043)//(111310.4035)
#define METERS_PER_DEGREE_LONG (84857)
#define METERS_PER_FOOT (0.3048)

// These are the GPS latitude and longitude of the Left,Right,Top,and Bottom edges of the purdue image I use // I got these and the image with google earth
//////Engr fountain
// #define  MAPL (86.91629167)
// #define  MAPR (86.91122778)
// #define  MAPT (40.42976389)
// #define  MAPB (40.42775556)
//////Bogus map
#define  MAPL (86.91649167)
#define  MAPR (86.91610778)
#define  MAPT (40.42999389)
#define  MAPB (40.42960556)


// #define right_ticks_per_cm 323.709
// #define left_ticks_per_cm 328.288
// float avg_ticks_per_cm = (right_ticks_per_cm + left_ticks_per_cm) / 2;

using namespace cv;

// state:
// [x y theta dtheta sl sr dsl dsr]
// x and y position
// orientaion angle and derivative
// left and right wheel speeds
// left and right wheel speed derivatives

// measured values:
// x and y (gps)
// theta (imu)
// dtheta (gyro)
// left and right wheel speeds (encoders)
// acceleration of rover body (accelerometer)

// arbitrarily eyeballed variance estimates which we may want to change:
// I am assuming meters, meters/second, etc for the units

// measurement noise variance:
// there is actually a whole covariance matrix to specify, but i am assuming independence between them
float mXN = 5.0; //  GPS X noise variance
float mYN = 5.0; //  GPS Y noise variance
float mThetaN = 20000000*(pi/180);//1000000000 * (pi/180); //  orientation noise variance (radians)
float mdThetaN = .01;//.0001; 
//1000000000000 * (pi/180); //  orientation derivative noise variance (radians)
float mSLN = .01; //  left wheel speed noise variance
float mSRN = .01; //  right wheel speed noise variance
float mAN  = .01;//100000000; //  acceleration noise variance

// process noise variance
// there is actually a whole covariance matrix to specify, but i am assuming independence between them
float pXN = 1e-6; //  GPS X noise variance
float pYN = 1e-6; //  GPS Y noise variance
float pThetaN = 1 * (pi/180); //  orientation noise variance (radians)
float pdThetaN = 1000000;//1 * (pi/180); //  orientation derivative noise variance (radians)
float pSLN = 1000000; //  left wheel speed noise variance
float pSRN = 1000000; //  right wheel speed noise variance
float pdSLN = 1000000; //  left wheel speed derivative noise variance
float pdSRN = 1000000; //  right wheel speed derivative noise variance

// parameters for simplified motor physics:
// motor given 0-255 integer input I_m
// assume that force F is linearly proportional to this number by constant a:
// F = a*I_m
// assume there is also a friction force linearly dependent on wheel speed S_m by constant b:
//  F_f = -b*S_m
// assume there is some fixed mass which we bake into the proportionality constants:
// acceleration A = alpha*I_m - beta*S_m
// need to specify alpha and beta (potentially for each motor separately):
// we really should find these by computing stuff from measurements
float alpha = 1; // ????
float beta = 1; // ????
float rover_width = .3110019808409256; 
float tau_L = 3.048837255989942e-05; //left meters per tick
float tau_R = 3.056925451030081e-05; //right meters per tick
float gyro_offset = 14.98;
float radians_per_gyro_unit = 2*pi/5.076295665184609e+03; 
const float theta_offset_per_timestep = 0.0001281453144064105; //empirically determined 3feb16


Point2d local_origin;


Point2d GPS_to_pixel(Point2d gps,int width,int height);
Point2d GPS_to_local(Point2d gps,Point2d GPS_of_origin);
Point2d local_to_GPS(Point2d );
Point2d local_to_pixel(Point2d local, Point2d GPS_origin,int width, int height);
Point2d pixel_to_GPS(Point2d pixel, int width, int height);
Point2d pixel_to_local(Point2d pixel,Point2d GPS_of_origin, int width, int height);

int read_config_file(char* filename)
{
  FILE* fp = fopen(filename,"r");
  if (fp==NULL)
    {
      printf("invalid log file. using default parameters\n");
      return 0;
    }
  char linebuf[1000];
  int read = fscanf(fp,
		    "mXN:%f\nmYN:%f\nmThetaN:%f\nmdThetaN:%f\nmSLN:%f\nmSRN:%f\nmAN:%f\n"
		    "pXN:%f\npYN:%f\npThetaN:%f\npdThetaN:%f\npSLN:%f\npSRN:%f\npdSLN:%f\npdSRN:%f"
		    "\nalpha:%f\nbeta:%f\nrover_width:%f\n",
		    &mXN,&mYN,&mThetaN,&mdThetaN,&mSLN,&mSRN,&mAN,
		    &pXN,&pYN,&pThetaN,&pdThetaN,&pSLN,&pSRN,&pdSLN,&pdSRN,
		    &alpha,&beta,&rover_width);
  fclose(fp);
  if (read==18)
    return 1;
  else 
    {
      printf("failed to read config file. only got %d fields\n",read);
      return 0;
    } 
}

int read_log_file(char* filename, Mat measurements[], float* dts)
{

  FILE* fp = fopen(filename,"r");
  char linebuf[1000];
  double encoder_logtime,imu_logtime,tmp_logtime;
  unsigned long encoder_time,encoder_dt,imu_time,imu_dt;
  float L,R;
  float Yaw,Pitch,Roll,Yawa,MAG_ha,MAG_h,Ax,Ay,Az,Mx,My,Mz,Gx,Gy,Gz;
  int motor_cmd_L, motor_cmd_R;

  Mat Measurement = Mat::zeros(7,1,CV_32F);
  int read_encoder=0,read_imu=0;
  int n_measurements =0;
  while (fgets(linebuf,1000,fp)!=NULL)
    {
      int correct =0;
      int encoder_items = sscanf(linebuf,"%lf: ENC:time:%u:dt:%u:L:%f:R:%f:MCL:%d:MCR:%d",
				 &tmp_logtime,&encoder_time,&encoder_dt,&L,&R,
				 &motor_cmd_L, &motor_cmd_R);
      int imu_items = sscanf(linebuf,"%lf: IMU:time:%u:dt:%u:"
			     "Y:%f:P:%f:R:%f:"
			     "Y(a):%f:M_h(a):%f:M_h:%f:"
			     "Ax:%f:Ay:%f:Az:%f:Mx:%f:My:%f:Mz:%f:"
			     "Gx:%f:Gy:%f:Gz:%f",
			     &tmp_logtime,&imu_time,&imu_dt,
			     &Yaw,&Pitch,&Roll,
			     &Yawa,&MAG_ha,&MAG_h,
			     &Ax,&Ay,&Az,
			     &Mx,&My,&Mz,
			     &Gx,&Gy,&Gz);

      if (encoder_items == 7)
      	{
	  encoder_logtime=tmp_logtime;
      	  read_encoder=1;
      	}
      if (imu_items == 18)
      	{
	  imu_logtime=tmp_logtime;
	  read_imu=1;
      	}
      if (read_imu==1 && read_encoder==1)
	{
	  Measurement.at<float>(0) = 0; //no gps for now
	  Measurement.at<float>(1) = 0; //no gps for now
	  Measurement.at<float>(2) = (-Yaw+90)*pi/180 ; //degrees north is 0 east is positive->(radians east 0 north positive)
	  Measurement.at<float>(3) = -(Gz-gyro_offset)*radians_per_gyro_unit-theta_offset_per_timestep;///(((float)((int)encoder_dt))/1000.0);
	  //-Gz*pi/180; // rotation around z in degrees/sec ->(radians/sec)
	  //printf("%f\n", Measurement.at<float>(3));
	  Measurement.at<float>(4) = L*tau_L/(((float)((int)encoder_dt))/1000.0); 
	  //L/100.0/(((float)((int)encoder_dt))/1000.0);//*(avg_ticks_per_cm)/(left_ticks_per_cm); 
	  // cm traveled in last time period -> (meters/sec)
	  Measurement.at<float>(5) = R*tau_R/(((float)((int)encoder_dt))/1000.0); 
	  //R/100.0/(((float)((int)encoder_dt))/1000.0);//*(avg_ticks_per_cm)/(right_ticks_per_cm); 
	  // cm traveled in last time period -> (meters/sec)
	  // printf("encoder_dt: %d, L: %f, Lspeed: %f, R: %f, Rspeed: %f\n", 
	  // 	 encoder_dt, L, Measurement.at<float>(4), R, Measurement.at<float>(5));

	  Measurement.at<float>(6) = -(Ax-1)/100; // cm/s^2 -> (m/s^2)       // x forward y right
	  measurements[n_measurements] = Measurement.clone();
	  dts[n_measurements]=(((float)((int)encoder_dt))/1000.0);
	  n_measurements++;
	  read_imu=0;
	  read_encoder=0;
	}

    }
  //printf("n_measurements:%d\n",n_measurements);
  return n_measurements;
}

Point2d GPS_to_pixel(Point2d point, int width, int height)
{
    Point2d pixelPoint;
    double GPSx,GPSy,Pixelx,Pixely;
    double dLat,dLong;
    GPSx = point.x;
    GPSy = point.y;
    dLat = MAPT-MAPB;
    dLong = MAPR-MAPL;
    Pixelx = (GPSx-MAPL)/dLong*width;
    Pixely = height-(GPSy-MAPB)/dLat*height;
    pixelPoint.x=Pixelx;
    pixelPoint.y=Pixely;
    return pixelPoint;
}
Point2d GPS_to_local(Point2d GPS,Point2d GPS_of_origin)
{
    double dx = GPS_of_origin.x-GPS.x;
    double dy = GPS.y-GPS_of_origin.y;
    Point2d coord;
    coord.x = dx*METERS_PER_DEGREE_LONG;
    coord.y = dy*METERS_PER_DEGREE_LAT;
    return coord;
}
Point2d local_to_GPS(Point2d local, Point2d GPS_of_origin)
{
    Point2d coord;

    coord.x = GPS_of_origin.x - local.x/METERS_PER_DEGREE_LONG;
    coord.y = GPS_of_origin.y + local.y/METERS_PER_DEGREE_LAT;
    return coord;
}
Point2d local_to_pixel(Point2d local,Point2d GPS_of_origin,int width, int height)
{
    Point2d gps = local_to_GPS(local,GPS_of_origin);
    Point2d pixel = GPS_to_pixel(gps,width,height);
    return pixel;
}

Point2d pixel_to_local(Point2d pixel,Point2d GPS_of_origin, int width, int height)
{
    Point2d gps = pixel_to_GPS(pixel, width, height);
    Point2d local = GPS_to_local(gps,GPS_of_origin);
    return local;
}

Point2d pixel_to_GPS(Point2d pixel, int width, int height)
{
    double dLat = MAPT-MAPB;
    double dLong = MAPR-MAPL;
    Point2d gps;
    gps.x =pixel.x*dLong/width+MAPL;
    gps.y= -pixel.y*dLat/height+dLat+MAPB;
    return gps;
}

Mat ComputeTransitionMatrix(Mat state,float dt)
{
  
  float theta = state.at<float>(2);
  float sl =  state.at<float>(4);
  float sr =  state.at<float>(5);
  float r,dtheta_term;
  Mat TransitionModel = Mat(8,8,CV_32F);
  
  TransitionModel = *(Mat_<float>(8,8) <<
		      1, 0, 0, 0,  .5*cos(theta)*dt, .5*cos(theta)*dt, 0,  0,
		      0, 1, 0, 0,  .5*sin(theta)*dt, .5*sin(theta)*dt, 0,  0,
		      0, 0, 1, dt, 0,                0,                0,  0,
		      0, 0, 0,  0, 0,                0,                0,  0,
		      //0, 0, 0, 0,  -1/rover_width,   1/rover_width,    0,  0,
		      0, 0, 0, 0,  1,                0,                dt, 0,
		      0, 0, 0, 0,  0,                1,                0,  dt,
		      0, 0, 0, 0, -beta,             0,                0,  0,
		      0, 0, 0, 0,  0,               -beta,             0,  0);
  return TransitionModel;
}


KalmanFilter execute_time_step(KalmanFilter KF,
			      Mat TransitionModel,
			      Mat MeasurementModel,
			      Mat ControlModel,
			      Mat measurement,
			      Mat control)
{
  KF.transitionMatrix = TransitionModel;
  KF.measurementMatrix = MeasurementModel;
  KF.controlMatrix = ControlModel;
  KF.predict(control);
  KF.correct(measurement);
  return KF;  
}


int main(int args, char** argv)
{
  

  if (args!=5)
    {
      printf("requires 4 arguments: configpath logpath outpath(C) outpath(Scheme)\n");
      exit(1);
    }

  char* configpath = argv[1];
  char* logpath = argv[2];
  char* outpath = argv[3];
  char* outpath2 = argv[4];

  // printf("configpath:%s\n",configpath);
  // printf("logpath:%s\n",logpath);
  // printf("outpath:%s\n",outpath);



  //read_config_file(configpath);
  printf("using hard-coded values\n");
  Mat measurements[80000];
  float dts[80000];
  //printf("I was lazy, so there is a needless hard limit of 80000 measurements\n");
  int nmeasurements = read_log_file(logpath, measurements,dts);
  FILE* infile = fopen(logpath,"r");
  char linebuf[1000];
  FILE* outfile = fopen(outpath,"w");
  FILE* outfile2 = fopen(outpath2, "w");
  fprintf(outfile2, "(");

  Mat measurement = Mat::zeros(7,1,CV_32F);
  Mat control = Mat::zeros(2,1,CV_32F);
  Mat MeasurementModel = Mat::zeros(7,8,CV_32F);
  Mat MeasurementModel_noGPS = Mat::zeros(7,8,CV_32F);
  Mat TransitionModel =  Mat::zeros(8,8,CV_32F);

  float estimates[80000][3]; //store estimates here

  //for (int i = 0; i< nmeasurements; i++)
  //  measurements[i].at<float>(3) = measurements[i].at<float>(3) - theta_offset_per_timestep;


  KalmanFilter KF(8, 7, 2); // 8 state variables, 7 measurements, 2 inputs
  KalmanFilter simulation(8,7,2);

  KF.measurementNoiseCov = *(Mat_<float>(7,7) <<
                             mXN, 0,   0,       0,        0,    0,    0,     
                             0,   mYN, 0,       0,        0,    0,    0,     
                             0,   0,   mThetaN, 0,        0,    0,    0,     
                             0,   0,   0,       mdThetaN, 0,    0,    0,     
                             0,   0,   0,       0,        mSLN, 0,    0,     
                             0,   0,   0,       0,        0,    mSRN, 0,     
                             0,   0,   0,       0,        0,    0,    mAN);

  KF.processNoiseCov = *(Mat_<float>(8,8) <<
			 pXN, 0,   0,       0,        0,    0,    0,     0,     
			 0,   pYN, 0,       0,        0,    0,    0,     0,     
			 0,   0,   pThetaN, 0,        0,    0,    0,     0,    
			 0,   0,   0,       pdThetaN, 0,    0,    0,     0,     
			 0,   0,   0,       0,        pSLN, 0,    0,     0,     
			 0,   0,   0,       0,        0,    pSRN, 0,     0,    
			 0,   0,   0,       0,        0,    0,    pdSLN, 0,
			 0,   0,   0,       0,        0,    0,    0,     pdSRN);

  KF.controlMatrix = *(Mat_<float>(8,2) <<
		       0,     0,
		       0,     0,
		       0,     0,
		       0,     0,
		       0,     0,
		       0,     0,
		       alpha, 0,
		       0,     alpha);

  // measure x,y,theta,dtheta,sl,sr, and acceleration, which is avg of wheel accelerations
  MeasurementModel = *(Mat_<float>(7,8) <<
			 1, 0, 0, 0, 0, 0,  0,   0,
			 0, 1, 0, 0, 0, 0,  0,   0,
			 0, 0, 1, 0, 0, 0,  0,   0,
			 0, 0, 0, 1, 0, 0,  0,   0,
			 0, 0, 0, 0, 1, 0,  0,   0,
			 0, 0, 0, 0, 0, 1,  0,   0,
			 0, 0, 0, 0, 0, 0,  .5,  .5);

 // measure theta,dtheta,sl,sr, and acceleration, which is avg of wheel accelerations		       
  MeasurementModel_noGPS = *(Mat_<float>(7,8) <<
			       0, 0, 0, 0, 0, 0,  0,   0,
			       0, 0, 0, 0, 0, 0,  0,   0,
			       0, 0, 1, 0, 0, 0,  0,   0,
			       0, 0, 0, 1, 0, 0,  0,   0,
			       0, 0, 0, 0, 1, 0,  0,   0,
			       0, 0, 0, 0, 0, 1,  0,   0,
			       0, 0, 0, 0, 0, 0,  .5,   .5);

  simulation.measurementNoiseCov = KF.measurementNoiseCov.clone();
  simulation.processNoiseCov = KF.processNoiseCov.clone();
  simulation.controlMatrix = KF.controlMatrix.clone();
  simulation.measurementMatrix = MeasurementModel_noGPS.clone();

  KF.statePre.at<float>(2) = pi/2; // needs work: hard coded
  KF.statePost.at<float>(2) = pi/2;

  int timestep=0;
  if (nmeasurements == 0)
    {
      fprintf(outfile,
	      "X:%f,Y:%f,Theta:%f\n",
	      (float) 0.0,
	      (float) 0.0,
	      (float) 0.0);
      fprintf(outfile2,
	      "(%f %f %f)\n",
	      (float) 0.0,
	      (float) 0.0,
	      (float) 0.0);	      
    }
  else
    for(timestep=0;timestep<nmeasurements;timestep++)
      {
	// fprintf(outfile,
	// 	"X:%f,Y:%f,Theta:%f\n",
	// 	KF.statePost.at<float>(0),
	// 	KF.statePost.at<float>(1),
	// 	KF.statePost.at<float>(2));
	// fprintf(outfile2,
	// 	"(%f %f %f)\n",
	// 	KF.statePost.at<float>(0),
	// 	KF.statePost.at<float>(1),
	// 	KF.statePost.at<float>(2));
	estimates[timestep][0] = KF.statePost.at<float>(0);
	estimates[timestep][1] = KF.statePost.at<float>(1);
	estimates[timestep][2] = KF.statePost.at<float>(2);

	float dt = dts[timestep];//1.0/50.0; // needs work: hard coded
	
	TransitionModel = ComputeTransitionMatrix(KF.statePost,dt);
	
	float CL = 0;// needs work: hard coded and ignores input to rover motors
	float CR = 0;//
	control = *(Mat_<float>(2,1) << CL,CR);
	
	measurement = measurements[timestep];
	
	float mtheta = measurement.at<float>(2);
	float stheta = KF.statePost.at<float>(2);
	if (0)
	  {
	    while (mtheta<=stheta-pi)
	      mtheta+=2*pi;
	    while (mtheta>=stheta+pi)
	      mtheta-=2*pi;
	  }
	// needs work: we always ignore GPS
	KF = execute_time_step(KF, TransitionModel,MeasurementModel_noGPS, KF.controlMatrix, measurement,control);
      }
  //now write estimates to file with original sensor readings
  int est_count = 0;
  bool imu_read = false;
  bool enc_read = false;
  while (fgets(linebuf,1000,infile)!=NULL)
  {
    //write original line to C file EXCEPT FOR OLD ESTIMATES
    if (linebuf[0] != 'E')
      fprintf(outfile, "%s",linebuf);
    //printf("%c\n", linebuf[18]);
    if (linebuf[18] == 'I')
      imu_read = true;
    if (linebuf[18] == 'E')
      enc_read = true;
    if (imu_read && enc_read && (est_count < nmeasurements))
    {
      //write estimates to C file
      fprintf(outfile, "ESTIMATE:X:%f:Y:%f:THETA:%f\n",
	      estimates[est_count][0],estimates[est_count][1], 
	      estimates[est_count][2]);
      //also write estimates to scheme file
      fprintf(outfile2, "(%f %f %f)\n", estimates[est_count][0],
	      estimates[est_count][1], estimates[est_count][2]);
      //cleanup & update
      imu_read = false;
      enc_read = false;
      est_count++;
    }
  }
  fclose(infile);
  fclose(outfile);
  fprintf(outfile2, ")");
  fclose(outfile2);
  return 0;
}
