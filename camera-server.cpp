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

#include "miniz.c"

#include "FlyCapture2.h"
using namespace FlyCapture2;

//globals
const char* k_FrontCamPort = "3601";
const char* k_PanoCamPort = "3602";
const int BACKLOG = 5;
//const char k_OutputDir[] = "/home/sbroniko/vader-rover/images/";
const char k_OutputDir[] = "/aux/sbroniko/images/";
//structures
struct PointGrey_t2 {
  Image convertedImage; //, rawImage;
  //PixelFormat pixFormat;
  //BayerTileFormat bayerFormat;
  //  unsigned char* pData;
  //unsigned int rows, cols, stride, dataSize;
  Imlib_Image finalImage;
};

//prototypes
void sigchld_handler(int s);
void *get_in_addr(struct sockaddr *sa);
int StartServer(const char* PORT);
int AcceptConnection(int sockfd);
int recvall(int s, unsigned char* buf, int* len);
int CheckSaving(const char *dir);
void PrintError( Error error );
void CheckPGR(Error error);
void PGR_SaveImage(PointGrey_t2* PG, const char* PORT);
int ReceiveMetadata(int new_fd, unsigned int* rows, unsigned int* cols, 
		    unsigned int* stride, unsigned int* dataSize, 
		    PixelFormat* pixFormat, BayerTileFormat* bayerFormat);
// int SetMetadata(PointGrey_t2* PG, const unsigned int rows, const unsigned int cols,
// 		const unsigned int stride, const unsigned int dataSize, 
// 		const PixelFormat pixFormat, const BayerTileFormat bayerFormat);

