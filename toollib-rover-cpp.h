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

//my defines
#define k_ImgBufSize 5
#define k_numCams 2

// structures
//HAS to be defined in toollib-rover-cpp.cpp because of cv::Mat
// struct PointGrey_t2 {
//   //Image convertedImage; //, rawImage;
//   //PixelFormat pixFormat;
//   //BayerTileFormat bayerFormat;
//   //unsigned char* pData;
//   //unsigned int rows, cols, stride, dataSize;
//   //Imlib_Image finalImage;
//   int new_fd;
//   int img_size;
//   cv::Mat uncompressedImage;
//   //CvMat uncompressedImage;
// };

struct CamGrab_t {
  Imlib_Image* ImgArray[k_ImgBufSize];
  pthread_mutex_t ImgArrayLock[k_ImgBufSize];
  int MostRecent;
  char* PortNumber;
};

struct AllCams_t {
  struct CamGrab_t* CG[k_numCams];
};

//global constants
extern const char* k_FrontCamPort;
extern const char* k_PanoCamPort;
extern const int BACKLOG;
extern const char* k_OutputDir;
//extern const int k_ImgBufSize = 5;

//global variables
// extern Imlib_Image* FrontCamArray[k_ImgBufSize];
// extern Imlib_Image* PanoCamArray[k_ImgBufSize];
// extern pthread_mutex_t FrontCamArrayLock[k_ImgBufSize];
// extern pthread_mutex_t PanoCamArrayLock[k_ImgBufSize];
// extern int FrontCamMostRecent;
// extern int PanoCamMostRecent;

extern struct CamGrab_t* FrontCam;
extern struct CamGrab_t* PanoCam;
extern struct AllCams_t* AllCams;
extern pthread_t grab_threads[k_numCams];



// functions called from Scheme

// #ifdef __cplusplus
// extern "C"
// #endif
// int hello_world(int);

#ifdef __cplusplus
extern "C"
#endif
int rover_server_test(char* PORT);

#ifdef __cplusplus
extern "C"
#endif
int rover_server_setup(void);

#ifdef __cplusplus
extern "C"
#endif
void rover_server_start(void);

// #ifdef __cplusplus
// extern "C" {
// #endif
// void* rover_server_grab(void* args);
// // int rover_server_grab(const char* PORT, Imlib_Image* img_array[k_ImgBufSize],
// // 		      pthread_mutex_t img_array_lock[k_ImgBufSize],
// // 		      int* most_recent);
// #ifdef __cplusplus
// }
// #endif

#ifdef __cplusplus
extern "C"
#endif
void check_image_load_and_save(void);

#ifdef __cplusplus
extern "C"
#endif
int tutorial(void);


// functions NOT called from Scheme
void* rover_server_grab(void* args);
void sigchld_handler(int s);
void* get_in_addr(struct sockaddr *sa);
int StartServer(const char* PORT);
int AcceptConnection(int sockfd);
int recvall(int s, unsigned char* buf, int* len);
int CheckSaving(const char *dir);
// These can't be declared here b/c PointGrey_t2 not defined yet
// int OpenCV_ReceiveFrame(PointGrey_t2* PG);
// void OpenCV_SaveFrame(PointGrey_t2* PG, int imageCount, char* PORT);
// Imlib_Image Convert_OpenCV_to_Imlib(PointGrey_t2* PG);
Imlib_Image Get_Image_from_ImgArray(CamGrab_t* CG);
#endif
