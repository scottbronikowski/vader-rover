#include "opencv2/video/tracking.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <stdio.h>
#include <time.h>
//#include "Dstar.h"
#include "cv.h"
//#include "mGPSInfo.h"
//#include "mNMEAParser.h"
#include <unistd.h>

using namespace cv;

const double k_PI = 3.1415926535897932384626433832795028841971693993751058;

//global vars
float g_tau_L = 1/32828.8; //left side meters per tick
float g_tau_R = 1/32370.9; //right side meters per tick
float g_rover_width = 0.26; //in meters

//struct for x,y,theta triples (robot poses)
struct pose_t {
  double x;
  double y;
  double theta;
};

int read_config_file(char* filename)
{
  FILE* fp = fopen(filename,"r");
  if (fp==NULL)
    {
      printf("invalid config file. using default parameters\n");
      return 0;
    }
  int read = fscanf(fp,
		    "tau_L:%f\n"
		    "tau_R:%f\n"
		    "rover_width:%f\n",
		    &g_tau_L,&g_tau_R,&g_rover_width);
  fclose(fp);
  if (read==3)
    return 1;
  else 
    {
      printf("failed to read config file. only got %d fields\n",read);
      return 0;
    } 
}

int read_log_file(char* filename, Mat measurements[])
{
  FILE* fp = fopen(filename,"r");
  char linebuf[1000];
  double encoder_logtime;
  unsigned long encoder_time,encoder_dt;
  float L,R;
  int motor_cmd_L, motor_cmd_R;
  Mat Measurement = Mat::zeros(7,1,CV_32F);
  int read_encoder=0;
  int n_measurements =0;

  while(fgets(linebuf,1000,fp)!=NULL)
    {
      //printf("%s\n",linebuf);
      int encoder_items = sscanf(linebuf,"%lf:ENC:time:%lu:dt:%lu:L:%f:R:%f:MCL:%d:MCR:%d",
			  	 &encoder_logtime,&encoder_time,&encoder_dt,&L,&R,
			  	 &motor_cmd_L,&motor_cmd_R);
// sscanf(linebuf,"%lf:ENC:time:%lu:dt:%lu:L:%f:R:%f",
// 				 &encoder_logtime,&encoder_time,&encoder_dt,&L,&R);
      if (encoder_items == 7)
	{
	  Measurement.at<float>(0) = encoder_logtime; //gumstix time
	  Measurement.at<float>(1) = (float)encoder_time; //encoder time in ms
	  Measurement.at<float>(2) = (float)encoder_dt; //encoder measurement interval in ms
	  Measurement.at<float>(3) = L; //raw ticks
	  Measurement.at<float>(4) = R; //raw ticks
	  Measurement.at<float>(5) = (float)motor_cmd_L;
	  Measurement.at<float>(6) = (float)motor_cmd_R;
	  measurements[n_measurements] = Measurement.clone();
	  n_measurements++;
	}
    }
  printf("read %d measurements\n",n_measurements);
  return n_measurements;
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
  pose_t current_pose;


  read_config_file(configpath);
  Mat measurements[80000];
  //printf("I was lazy, so there is a needless hard limit of 80000 measurements\n");
  int nmeasurements = read_log_file(logpath, measurements);
  FILE* outfile = fopen(outpath,"w");
  FILE* outfile2 = fopen(outpath2, "w");
  fprintf(outfile2, "(");

  Mat measurement = Mat::zeros(7,1,CV_32F);
  float d_L, d_R, delta_theta, R_L, R_R, xprime, yprime;
  float theta;
  Mat RotationMatrix = Mat(2,2,CV_32F);
  Mat delta_robot = Mat::zeros(2,1,CV_32F);
  Mat delta_world = Mat::zeros(2,1,CV_32F);

  //initialize location to 0,0, pi/2
  current_pose.x = 0.0f;
  current_pose.y = 0.0f;
  current_pose.theta = k_PI/2.0f;

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
	//printf("timestep: %d\n", timestep);
	fprintf(outfile,
		"X:%f,Y:%f,Theta:%f\n",
		current_pose.x, current_pose.y, current_pose.theta);
	fprintf(outfile2,
		"(%f %f %f)\n",
		current_pose.x, current_pose.y, current_pose.theta);
	//printf("wrote outfiles\n");

	measurement = measurements[timestep];
	d_L = measurement.at<float>(3) * g_tau_L;
	d_R = measurement.at<float>(4) * g_tau_R;
	if (d_R == d_L)
	  { //not turning
	    delta_robot.at<float>(0) = 0;
	    delta_robot.at<float>(1) = d_L;
	    delta_theta = 0;
	  }
	else if (fabs(d_L) < fabs(d_R)) //turning left
	  {
	    R_L = (d_L * g_rover_width)/(d_R - d_L);
	    //printf("dL dR RL\n");
	    delta_theta = (d_R - d_L)/g_rover_width;
	    xprime = (R_L + g_rover_width/2)*cos(delta_theta);
	    yprime = (R_L + g_rover_width/2)*sin(delta_theta);
	    //printf("xprime yprime\n");
	    delta_robot.at<float>(0) = xprime - (R_L + g_rover_width/2); //delta_x
	    delta_robot.at<float>(1) = yprime; //delta_y
	  }
	else //turning right
	  {
	    R_R = (d_R * g_rover_width)/(d_L - d_R);
	    delta_theta = (d_R - d_L)/g_rover_width;
	    xprime = (R_R + g_rover_width/2)*cos(delta_theta+k_PI);
	    yprime = (R_R + g_rover_width/2)*sin(delta_theta+k_PI);
	    delta_robot.at<float>(0) = xprime + (R_R + g_rover_width/2); //delta_x
	    delta_robot.at<float>(1) = yprime; //delta_y
	  }
	theta = current_pose.theta - k_PI/2;
	//printf("before rotationmatrix\n");
	RotationMatrix = *(Mat_<float>(2,2) <<
			   cos(theta), -sin(theta),
			   sin(theta), cos(theta));
	delta_world = RotationMatrix * delta_robot;
	//printf("after rotationmatrix\n");
	current_pose.x = current_pose.x + delta_world.at<float>(0);
	current_pose.y = current_pose.y + delta_world.at<float>(1);
	current_pose.theta = current_pose.theta + delta_theta;
	  
      }
  fclose(outfile);
  fprintf(outfile2, ")");
  fclose(outfile2);

  return 0;
}
