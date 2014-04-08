/*
  Header for toollib-rover interface between vader-rover and dsci

  Author: Scott Bronikowski
  Date: 4 April 2014
 */
#ifndef TOOLLIB_ROVER_H
#define TOOLLIB_ROVER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <Imlib2.h>
#include <sys/stat.h>

// for OpenCV
#include <vector>
#ifdef __cplusplus
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#else
#include <cv.h>
#include <highgui.h>
#endif

// functions called from Scheme
#ifdef __cplusplus
extern "C"
#endif
int hello_world(int);

#ifdef __cplusplus
extern "C"
#endif
int rover_server(char* PORT);

#ifdef __cplusplus
extern "C"
#endif
void check_image_load_and_save(void);

#ifdef __cplusplus
extern "C"
#endif
int tutorial(void);


// functions NOT called from Scheme


#endif
