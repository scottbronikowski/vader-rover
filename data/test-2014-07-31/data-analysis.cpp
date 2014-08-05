#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <string>
#include <memory>
#include <tr1/functional>
#include <stdexcept>
#include <sstream>
#include <errno.h>
#include <sys/time.h>
#include <cstring>
#include <sys/types.h>

using namespace cv;

#define PI (3.14159265359)
#define NEGATIVE_INFINITY (-1.0/0.0)
#define METERS_PER_FOOT (0.3048)
//measurements of the area
#define FIELD_WIDTH (20.1) //in feet
#define FIELD_HEIGHT (16.7) //in feet
#define ORIGIN_OFFSET (10.2) //in feet, distance from left edge to robot start point
const float k_width = FIELD_WIDTH * METERS_PER_FOOT; //in meters
const float k_height = FIELD_HEIGHT * METERS_PER_FOOT;
const float k_left_edge = -ORIGIN_OFFSET * METERS_PER_FOOT;
const float k_right_edge = (FIELD_WIDTH - ORIGIN_OFFSET) * METERS_PER_FOOT;
const float k_bottom_edge = 0.0;
const float k_top_edge = k_height;
const double sig_a = PI/8;
const double sig_b = 2.0;

double my_exp(double x){ 
  if (x == NEGATIVE_INFINITY)
    return 0.0;
  return exp(x);
}

double sigmoid(double x, double a, double b){ //a is threshold, b is steepness
  return 1.0 / (1 + my_exp(- b * (x - a)));
}

double normalize_angle(double angle){
  if (angle > PI) return normalize_angle(angle - (2*PI));
  else if (angle < -PI) return normalize_angle(angle + (2*PI));
  else return angle;
}

//gives the angle from p2 back to p1
double AngleBetween(Point2d p1, Point2d p2){ 
  return atan2(p1.y - p2.y, p1.x - p2.x);}
//all prepositional functions return a value based on the difference between
//the observed angle and the desired angle-->higher value is better, best
//possible value is 0
double Left(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  //return -fabs(fabs(angle) - PI);
  return -fabs(normalize_angle(angle - PI));
  // double left_angle = normalize_angle(fabs(angle) - PI);
  // return sigmoid(left_angle, sig_a, sig_b);
}

double Right(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return -fabs(angle); //no need to normalize here b/c atan2 is always between +/-pi
}

double Front(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return -fabs(normalize_angle(angle - (-PI/2)));
}

double Behind(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return -fabs(normalize_angle(angle - PI/2));
}

double Between(Point2d robot, Point2d obstacle1, Point2d obstacle2){
  double angle1 = AngleBetween(robot,obstacle1);
  double angle2 = AngleBetween(robot,obstacle2);
  //return -fabs(PI - fabs(angle1 - angle2));
  return -fabs(PI - normalize_angle(angle1 - angle2));
}

Point2d ReadTrack(char* filename){
  FILE* fp = fopen(filename,"r");
  char linebuf[1000];
  float X, Y, Theta;
  Point2d retval;
  while (fgets(linebuf,1000,fp)!=NULL){
    int track_items = sscanf(linebuf,"X:%f,Y:%f,Theta:%f",&X,&Y,&Theta);
    if (track_items != 3)
      printf("ERROR in sscanf");}
  retval.x = X;
  retval.y = Y;
  return retval;
}

