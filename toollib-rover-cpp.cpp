/*
Implementation of server to receive camera data from rover

Code adapted from http://www.beej.us/guide/bgnet/output/html/multipage/clientserver.html


Author: Scott Bronikowski
Date: 11 March 2014
*/
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

//for opencv
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
//#include <cv.h>
//#include <highgui.h>



//#include <jpeglib.h>
//#include <jinclude.h>
//#include <jerror.h>

// #include "FlyCapture2.h"
// using namespace FlyCapture2;

//#include "toollib-rover-cpp.h"

//globals
const char* k_FrontCamPort = "3601";
const char* k_PanoCamPort = "3602";
const int BACKLOG = 5;
const char* k_OutputDir = "/aux/sbroniko/images/";
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
void sigchld_handler(int s);
//void* get_in_addr(struct sockaddr *sa);
int StartServer(const char* PORT);
int AcceptConnection(int sockfd);
//int recvall(int s, unsigned char* buf, int* len);
int CheckSaving(const char *dir);
//void PGR_SaveImage(PointGrey_t2* PG, const char* PORT);
//int ReceiveMetadata(int new_fd, unsigned int* rows, unsigned int* cols, 
// 		    unsigned int* stride, unsigned int* dataSize, 
// 		    PixelFormat* pixFormat, BayerTileFormat* bayerFormat);
int OpenCV_ReceiveFrame(PointGrey_t2* PG);
void OpenCV_SaveFrame(PointGrey_t2* PG, int imageCount, char* PORT);
Imlib_Image Convert_OpenCV_to_Imlib(PointGrey_t2* PG);


extern "C" int hello_world(int i)
{
  printf("hello\n");
  return i+1;
} 

// extern "C" void start_rover_servers(void)
// {
  
// }


extern "C" int tutorial(void)
{
  using namespace cv;
  char* imageName = "/home/sbroniko/temp_photo.jpg";
  
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


extern "C" int rover_server(char* PORT, Imlib_Image* img_array[5])
{
  /* input error checking */
  // if (argc != 2)
  //   {
  //     fprintf(stderr, "Usage: %s portnumber (%s or %s)\n",
  // 	      argv[0], k_FrontCamPort, k_PanoCamPort);
  //     exit(1);
  //   }
  // if ((strcmp(argv[1], k_FrontCamPort) != 0) &&
  //     (strcmp(argv[1], k_PanoCamPort) != 0))
  //   {
  //     fprintf(stderr, "Invalid port number chosen\n");
  //     exit(1);
  //   }
  /* input is valid if we get here */
    
  int sockfd, new_fd;  // listen on sock_fd, new connection on new_fd
  //char* PORT = port;//argv[1];
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
	  //Imlib_Image temp_img;
	  while (1)
	    {
	      if (OpenCV_ReceiveFrame(PG) != 0)
		break;
	      OpenCV_SaveFrame(PG, imageCount, PORT);
	      // temp_img = Convert_OpenCV_to_Imlib(PG);
	      // imlib_context_set_image(temp_img);
	      // imlib_save_image("/aux/sbroniko/images/imlib/foo.jpg");
	      // imlib_free_image_and_decache();
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
  int new_fd;
  char s[INET6_ADDRSTRLEN];

  sin_size = sizeof(their_addr);
  new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size);
  if (new_fd == -1) 
    {
      perror("accept");
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
  int n;
  
  while(total < *len) {
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

// void PrintError( Error error )
// {
//     error.PrintErrorTrace();
// }

// void CheckPGR(Error error)
// {
//   if (error != PGRERROR_OK)
//   {
//     PrintError( error );
//     abort();
//     //return -1;
//   }
//   // else
//   // {
//   //   return 0;
//   // }
// }

// void PGR_SaveImage(PointGrey_t2* PG, const char* PORT)
// {
//   // Create a unique filename
//   char filename[512];
//   sprintf(filename, "%s%s-PGR-final.ppm", k_OutputDir, PORT);
//   // Save the image. If a file format is not passed in, then the file
//   // extension is parsed to attempt to determine the file format.
//   CheckPGR(PG->convertedImage.Save(filename));
//   printf("Saved %s\n",filename);
// }

// int ReceiveMetadata(int new_fd, unsigned int* rows, unsigned int* cols, 
// 		    unsigned int* stride, unsigned int* dataSize, 
// 		    PixelFormat* pixFormat, BayerTileFormat* bayerFormat)
// {
//   int retval = recv(new_fd, cols, sizeof(*cols), 0);
//   // printf("sizeof(cols) = %zu, sizeof(*cols) = %zu\n",
//   // 	 sizeof(cols), sizeof(*cols));
//   //printf("in ReceiveMetadata\n");
//   if (retval < 0)
//     {
//       printf("Error receiving cols\n");
//     }
//   if (retval == 0)
//     {
//       printf("Sender stopped sending\n");
//       return -1;
//     }
//   if (recv(new_fd, rows, sizeof(*rows),0) <= 0)
//     {
//       printf("Error receiving rows\n");
//     }
//   if (recv(new_fd, stride, sizeof(*stride),0) <= 0)
//     {
//       printf("Error receiving stride\n");
//     }
//   if (recv(new_fd, dataSize, sizeof(*dataSize),0) <= 0)
//     {
//       printf("Error receiving dataSize\n");
//     }
//   if (recv(new_fd, pixFormat, sizeof(*pixFormat),0) <= 0)
//     {
//       printf("Error receiving pixFormat\n");
//     }
//   if (recv(new_fd, bayerFormat, sizeof(*bayerFormat),0) <= 0)
//     {
//       printf("Error receiving bayerFormat\n");
//     }
//   //check received data
//   // printf("rows = %u, cols = %u, stride = %u, dataSize = %u\n",
//   // 	     rows, cols, stride, dataSize);
//   // printf("pixFormat = %u, bayerFormat = %u\n", pixFormat,
//   // 	     bayerFormat);
//   return 0;
// }

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
  //std::vector<uchar> compressed(buf, buf+PG->img_size);
  // for (int i = 17000; i < 17015; i++)
  //   {
  //     printf("%u", compressed[i]);
  //   }
  // printf("\n");
  //printf("Size = %d\n", compressed.size());
  
  //clean up memory allocations
  free(buf); 
   
  //now use data to build image and save it
    
  // if (strcmp(PORT, k_FrontCamPort) == 0)

  PG->uncompressedImage = cv::imdecode(cv::Mat(compressed), CV_LOAD_IMAGE_COLOR);
  //PG->uncompressedImage = cvDecodeImageM((CvMat) compressed, CV_LOAD_IMAGE_COLOR);

  //imshow("temp",PG->uncompressedImage);
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
  sprintf(filename, "%s%s-OpenCV-%.3d.png", k_OutputDir, 
	  PORT, imageCount);
  cv::imwrite(filename, PG->uncompressedImage);
  //cvSaveImage(filename, &PG->uncompressedImage);
  
  return;
}

Imlib_Image Convert_OpenCV_to_Imlib(PointGrey_t2* PG)
{
  return imlib_create_image_using_copied_data(PG->uncompressedImage.cols,
					      PG->uncompressedImage.rows,
					      (unsigned int*) PG->uncompressedImage.data);
} 
