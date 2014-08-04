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

#define pi (3.14159265359)
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

//gives the angle from p2 back to p1
double AngleBetween(Point2d p1, Point2d p2){ 
  return atan2(p1.y - p2.y, p1.x - p2.x);}
//all prepositional functions return a value based on the difference between
//the observed angle and the desired angle-->higher value is better, best
//possible value is 0
double Left(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return -fabs(fabs(angle) - pi);}
double Right(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return -fabs(angle);}
double Front(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return -fabs(angle - (3*pi/2));}
double Behind(Point2d robot, Point2d obstacle){
  double angle = AngleBetween(robot,obstacle);
  return -fabs(fabs(angle) - pi/2);}
double Between(Point2d robot, Point2d obstacle1, Point2d obstacle2){
  double angle1 = AngleBetween(robot,obstacle1);
  double angle2 = AngleBetween(robot,obstacle2);
  return -fabs(pi - fabs(angle1 - angle2));}
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
  // printf("k_left_edge = %.2f, k_right_edge = %.2f, k_top_edge = %.2f\n",
  // 	 k_left_edge, k_right_edge, k_top_edge);
  // printf("chair at %.2f, %.2f; table at %.2f, %.2f\n",
  // 	 chair.x, chair.y, table.x, table.y);
  
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
    endpoints[i] = ReadTrack(namebuf);}
    // printf("endpoints[%d]: x = %f, y = %f, trial0%02d\n",
    // 	   i, endpoints[i].x, endpoints[i].y, i+offset);
    //}

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
  printf("                       LofT  LofT  RofC  FofT  FofT  BhT   BhT   BwTC  BwTC\n");
  printf("Robot left of table:  %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[0][0], the_matrix[0][1], the_matrix[0][2],
	 the_matrix[0][3], the_matrix[0][4], the_matrix[0][5],
	 the_matrix[0][6], the_matrix[0][7], the_matrix[0][8]);
  printf("Robot right of table: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[1][0], the_matrix[1][1], the_matrix[1][2],
	 the_matrix[1][3], the_matrix[1][4], the_matrix[1][5],
	 the_matrix[1][6], the_matrix[1][7], the_matrix[1][8]);
  printf("Robot front of table: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[2][0], the_matrix[2][1], the_matrix[2][2],
	 the_matrix[2][3], the_matrix[2][4], the_matrix[2][5],
	 the_matrix[2][6], the_matrix[2][7], the_matrix[2][8]);
  printf("Robot behind table:   %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[3][0], the_matrix[3][1], the_matrix[3][2],
	 the_matrix[3][3], the_matrix[3][4], the_matrix[3][5],
	 the_matrix[3][6], the_matrix[3][7], the_matrix[3][8]);
  printf("Robot left of chair:  %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[4][0], the_matrix[4][1], the_matrix[4][2],
	 the_matrix[4][3], the_matrix[4][4], the_matrix[4][5],
	 the_matrix[4][6], the_matrix[4][7], the_matrix[4][8]);
  printf("Robot right of chair: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[5][0], the_matrix[5][1], the_matrix[5][2],
	 the_matrix[5][3], the_matrix[5][4], the_matrix[5][5],
	 the_matrix[5][6], the_matrix[5][7], the_matrix[5][8]);
  printf("Robot front of chair: %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[6][0], the_matrix[6][1], the_matrix[6][2],
	 the_matrix[6][3], the_matrix[6][4], the_matrix[6][5],
	 the_matrix[6][6], the_matrix[6][7], the_matrix[6][8]);
  printf("Robot behind chair:   %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[7][0], the_matrix[7][1], the_matrix[7][2],
	 the_matrix[7][3], the_matrix[7][4], the_matrix[7][5],
	 the_matrix[7][6], the_matrix[7][7], the_matrix[7][8]);
  printf("Robot between\n"
	 "table and chair:      %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f %5.2f\n",
	 the_matrix[8][0], the_matrix[8][1], the_matrix[8][2],
	 the_matrix[8][3], the_matrix[8][4], the_matrix[8][5],
	 the_matrix[8][6], the_matrix[8][7], the_matrix[8][8]);

  return 0;
}