int main(int /*argc*/, char** /*argv*/)
{
  //initialize obstacle locations
  Point2d table;
  table.x = k_left_edge + (6.05 * METERS_PER_FOOT);
  table.y = 8.37 * METERS_PER_FOOT;
  Point2d chair;
  chair.x = k_right_edge - (5.75 * METERS_PER_FOOT);
  chair.y = 8.33 * METERS_PER_FOOT;
  printf("k_left_edge = %.2f, k_right_edge = %.2f, k_top_edge = %.2f\n",
  	 k_left_edge, k_right_edge, k_top_edge);
  printf("chair at %.2f, %.2f; table at %.2f, %.2f\n",
  	 chair.x, chair.y, table.x, table.y);
  
  //read endpoints in from files
  int num_tracks = 9;
  Point2d endpoints[num_tracks];
  int offset;
  char namebuf[100];
  for (int i = 0; i < num_tracks; i++){
    memset(namebuf, 0, 100);
    if (i > 1)
      offset = 2; //doing this to skip trial003 (bad data file)
    else 
      offset = 1;
    sprintf(namebuf, "./trial0%02d/track.txt", i+offset);
    endpoints[i] = ReadTrack(namebuf);//}
    printf("endpoints[%d]: x = %f, y = %f, trial0%02d\n",
    	   i, endpoints[i].x, endpoints[i].y, i+offset);
    }

  //make matrix of angles to obstacles
  int num_obstacles = 2;
  double angle_matrix[num_obstacles][num_tracks];
  for (int i = 0; i < num_tracks; i++){
    angle_matrix[0][i] = AngleBetween(endpoints[i], table);
    angle_matrix[1][i] = AngleBetween(endpoints[i], chair);
  }
  //print the matrix
  printf("\n");
  printf("Angle    1     2     4     5     6     7     8     9     10\n");
  printf("Table: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 angle_matrix[0][0], angle_matrix[0][1], angle_matrix[0][2],
	 angle_matrix[0][3], angle_matrix[0][4], angle_matrix[0][5],
	 angle_matrix[0][6], angle_matrix[0][7], angle_matrix[0][8]);
  printf("Chair: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 angle_matrix[1][0], angle_matrix[1][1], angle_matrix[1][2],
	 angle_matrix[1][3], angle_matrix[1][4], angle_matrix[1][5],
	 angle_matrix[1][6], angle_matrix[1][7], angle_matrix[1][8]);
  //make matrix of scores
  int num_sentences = 9; //4x single-obstacle prepositions * 2 obstacles
                         //+ 1x double-obstacle preposition
  double the_matrix[num_sentences][num_tracks];
  for (int i = 0; i < num_tracks; i++){
    the_matrix[0][i] = Left(endpoints[i],table);
    the_matrix[1][i] = Right(endpoints[i],table);
    the_matrix[2][i] = Front(endpoints[i],table);
    the_matrix[3][i] = Behind(endpoints[i],table);
    the_matrix[4][i] = Left(endpoints[i],chair);
    the_matrix[5][i] = Right(endpoints[i],chair);
    the_matrix[6][i] = Front(endpoints[i],chair);
    the_matrix[7][i] = Behind(endpoints[i],chair);
    the_matrix[8][i] = Between(endpoints[i],table, chair);
  }
  //print the matrix
  printf("\n");
  printf("                      1.L-T 2.L-T 4.R-C 5.F-T 6.F-T 7.B-T 8.B-T 9.BTC 10.BTC\n");
  printf("Robot left of table:  %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[0][0], the_matrix[0][1], the_matrix[0][2],
	 the_matrix[0][3], the_matrix[0][4], the_matrix[0][5],
	 the_matrix[0][6], the_matrix[0][7], the_matrix[0][8]);
 printf("Robot right of chair: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[5][0], the_matrix[5][1], the_matrix[5][2],
	 the_matrix[5][3], the_matrix[5][4], the_matrix[5][5],
	 the_matrix[5][6], the_matrix[5][7], the_matrix[5][8]);
  printf("Robot front of table: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[2][0], the_matrix[2][1], the_matrix[2][2],
	 the_matrix[2][3], the_matrix[2][4], the_matrix[2][5],
	 the_matrix[2][6], the_matrix[2][7], the_matrix[2][8]);
  printf("Robot behind table:   %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[3][0], the_matrix[3][1], the_matrix[3][2],
	 the_matrix[3][3], the_matrix[3][4], the_matrix[3][5],
	 the_matrix[3][6], the_matrix[3][7], the_matrix[3][8]);
  printf("Robot between\n"
	 "table and chair:      %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[8][0], the_matrix[8][1], the_matrix[8][2],
	 the_matrix[8][3], the_matrix[8][4], the_matrix[8][5],
	 the_matrix[8][6], the_matrix[8][7], the_matrix[8][8]);

  printf("DIDN'T DO THE COMBINATIONS BELOW\n");
  printf("Robot right of table: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[1][0], the_matrix[1][1], the_matrix[1][2],
	 the_matrix[1][3], the_matrix[1][4], the_matrix[1][5],
	 the_matrix[1][6], the_matrix[1][7], the_matrix[1][8]);
  printf("Robot left of chair:  %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[4][0], the_matrix[4][1], the_matrix[4][2],
	 the_matrix[4][3], the_matrix[4][4], the_matrix[4][5],
	 the_matrix[4][6], the_matrix[4][7], the_matrix[4][8]);
 
  printf("Robot front of chair: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[6][0], the_matrix[6][1], the_matrix[6][2],
	 the_matrix[6][3], the_matrix[6][4], the_matrix[6][5],
	 the_matrix[6][6], the_matrix[6][7], the_matrix[6][8]);
  printf("Robot behind chair:   %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[7][0], the_matrix[7][1], the_matrix[7][2],
	 the_matrix[7][3], the_matrix[7][4], the_matrix[7][5],
	 the_matrix[7][6], the_matrix[7][7], the_matrix[7][8]);

  return 0;
}

