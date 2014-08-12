/*
Implementation of server to receive camera data from rover

Code adapted from http://www.beej.us/guide/bgnet/output/html/multipage/clientserver.html


Author: Scott Bronikowski
Date: 11 March 2014
*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <errno.h>
// #include <string.h>
// #include <sys/types.h>
// #include <sys/socket.h>
// #include <netinet/in.h>
// #include <netdb.h>
// #include <arpa/inet.h>
// #include <sys/wait.h>
// #include <signal.h>
// #include <Imlib2.h>
// #include <sys/stat.h>

#include "toollib-rover-cpp.h"

//for opencv
//#include <vector>
// #include <opencv2/opencv.hpp>
// #include <opencv2/highgui/highgui.hpp>
//#include <cv.h>
//#include <highgui.h>



//#include <jpeglib.h>
//#include <jinclude.h>
//#include <jerror.h>

// #include "FlyCapture2.h"
// using namespace FlyCapture2;


//global constants;
const char* k_FrontCamPort = "3601";
const char* k_PanoCamPort = "3602";
const int BACKLOG = 5;
const char* k_OutputDir = "/aux/sbroniko/images/";

//global variables
// Imlib_Image* FrontCamArray[k_ImgBufSize];
// Imlib_Image* PanoCamArray[k_ImgBufSize];
// pthread_mutex_t FrontCamArrayLock[k_ImgBufSize];
// pthread_mutex_t PanoCamArrayLock[k_ImgBufSize];
// int FrontCamMostRecent = -1;
// int PanoCamMostRecent = -1;
struct CamGrab_t* FrontCam;
struct CamGrab_t* PanoCam;
struct AllCams_t* AllCams;
pthread_t grab_threads[k_numCams];
int grab_threads_should_die = FALSE;
// int testint = 0;
// pthread_mutex_t testint_mutex;
volatile Window display_pane;

//structures
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
 
//prototypes
// void sigchld_handler(int s);
// //void* get_in_addr(struct sockaddr *sa);
// int StartServer(const char* PORT);
// int AcceptConnection(int sockfd);
// //int recvall(int s, unsigned char* buf, int* len);
// int CheckSaving(const char *dir);

//These need to be declared here because of PointGrey_t2
int OpenCV_ReceiveFrame(PointGrey_t2* PG);
void OpenCV_SaveFrame(PointGrey_t2* PG, int imageCount, char* PORT);
Imlib_Image Convert_OpenCV_to_Imlib(PointGrey_t2* PG);

// functions called from Scheme (must have extern "C" to prevent mangling)

// extern "C" int hello_world(int i)
// {
//   printf("hello\n");
//   return i+1;
// } 


extern "C" int tutorial(void)
{
  using namespace cv;
  char imageName[100];
  sprintf(imageName, "/home/sbroniko/temp_photo.jpg");
  
  Mat image;
  image = imread( imageName, 1 );
  
  if( !image.data )
    {
      printf( " No image data \n " );
      return -1;
    }
  
  Mat gray_image;
  cvtColor( image, gray_image, CV_BGR2GRAY );
  
  imwrite( "/home/sbroniko/Gray_Image.jpg", gray_image );
  
  namedWindow( imageName, CV_WINDOW_AUTOSIZE );
  namedWindow( "Gray image", CV_WINDOW_AUTOSIZE );
  
  imshow( imageName, image );
  imshow( "Gray image", gray_image );
  
  waitKey(0);
   
  return 0;
}


extern "C" void check_image_load_and_save(void)
{
  printf("I am in check_image...\n");
  // Imlib_Image imtemp = imlib_load_image("/home/sbroniko/temp_photo.jpg");
  // imlib_context_set_image(imtemp);
  // imlib_save_image("/aux/sbroniko/images/imlibtest.jpg");
  // imlib_free_image_and_decache();
  cv::Mat temp;
  printf("temp declared\n"); 
  temp = (cv::Mat) cv::imread("/home/sbroniko/temp_photo.jpg", CV_LOAD_IMAGE_COLOR);
  printf("after imread\n");
  // cv::namedWindow("windowname");
  // cv::imshow("windowname", temp);
  // cv::waitKey(0);

  std::vector<int> params = std::vector<int>(2);
  params[0] = CV_IMWRITE_JPEG_QUALITY;
  params[1] = 75;
  //params[0] = CV_IMWRITE_PNG_COMPRESSION;
  //params[1] = 9;
  cv::vector<uchar> compressed;
  //cv::imencode(".jpg", temp, compressed);
  cv::imencode(".jpg", temp, compressed, params);
  //cv::imencode(".png", temp, compressed, params);
  printf("after imencode\n");

  cv::Mat temp2;
  temp2 = cv::imdecode(cv::Mat(compressed), CV_LOAD_IMAGE_COLOR);
  printf("after imdecode\n");

  //cv::Mat temp2 = temp;

  if (!imwrite("/aux/sbroniko/images/test.jpg", temp2))
    printf("ERROR!");
  printf("after imwrite\n");


}


extern "C" int rover_server_test (char* PORT)
//extern "C" int rover_server(char* PORT, Imlib_Image* img_array[5])
{
  int sockfd, new_fd;  // listen on sock_fd, new connection on new_fd
  struct sigaction sa;
  
  sockfd = StartServer(PORT);
  
  sa.sa_handler = sigchld_handler; // reap all dead processes
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = SA_RESTART;
  if (sigaction(SIGCHLD, &sa, NULL) == -1) 
    {
      perror("sigaction");
      exit(1);
    }


  if (CheckSaving(k_OutputDir) != 0)
    {
      printf("Cannot save to %s, please check permissions\n",k_OutputDir);
      exit(1);
    }  

  printf("server: waiting for connections...\n");
  
  while(1) 
    {  // main accept() loop
      new_fd = AcceptConnection(sockfd);
      if (new_fd == -1)
	{
	  printf("Error accepting connection\n");
	  break;
	}
      if (!fork()) 
	{ // this is the child process
	  close(sockfd); // child doesn't need the listener

	  //here's where we do the magic
	  PointGrey_t2* PG = new PointGrey_t2;
	  PG->new_fd = new_fd;
	  int imageCount = 0;
	  Imlib_Image temp_img;
	  char tempFilename[512];
	  while (1)
	    {
	      if (OpenCV_ReceiveFrame(PG) != 0)
		break;
	      OpenCV_SaveFrame(PG, imageCount, PORT);
	      temp_img = Convert_OpenCV_to_Imlib(PG);
	      imlib_context_set_image(temp_img);
	      sprintf(tempFilename, "/aux/sbroniko/images/imlib/%s-%.3d.jpg", 
		      PORT, imageCount);
	      imlib_save_image(tempFilename);
	      imlib_free_image_and_decache();
	      imageCount++;
	    }
	  close(new_fd);
	  delete PG;
	  printf("exiting from fork\n");
	  exit(0);
	}
      //printf("after fork\n");
      close(new_fd);  // parent doesn't need this
    }
  
  return 0;
}

extern "C" int rover_server_setup(void)
{
  FrontCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  PanoCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  FrontCam->MostRecent = -1;
  PanoCam->MostRecent = -1;
  FrontCam->PortNumber = (char*) malloc(sizeof(char) * 10);
  strcpy(FrontCam->PortNumber, k_FrontCamPort);
  PanoCam->PortNumber = (char*) malloc(sizeof(char) * 10);
  strcpy(PanoCam->PortNumber, k_PanoCamPort);
  for (int i = 0; i < k_ImgBufSize; i++)
    {
      // pthread_mutex_init(&FrontCamArrayLock[i], NULL);
      // pthread_mutex_init(&PanoCamArrayLock[i], NULL);
      // FrontCamArray[i] = NULL;
      // PanoCamArray[i] = NULL;
      //new style
      pthread_mutex_init(&FrontCam->ImgArrayLock[i], NULL);
      pthread_mutex_init(&PanoCam->ImgArrayLock[i], NULL);
      //FrontCam->ImgArray[i] = NULL;
      //PanoCam->ImgArray[i] = NULL;
      FrontCam->ImgArray[i] = (Imlib_Image *) malloc(sizeof(Imlib_Image));
      PanoCam->ImgArray[i] = (Imlib_Image *) malloc(sizeof(Imlib_Image));
      FrontCam->Set[i] = FALSE;
      PanoCam->Set[i] = FALSE;
    }
  AllCams = (struct AllCams_t*) malloc(sizeof(struct AllCams_t));
  AllCams->CG[0] = FrontCam;
  AllCams->CG[1] = PanoCam;
  //pthread_mutex_init(&testint_mutex, NULL);
  grab_threads_should_die = FALSE;
  printf("rover_server_setup succeeded\n");
  return 0;
}

extern "C" void rover_server_start(void)
{
  pthread_attr_t attributes;
  pthread_attr_init(&attributes);
  pthread_attr_setdetachstate(&attributes, PTHREAD_CREATE_JOINABLE);
  pthread_create(&grab_threads[0], &attributes, rover_server_grab, (void *)FrontCam);
  pthread_create(&grab_threads[1], &attributes, rover_server_grab, (void *)PanoCam);
  pthread_attr_destroy(&attributes);
  
  // will we ever get here?
  //return 0;
  printf("at end of rover_server_start\n");
} 

extern "C" Imlib_Image rover_get_front_cam(void)
{
  printf("getting image from front cam...\n");
  return Get_Image_from_ImgArray(FrontCam);
}

extern "C" Imlib_Image rover_get_pano_cam(void)
{
  printf("getting image from pano cam...\n");
  return Get_Image_from_ImgArray(PanoCam);
}


extern "C" void rover_server_cleanup(void)
{
  grab_threads_should_die = TRUE;
  pthread_join(grab_threads[0], NULL);
  pthread_join(grab_threads[1], NULL);
  printf("rover_server_cleanup completed\n");
}

// extern "C" int rover_server_grab(const char* PORT, Imlib_Image* img_array[k_ImgBufSize],
// 				 pthread_mutex_t img_array_lock[k_ImgBufSize],
// 				 int* most_recent)
//extern "C" 



// functions not called from Scheme
void* rover_server_grab(void* args)
{
  struct CamGrab_t* my_args = (struct CamGrab_t*)args;
  int sockfd, new_fd;  // listen on sock_fd, new connection on new_fd
  // struct sigaction sa;
  XEvent event;
  Display *display = XOpenDisplay("dsci");
  int screen = DefaultScreen(display);
  /* magic to get GUI to run periodically */
  event.type = KeyPress;
  event.xkey.keycode = 9;		/* ESC */
  event.xkey.state = 0;			/* no Mod1Mask */
  /* magic so can display Imlib frames */
  // imlib_context_disconnect_display();
  // imlib_context_set_display(display);
  // imlib_context_set_visual(XDefaultVisual(display, screen));
  // imlib_context_set_colormap(XDefaultColormap(display, screen));
  // imlib_context_set_drawable(display_pane);
  
  sockfd = StartServer(my_args->PortNumber);
  
  // sa.sa_handler = sigchld_handler; // reap all dead processes
  // sigemptyset(&sa.sa_mask);
  // sa.sa_flags = SA_RESTART;
  // if (sigaction(SIGCHLD, &sa, NULL) == -1) 
  //   {
  //     perror("sigaction");
  //     exit(1);
  //   }

  printf("server: waiting for connections...\n");
  
  while(!grab_threads_should_die) 
    {  // main accept() loop
      new_fd = AcceptConnection(sockfd);
      // if (new_fd == -1)
      // 	{
      // 	  printf("Error accepting connection\n");
      // 	  break;
      // 	}
      // CAN'T fork b/c sharing memory between threads
      // if (!fork()) 
      // 	{ // this is the child process
      // 	  close(sockfd); // child doesn't need the listener
      //      while(1)
      while(!grab_threads_should_die && (new_fd != -1))
	{
	  //here's where we do the magic
	  PointGrey_t2* PG = new PointGrey_t2;
	  PG->new_fd = new_fd;
	  Imlib_Image temp_img;
	  int working;
	  while (1)
	    {
	      working = ((my_args->MostRecent) + 1) % k_ImgBufSize;
	      printf("%s-working = %d\n", my_args->PortNumber, working);
	      // pthread_mutex_lock(&testint_mutex);
	      // printf("testint = %d\n", testint);
	      // testint++;
	      // pthread_mutex_unlock(&testint_mutex);
	      if (OpenCV_ReceiveFrame(PG) != 0)
		break;
	      temp_img = Convert_OpenCV_to_Imlib(PG);
	      printf("convert\n");
	      pthread_mutex_lock(&my_args->ImgArrayLock[working]);
	      printf("locked\n");
	      //if (my_args->ImgArray[working] != NULL)
	      if (my_args->Set[working] == TRUE)
	      	{ //clean up memory allocation
	      	  printf("cleaning up memory\n");
	      	  imlib_context_set_image(*my_args->ImgArray[working]);
	      	  imlib_free_image_and_decache();
	      	}
	      else
		{
		  my_args->Set[working] = TRUE;
		}
	      printf("done cleaning memory\n");
	      
	      //my_args->ImgArray[working] = &temp_img;
	      *my_args->ImgArray[working] = temp_img;
	      //imlib_context_set_image(temp_img);
	      //*my_args->ImgArray[working] = imlib_clone_image();
	      printf("assigned\n");
	      my_args->MostRecent = working;
	      // printf("my_args->MostRecent = %d\n", my_args->MostRecent);
	      // printf("FrontCam->MostRecent = %d\n", FrontCam->MostRecent);
	      // printf("FrontCam = %p\n", FrontCam);
	      // printf("PanoCam->MostRecent = %d\n", PanoCam->MostRecent);	  
	      // printf("PanoCam = %p\n", PanoCam);
    	      pthread_mutex_unlock(&my_args->ImgArrayLock[working]);
	      printf("unlocked\n");
	      //imlib_context_set_image(my_args->ImgArray[working]);
	      //XSendEvent(display, display_pane, FALSE, 0, &event);	      
	    }
	  //close(new_fd);
	  delete PG;
	  //printf("exiting from fork\n");
	  //exit(0);
	  printf("exiting from loop after AcceptConnection\n");
	  break;
	}
      //printf("after fork\n");
      close(new_fd);  // parent doesn't need this
      //printf("new_fd closed\n");
    }
  //do cleanup here
  close(sockfd);
  printf("sockfd closed\n");
  return NULL; // (void *)my_args;?????
}

