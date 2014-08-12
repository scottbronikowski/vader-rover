/*
  Header for data analysis program
  Author: Scott Bronikowski
  Date: 11 August 2014
*/
#ifndef DATA_ANALYSIS_H
#define DATA_ANALYSIS_H
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

#define PI (3.14159265359)
#define NEGATIVE_INFINITY (-1.0/0.0)
#define METERS_PER_FOOT (0.3048)

// //measurements of the area COMMENT THESE OUT SOON!!!!
// #define FIELD_WIDTH (20.1) //in feet
// #define FIELD_HEIGHT (16.7) //in feet
// #define ORIGIN_OFFSET (10.2) //in feet, distance from left edge to robot start point
using namespace cv;

struct Obstacle_t {
  char name[100];
  Point2d loc;
};
struct Track_t {
  char truth[100];
  int num_points;
  Point2d* points; //can't create an array points[num_points], so trying pointer instead
  float* thetas;
};

double AngleBetween(Point2d p1, Point2d p2);
double Left(Point2d robot, Point2d obstacle);
double Right(Point2d robot, Point2d obstacle);
double Front(Point2d robot, Point2d obstacle);
double Behind(Point2d robot, Point2d obstacle);
double Between(Point2d robot, Point2d obstacle1, Point2d obstacle2);
Point2d ReadEndpoint(char* filename);
int LineCount(char* filename);
int ReadTrack(char* path, Track_t* track);

//borrowed/modified from hmm-def.c
double my_exp(double x);
double sigmoid(double x, double a, double b);
double normalize_orientation(double angle);
double orientation_plus(double x, double y);
double orientation_minus(double x, double y);

#endif //DATA_ANALYSIS_H

