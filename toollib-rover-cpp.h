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
#include <fcntl.h>
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
#ifdef __cplusplus
//uses OpenCV C++ API
struct PointGrey_t2 {
  int new_fd;
  int img_size;
  cv::Mat uncompressedImage;
};
#endif

struct CamGrab_t {
  Imlib_Image* ImgArray[k_ImgBufSize];
  pthread_mutex_t ImgArrayLock[k_ImgBufSize];
  int Set[k_ImgBufSize];
  int MostRecent;
  pthread_mutex_t MostRecentLock;
  char* PortNumber;
  int LastDisplayed;
  Imlib_Image LastDisplayedImage;
};

struct AllCams_t {
  struct CamGrab_t* CG[k_numCams];
};

//global constants
extern const char* k_FrontCamPort;
extern const char* k_PanoCamPort;
extern const int BACKLOG;
extern const char* k_OutputDir;


//global variables
extern struct CamGrab_t* FrontCam;
extern struct CamGrab_t* PanoCam;
//extern struct AllCams_t* AllCams;
extern pthread_t grab_threads[k_numCams];
extern int grab_threads_should_die;

// functions called from Scheme
#ifdef __cplusplus
extern "C"
#endif
int rover_server_setup(void);

#ifdef __cplusplus
extern "C"
#endif
void rover_server_start(void);

#ifdef __cplusplus
extern "C"
#endif
Imlib_Image rover_get_front_cam(void);

#ifdef __cplusplus
extern "C"
#endif
Imlib_Image rover_get_pano_cam(void);

// #ifdef __cplusplus
// extern "C"
// #endif
// void rover_display(void);

#ifdef __cplusplus
extern "C"
#endif
void rover_server_cleanup(void);


// functions NOT called from Scheme
void* rover_server_grab(void* args);
void* get_in_addr(struct sockaddr *sa);
int StartServer(const char* PORT);
int AcceptConnection(int sockfd);
int recvall(int s, unsigned char* buf, int* len);
int CheckSaving(const char *dir);
Imlib_Image Get_Image_from_ImgArray(struct CamGrab_t* CG);
Window FindWindow(char* szWindowToFind);
// Window SearchWindow(char* szWindowToFind, int level, Display *display, 
// 		    Window rootWindow, int iMatchMode, int showErrors);

#ifdef __cplusplus
//use PointGrey_t2, which uses OpenCV C++ API
int OpenCV_ReceiveFrame(PointGrey_t2* PG);
void OpenCV_SaveFrame(PointGrey_t2* PG, int imageCount, char* PORT);
Imlib_Image Convert_OpenCV_to_Imlib(PointGrey_t2* PG);
#endif

#endif