void sigchld_handler(int s)
{
  while(waitpid(-1, NULL, WNOHANG) > 0);
}

void* get_in_addr(struct sockaddr *sa)
{// get sockaddr, IPv4 or IPv6:
  if (sa->sa_family == AF_INET) 
    { 
      return &(((struct sockaddr_in*)sa)->sin_addr);
    }
  return &(((struct sockaddr_in6*)sa)->sin6_addr);
}


int StartServer(const char* PORT)
{
  int sockfd;
  struct addrinfo hints, *servinfo, *p;
  int yes=1;
  int rv;
  
  memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_UNSPEC;
  hints.ai_socktype = SOCK_STREAM;
  hints.ai_flags = AI_PASSIVE; // use my IP
  
  if ((rv = getaddrinfo(NULL, PORT, &hints, &servinfo)) != 0)
    {
      fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(rv));
      return -1;
    }
  
  // loop through all the results and bind to the first we can
  for(p = servinfo; p != NULL; p = p->ai_next) 
    {
      if ((sockfd = socket(p->ai_family, p->ai_socktype,
			   p->ai_protocol)) == -1) 
	{
	  perror("server: socket");
	  continue;
	}
    
      if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes,
		     sizeof(int)) == -1) 
	{
	  perror("setsockopt");
	  exit(1);
	}
    
      if (bind(sockfd, p->ai_addr, p->ai_addrlen) == -1) 
	{
	  close(sockfd);
	  perror("server: bind");
	  continue;
	}
      
      break;
    }
  
  if (p == NULL)  
    {
      fprintf(stderr, "server: failed to bind\n");
      return -1;
    }

  freeaddrinfo(servinfo); // all done with this structure

  if (listen(sockfd, BACKLOG) == -1) 
    {
      perror("listen");
      exit(1);
    } 
  return sockfd;  
}