int main(int argc, char** argv)
{
  /* input error checking */
  if (argc != 2)
    {
      fprintf(stderr, "Usage: %s portnumber (%s or %s)\n",
	      argv[0], k_FrontCamPort, k_PanoCamPort);
      exit(1);
    }
  if ((strcmp(argv[1], k_FrontCamPort) != 0) &&
      (strcmp(argv[1], k_PanoCamPort) != 0))
    {
      fprintf(stderr, "Invalid port number chosen\n");
      exit(1);
    }
  /* input is valid if we get here */
      
      
  int sockfd, new_fd;  // listen on sock_fd, new connection on new_fd
  char* PORT = argv[1];
  /* struct sockaddr_storage their_addr; // connector's address information */
  /* socklen_t sin_size; */
  struct sigaction sa;
  /* char s[INET6_ADDRSTRLEN]; */
  
  sockfd = StartServer(PORT);
  //printf("sockfd = %d, port = %s\n",sockfd,PORT);
  
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
  
  //int i = 0;
  
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
	  //printf("forking %d, new_fd = %d\n",i,new_fd);
	  //i++;
	  close(sockfd); // child doesn't need the listener

	  //here's where we do the magic
	  PointGrey_t2* PG = new PointGrey_t2;
	  int img_size;
	  // unsigned int* rows = new unsigned int;
	  // unsigned int* cols = new unsigned int;
	  // unsigned int* stride = new unsigned int;
	  // unsigned int* dataSize = new unsigned int;
	  // PixelFormat* pixFormat = new PixelFormat;
	  // BayerTileFormat* bayerFormat = new BayerTileFormat;
	  unsigned int rows, cols, stride, dataSize;
	  PixelFormat pixFormat;
	  BayerTileFormat bayerFormat;
	  bool firstImage = true;
	  
	  while(1)
	    {
	      if (firstImage)
		{
		  //first receive dimensions/metadata
		  if (ReceiveMetadata(new_fd, &rows, &cols, &stride, &dataSize, 
				      &pixFormat, &bayerFormat) != 0)
		    {
		      printf("Error receiving metadata\n");
		      break;
		    }
		  img_size = (int)(dataSize);
		  firstImage = false;
		}
	      // retval = recv(new_fd, &PG->cols, sizeof(PG->cols), 0);
	      // if (retval < 0)
	      // 	{
	      // 	  printf("Error receiving cols\n");
	      // 	  break;
	      // 	}
	      // if (retval == 0)
	      // 	{
	      // 	  printf("Sender stopped sending\n");
	      // 	  break;
	      // 	}
	      // if (recv(new_fd, &PG->rows, sizeof(PG->rows),0) <= 0)
	      // 	{
	      // 	  printf("Error receiving rows\n");
	      // 	}
	      // if (recv(new_fd, &PG->stride, sizeof(PG->stride),0) <= 0)
	      // 	{
	      // 	  printf("Error receiving stride\n");
	      // 	}
	      // if (recv(new_fd, &PG->dataSize, sizeof(PG->dataSize),0) <= 0)
	      // 	{
	      // 	  printf("Error receiving dataSize\n");
	      // 	}
	      // if (recv(new_fd, &PG->pixFormat, sizeof(PG->pixFormat),0) <= 0)
	      // 	{
	      // 	  printf("Error receiving pixFormat\n");
	      // 	}
	      // if (recv(new_fd, &PG->bayerFormat, sizeof(PG->bayerFormat),0) <= 0)
	      // 	{
	      // 	  printf("Error receiving bayerFormat\n");
	      // 	}
	      //check received data
	      // printf("rows = %u, cols = %u, stride = %u, dataSize = %u\n",
	      // 	     rows, cols, stride, dataSize);
	      // printf("pixFormat = %u, bayerFormat = %u\n", pixFormat, bayerFormat);
	      /*  DON"T THINK I NEED TO DO THIS */
	      // if (SetMetadata(PG, rows, cols, stride, dataSize, 
	      // 		      pixFormat, bayerFormat) != 0)
	      // 	{
	      // 	  printf("Error setting metadata\n");
	      // 	  break;
	      // 	}


	      //check received data
	      // printf("rows = %u, cols = %u, stride = %u, dataSize = %u\n",
	      // 	     PG->rows, PG->cols, PG->stride, PG->dataSize);
	      // printf("pixFormat = %u, bayerFormat = %u\n", PG->pixFormat, 
	      //        PG->bayerFormat);
	      
	      //then receive data
	      //img_size = (int)(PG->dataSize);
	      


	      unsigned char* buf = (unsigned char*) malloc(img_size);
	      if (recvall(new_fd, buf, &img_size) != 0)
	  	{
	  	  printf("Error in recvall\n");
	  	  break;
	  	}
	      //printf("Received %d bytes of image data\n", img_size);
	      //now use data to build image and save it
	      Image* tmpImage = new Image(rows, cols, stride, buf, dataSize, 
					  pixFormat, bayerFormat);
	      
	      // Image* tmpImage = new Image(PG->rows, PG->cols, PG->stride, buf,
	      // 			       PG->dataSize, PG->pixFormat, 
	      // 			       PG->bayerFormat);
	      CheckPGR(tmpImage->Convert(PIXEL_FORMAT_BGR, &PG->convertedImage));
	      PGR_SaveImage(PG, PORT);
	      //clean up memory allocations
	      delete tmpImage;
	      // delete pixFormat;
	      // delete bayerFormat;
	      // delete rows;
	      // delete cols;
	      // delete stride;
	      // delete dataSize;
	      free(buf);

	    }
	  firstImage = true;
	  /* second draft*/
	  // unsigned int width, height, depth;
	  // int img_size, retval;
	  // while(1)
	  //   {
	  //     //first receive size (w, h, d)
	  //     retval = recv(new_fd, &width, sizeof(width), 0);
	  //     if (retval < 0)
	  // 	{
	  // 	  printf("Error receiving width\n");
	  // 	  break;
	  // 	}
	  //     if (retval == 0)
	  // 	{
	  // 	  printf("Sender stopped sending\n");
	  // 	  break;
	  // 	}
	  //     if (recv(new_fd, &height, sizeof(height), 0) <= 0)
	  // 	{
	  // 	  printf("Error receiving height\n");
	  // 	}
	  //     if (recv(new_fd, &depth, sizeof(depth), 0) <= 0)
	  // 	{
	  // 	  printf("Error receiving depth\n");
	  // 	}
	  //     printf("Received w x h x d = %u x %u x %u\n", width, height, depth);

	  //     //then receive data
	  //     img_size = (int)(width * depth * height);
	  //     unsigned char* buf = (unsigned char*) malloc(img_size);
	  //     if (recvall(new_fd, buf, &img_size) != 0)
	  // 	{
	  // 	  printf("Error in recvall\n");
	  // 	  break;
	  // 	}
	  //     printf("Received %d bytes of image data\n", img_size);
	  //     free(buf);
	  //   }
	  /* end second draft*/


	  /* /\* first draft -- using strings with length sent before string *\/ */
	  /* int buflen, retval; */
	  /* while(1) */
	  /*   { */
	  /*     //first receive size */
	  /*     retval = recv(new_fd, &buflen, sizeof(buflen), 0); */
	  /*     if (retval < 0) */
	  /* 	{ */
	  /* 	  printf("Error receiveing buflen\n"); */
	  /* 	  break; */
	  /* 	} */
	  /*     if (retval == 0) */
	  /* 	{ */
	  /* 	  printf("Sender stopped sending\n"); */
	  /* 	  break; */
	  /* 	} */
	  /*     printf("received buflen: %d\n", buflen); */
	  /*     //then receive data */
	  /*     unsigned char* buf = malloc(buflen); */
	  /*     if (recvall(new_fd, buf, &buflen) != 0) */
	  /* 	{ */
	  /* 	  printf("Error in recvall\n"); */
	  /* 	  break; */
	  /* 	} */
	  /*     printf("received buf: %s\n", buf); */
	  /*     free(buf); */
	  /*   } */
	  /* /\* end first draft *\/ */
	  
	  /* if (send(new_fd, "Hello, world!", 13, 0) == -1) */
	  /* 	perror("send"); */
	  
	  //printf("closed sockfd\n");
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

void *get_in_addr(struct sockaddr *sa)
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
  printf("in recvall: received %d\n", *len);
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

void PrintError( Error error )
{
    error.PrintErrorTrace();
}

void CheckPGR(Error error)
{
  if (error != PGRERROR_OK)
  {
    PrintError( error );
    abort();
    //return -1;
  }
  // else
  // {
  //   return 0;
  // }
}

void PGR_SaveImage(PointGrey_t2* PG, const char* PORT)
{
  // Create a unique filename
  char filename[512];
  sprintf(filename, "%s%s-PGR-final.ppm", k_OutputDir, PORT);
  // Save the image. If a file format is not passed in, then the file
  // extension is parsed to attempt to determine the file format.
  CheckPGR(PG->convertedImage.Save(filename));
  printf("Saved %s\n",filename);
}

int ReceiveMetadata(int new_fd, unsigned int* rows, unsigned int* cols, 
		    unsigned int* stride, unsigned int* dataSize, 
		    PixelFormat* pixFormat, BayerTileFormat* bayerFormat)
{
  int retval = recv(new_fd, cols, sizeof(*cols), 0);
  // printf("sizeof(cols) = %zu, sizeof(*cols) = %zu\n",
  // 	 sizeof(cols), sizeof(*cols));
  printf("in ReceiveMetadata\n");
  if (retval < 0)
    {
      printf("Error receiving cols\n");
    }
  if (retval == 0)
    {
      printf("Sender stopped sending\n");
      return -1;
    }
  if (recv(new_fd, rows, sizeof(*rows),0) <= 0)
    {
      printf("Error receiving rows\n");
    }
  if (recv(new_fd, stride, sizeof(*stride),0) <= 0)
    {
      printf("Error receiving stride\n");
    }
  if (recv(new_fd, dataSize, sizeof(*dataSize),0) <= 0)
    {
      printf("Error receiving dataSize\n");
    }
  if (recv(new_fd, pixFormat, sizeof(*pixFormat),0) <= 0)
    {
      printf("Error receiving pixFormat\n");
    }
  if (recv(new_fd, bayerFormat, sizeof(*bayerFormat),0) <= 0)
    {
      printf("Error receiving bayerFormat\n");
    }
  //check received data
  // printf("rows = %u, cols = %u, stride = %u, dataSize = %u\n",
  // 	     rows, cols, stride, dataSize);
  // printf("pixFormat = %u, bayerFormat = %u\n", pixFormat,
  // 	     bayerFormat);
  return 0;
}


// int SetMetadata(PointGrey_t2* PG, const unsigned int rows, const unsigned int cols,
// 		const unsigned int stride, const unsigned int dataSize, 
// 		const PixelFormat pixFormat, const BayerTileFormat bayerFormat)
// {
//   PG->rows = rows;
//   PG->cols = cols;
//   PG->stride = stride;
//   PG->dataSize = dataSize;
//   PG->pixFormat = pixFormat;
//   PG->bayerFormat = bayerFormat;
//   return 0;
// }
