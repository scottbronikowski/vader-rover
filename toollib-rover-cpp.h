/*
  Header for toollib-rover interface between vader-rover and dsci

  Author: Scott Bronikowski
  Date: 4 April 2014
 */
#ifndef TOOLLIB_ROVER_H
#define TOOLLIB_ROVER_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <Imlib2.h>
#include <string.h>
#include <netdb.h>
#include <errno.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/stat.h>

// for OpenCV
#ifdef __cplusplus
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#else
#include <cv.h>
#include <highgui.h>
#endif

// other defines copied from point-grey.h
#ifndef TRUE
#define TRUE (0==0)
#endif
#ifndef FALSE
#define FALSE (0!=0)
#endif
#define QUANTUM 1000
#define MAX_THREADS 1
#define rover_error(...) {				\
    fprintf(stderr, "%s:%d: ", __FUNCTION__, __LINE__);	\
    fprintf(stderr, __VA_ARGS__);			\
    fprintf(stderr, "\n");				\
    exit(-1);						\
  }
#define BARRIER(t1, t2) {					\
    int retval = pthread_barrier_wait(&barrier);                \
    if (retval!=0&&retval!=PTHREAD_BARRIER_SERIAL_THREAD) {     \
      rover_error("%s %u can't wait on %s barrier", t1, id, t2); \
    }                                                           \
  }

// structures
struct PointGrey_t2 {
  //Image convertedImage; //, rawImage;
  //PixelFormat pixFormat;
  //BayerTileFormat bayerFormat;
  //unsigned char* pData;
  //unsigned int rows, cols, stride, dataSize;
  //Imlib_Image finalImage;
  int new_fd;
  int img_size;
  cv::Mat uncompressedImage;
  //CvMat uncompressedImage;
};

//globals
extern const char* k_FrontCamPort;
extern const char* k_PanoCamPort;
extern const int BACKLOG;
extern const char* k_OutputDir;


// functions called from Scheme

// #ifdef __cplusplus
// extern "C"
// #endif
// int hello_world(int);

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
void sigchld_handler(int s);
void* get_in_addr(struct sockaddr *sa);
int StartServer(const char* PORT);
int AcceptConnection(int sockfd);
int recvall(int s, unsigned char* buf, int* len);
int CheckSaving(const char *dir);
int OpenCV_ReceiveFrame(PointGrey_t2* PG);
void OpenCV_SaveFrame(PointGrey_t2* PG, int imageCount, char* PORT);
Imlib_Image Convert_OpenCV_to_Imlib(PointGrey_t2* PG);

#endif