int AcceptConnection(int sockfd)
{
  struct sockaddr_storage their_addr; // connector's address information
  socklen_t sin_size;
  int new_fd, flags;
  char s[INET6_ADDRSTRLEN];

  //first set sockfd to nonblocking
  if ((flags = fcntl(sockfd, F_GETFL, 0)) == -1)
    flags = 0;
  fcntl(sockfd, F_SETFL, flags | O_NONBLOCK);
  
  sin_size = sizeof(their_addr);
  new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size);
  if (new_fd == -1) 
    {
      //perror("accept");
      return new_fd;
    }
  inet_ntop(their_addr.ss_family,
	    get_in_addr((struct sockaddr *)&their_addr),
	    s, sizeof(s));
  printf("server: got connection from %s\n", s);
  return new_fd;
}

int recvall(int s, unsigned char* buf, int* len)
{
  int total = 0;        // how many bytes we've received
  int bytesleft = *len; // how many we have left to receive
  int n = 0;
  
  while(total < *len) 
    {
      n = recv(s, buf+total, bytesleft, 0);
      //if (n == -1) { break; }
      if (n <= 0) { break; }
      total += n;
      bytesleft -= n;
    }
  *len = total; // return number actually sent here
  //printf("in recvall: received %d\n", *len);
  //return n==-1?-1:0; // return -1 on failure, 0 on success
  return n<=0?-1:0; // return -1 on failure, 0 on success
}

int CheckSaving(const char *dir)
{
  struct stat sb;
  if (!(stat(dir, &sb) == 0 && S_ISDIR(sb.st_mode)))
  {
    if (mkdir(dir, S_IRWXU | S_IRGRP | S_IROTH | S_IXGRP | S_IXOTH) != 0)
    {
      printf("Error creating directory %s\n",dir);
      return -1;
    }
  }
  char tempFileName[512];
  sprintf(tempFileName, "%stest.txt",dir);
  FILE* tempFile = fopen(tempFileName, "w+");
  if (tempFile == NULL)
  {
    printf("Failed to create file in %s.  Please check permissions.\n", dir);
    return -1;
  }
  fclose(tempFile);
  remove(tempFileName);
  //if we get here, we know the directory exists and we can write to it
  return 0;
}

int OpenCV_ReceiveFrame(PointGrey_t2* PG)
{
  //first receive image size
  int retval = recv(PG->new_fd, &PG->img_size, sizeof(PG->img_size), 0);
  if (retval < 0)
    {
      printf("Error receiving image size\n");
      return -1;
    }
  if (retval == 0)
    {
      printf("Sender stopped sending\n");
      return -1;
    }
  //if we get here, we got valid size data
  //printf("Received image size = %d\n", PG->img_size);
  
  //then receive image data
  unsigned char* buf = (unsigned char*) malloc(PG->img_size);
  if (recvall(PG->new_fd, buf, &PG->img_size) != 0)
    {
      printf("Error in recvall\n");
      return -1;
    }
  printf("Received %d bytes of image data\n", PG->img_size);
  
  //copy buf into vector
  cv::vector<uchar> compressed(buf, buf+PG->img_size);
  //clean up memory allocations
  free(buf); 
   
  //now use data to build image and save it
    
  // if (strcmp(PORT, k_FrontCamPort) == 0)
  PG->uncompressedImage = cv::imdecode(cv::Mat(compressed), CV_LOAD_IMAGE_COLOR);
  // else
  // 	PG->uncompressedImage = imdecode(cv::Mat(compressed), CV_LOAD_IMAGE_GRAYSCALE);
  /* ***Don't seem to need to differentiate between color and */
  /* grayscale here -- gray images save gray even when loaded */
  /* as color.*** */
  return 0;
}

void OpenCV_SaveFrame(PointGrey_t2* PG, int imageCount, char* PORT)
{
  char filename[512];
  sprintf(filename, "%s%s-OpenCV-%.3d.jpg", k_OutputDir, 
	  PORT, imageCount);
  cv::imwrite(filename, PG->uncompressedImage);
  return;
}

Imlib_Image Convert_OpenCV_to_Imlib(PointGrey_t2* PG)
{
  cv::Mat tempMat;
  cvtColor(PG->uncompressedImage, tempMat, CV_BGR2BGRA);
  return imlib_create_image_using_copied_data(PG->uncompressedImage.cols,
					      PG->uncompressedImage.rows,
					      (unsigned int*) tempMat.data);}
				
Imlib_Image Get_Image_from_ImgArray(struct CamGrab_t* CG)
{
  Imlib_Image image;
  printf("in Get_Image_from_ImgArray, MostRecent = %d\n", CG->MostRecent);
  if (CG->MostRecent >= 0)
    {
      pthread_mutex_lock(&CG->ImgArrayLock[CG->MostRecent]);
      printf("lock acquired, MostRecent = %d\n", CG->MostRecent);
      imlib_context_set_image(*CG->ImgArray[CG->MostRecent]);
      printf("context set\n");
      // imlib_save_image("/aux/sbroniko/images/imlib-test.jpg");
      // printf("saved\n");
      image = imlib_clone_image();
      printf("cloned\n");
      // imlib_free_image();
      // printf("freed\n");
      pthread_mutex_unlock(&CG->ImgArrayLock[CG->MostRecent]);
      printf("lock released, MostRecent = %d\n", CG->MostRecent);
    }
  else
    {
      image = imlib_create_image(640, 480);
      imlib_context_set_image(image);
      imlib_context_set_color(128, 128, 128, 128);
      imlib_image_fill_rectangle(0, 0, 640, 480);
    }
      
  return image;
}