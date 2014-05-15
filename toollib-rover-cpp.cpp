/*
Tool library for running vader-rover in Scheme GUI.
Includes:
--Implementation of server to receive camera data from rover; communication 
  code adapted from 
  http://www.beej.us/guide/bgnet/output/html/multipage/clientserver.html


Author: Scott Bronikowski
Date: 11 March 2014
*/

#include "toollib-rover-cpp.h"

//global constants;
const char* k_FrontCamPort = "3601";
const char* k_PanoCamPort = "3602";
const int BACKLOG = 5;
const char* k_OutputDir = "/aux/sbroniko/images/";
const char* k_LogPort = "2001";
//const char* k_LogDir = "/home/sbroniko/vader-rover/logs/";
const char* k_LogDir = "/aux/sbroniko/vader-rover/logs/";
const int k_LogBufSize = 100;
const int k_timestamp_len = 18; //string length for timestamp only (18)
//for commander viewer
const char* k_CdrFrontCamPort = "36010";
const char* k_CdrPanoCamPort = "36020";
const char* k_Server = "seykhl.ecn.purdue.edu"; //driver's workstation

//global variables
struct CamGrab_t* FrontCam;
struct CamGrab_t* PanoCam;
struct CamGrab_t* CdrFrontCam;
struct CamGrab_t* CdrPanoCam;
pthread_t grab_threads[k_numCams];
int grab_threads_should_die;
Window display_pane, cdr_display_pane;
pthread_t log_thread;
int log_thread_should_die, log_sockfd, log_new_fd;
FILE* log_file;
unsigned int framecount;
bool first_count = true;
int cdr_viewer_active = FALSE;

// functions called from Scheme (must have extern "C" to prevent mangling)
extern "C" int rover_server_setup(void)
{
  //setup for displaying images (grab threads)
  framecount = 1;
  FrontCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  PanoCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  pthread_mutex_init(&FrontCam->MostRecentLock, NULL);
  pthread_mutex_init(&PanoCam->MostRecentLock, NULL);
  FrontCam->MostRecent = -1;
  PanoCam->MostRecent = -1;
  FrontCam->LastDisplayed = -1;
  PanoCam->LastDisplayed = -1;
  FrontCam->PortNumber = (char*) malloc(sizeof(char) * 10);
  strcpy(FrontCam->PortNumber, k_FrontCamPort);
  PanoCam->PortNumber = (char*) malloc(sizeof(char) * 10);
  strcpy(PanoCam->PortNumber, k_PanoCamPort);
  for (int i = 0; i < k_ImgBufSize; i++)
    {
      pthread_mutex_init(&FrontCam->ImgArrayLock[i], NULL);
      pthread_mutex_init(&PanoCam->ImgArrayLock[i], NULL);
      FrontCam->ImgArray[i] = (Imlib_Image *) malloc(sizeof(Imlib_Image));
      PanoCam->ImgArray[i] = (Imlib_Image *) malloc(sizeof(Imlib_Image));
      FrontCam->Set[i] = FALSE;
      PanoCam->Set[i] = FALSE;
    }
  grab_threads_should_die = FALSE;
  char windowname[] = "driver-viewer";
  display_pane = FindWindow(windowname);

  //setup for logging data (log thread)
  log_thread_should_die = FALSE;
  if (CheckSaving(k_LogDir) != 0)
    {
      printf("rover_server_setup() failed due to inability to log data\n");
      return -1;
    }
  //create log DIRECTORY with GMT as name
  char tempName[k_LogBufSize];
  time_t now;
  now = time(NULL);
  if (now != -1)
    strftime(tempName, k_LogBufSize, "%F-%T", gmtime(&now));
  else
    {
      printf("error getting time\n");
      return -1;
    }
  char logDirName[k_LogBufSize];
  logDirName[0] = '\0';
  sprintf(logDirName, "%s%s", k_LogDir, tempName);
  struct stat sb;
  if (!(stat(logDirName, &sb) == 0 && S_ISDIR(sb.st_mode)))
  {
    if (mkdir(logDirName, S_IRWXU | S_IRGRP | S_IROTH | S_IXGRP | S_IXOTH) != 0)
    {
      printf("Error creating directory %s\n",logDirName);
      return -1;
    }
  }
  //create log file
  char logFileName[k_LogBufSize];
  logFileName[0] = '\0';
  sprintf(logFileName, "%s%s/log.txt", k_LogDir, tempName);
  log_file = fopen(logFileName, "w+");
  if (log_file == NULL)
    {
      printf("Failed to create file %s.  Please check permissions.\n", logFileName);
      return -1;
    }
  //create timestamp logs for front and pano cams
  logFileName[0] = '\0';
  sprintf(logFileName, "%s%s/camera_front.txt", k_LogDir, tempName);
  FrontCam->file_ptr = fopen(logFileName, "w+");
  if (FrontCam->file_ptr == NULL)
    {
      printf("Failed to create file %s.  Please check permissions.\n", logFileName);
      return -1;
    }
  logFileName[0] = '\0';
  sprintf(logFileName, "%s%s/camera_pano.txt", k_LogDir, tempName);
  PanoCam->file_ptr = fopen(logFileName, "w+");
  if (PanoCam->file_ptr == NULL)
    {
      printf("Failed to create file %s.  Please check permissions.\n", logFileName);
      return -1;
    }
  //create file names for video files
  FrontCam->video_file_name = (char*) malloc(sizeof(char) * 100);
  sprintf(FrontCam->video_file_name, "%s%s/video_front.avi", k_LogDir, tempName);
  PanoCam->video_file_name = (char*) malloc(sizeof(char) * 100);
  sprintf(PanoCam->video_file_name, "%s%s/video_pano.avi", k_LogDir, tempName);
  //create cv::VideoWriter output_video objects
  cv::Size vid_size = cv::Size(640,480); //**HARDCODED** for 640x480 video
  int codec = CV_FOURCC('M','J','P','G');
  FrontCam->output_video = new cv::VideoWriter(FrontCam->video_file_name, codec, 
					       12.0, vid_size, true);
  PanoCam->output_video = new cv::VideoWriter(PanoCam->video_file_name, codec, 
					      12.0, vid_size, true);


  //set first lines for log file and timestamp log files
  memset(tempName, 0, sizeof(tempName));
  strftime(tempName, k_LogBufSize, "Log file created at %F-%T GMT", gmtime(&now));
  fprintf(log_file, "%s\n", tempName);
  fprintf(FrontCam->file_ptr, "%s\n", tempName);
  fprintf(PanoCam->file_ptr, "%s\n", tempName);


  //open socket for log data from vader-rover
  log_sockfd = StartServer(k_LogPort);
  printf("server: waiting for data logging connection on port %s...\n",
	 k_LogPort);  
  
  //success if we get here
  printf("rover_server_setup() succeeded\n");
  return 0;
}

extern "C" int cdr_viewer_setup(void)
{ //setup for displaying images ON COMMANDER WORKSTATION
  CdrFrontCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  CdrPanoCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  pthread_mutex_init(&CdrFrontCam->MostRecentLock, NULL);
  pthread_mutex_init(&CdrPanoCam->MostRecentLock, NULL);
  CdrFrontCam->MostRecent = -1;
  CdrPanoCam->MostRecent = -1;
  CdrFrontCam->LastDisplayed = -1;
  CdrPanoCam->LastDisplayed = -1;
  CdrFrontCam->PortNumber = (char*) malloc(sizeof(char) * 10);
  strcpy(CdrFrontCam->PortNumber, k_CdrFrontCamPort);
  CdrPanoCam->PortNumber = (char*) malloc(sizeof(char) * 10);
  strcpy(CdrPanoCam->PortNumber, k_CdrPanoCamPort);
  for (int i = 0; i < k_ImgBufSize; i++)
    {
      pthread_mutex_init(&CdrFrontCam->ImgArrayLock[i], NULL);
      pthread_mutex_init(&CdrPanoCam->ImgArrayLock[i], NULL);
      CdrFrontCam->ImgArray[i] = (Imlib_Image *) malloc(sizeof(Imlib_Image));
      CdrPanoCam->ImgArray[i] = (Imlib_Image *) malloc(sizeof(Imlib_Image));
      CdrFrontCam->Set[i] = FALSE;
      CdrPanoCam->Set[i] = FALSE;
    }
  //grab_threads_should_die = FALSE;
  cdr_viewer_active = TRUE;
  char windowname[] = "commander-viewer";
  cdr_display_pane = FindWindow(windowname);

  //success if we get here
  printf("cdr_viewer_setup() succeeded\n");
  return 0;
}


extern "C" void rover_server_start(void)
{
  pthread_attr_t attributes;
  pthread_attr_init(&attributes);
  pthread_attr_setdetachstate(&attributes, PTHREAD_CREATE_JOINABLE);
  //threads to display images from rover
  pthread_create(&grab_threads[0], &attributes, rover_server_grab, (void *)FrontCam);
  pthread_create(&grab_threads[1], &attributes, rover_server_grab, (void *)PanoCam);
  //image timestamps and video saving handled within grab threads

  //thread to log data from rover
  pthread_create(&log_thread, &attributes, rover_server_log, NULL);
  pthread_attr_destroy(&attributes); //don't need this anymore
  printf("rover_server_start() complete\n");
} 

extern "C" Imlib_Image rover_get_front_cam(void)
{return Get_Image_from_ImgArray(FrontCam);}

extern "C" Imlib_Image rover_get_pano_cam(void)
{return Get_Image_from_ImgArray(PanoCam);}

extern "C" void rover_server_cleanup(void)
{
  time_t later;
  double finish;
  char tempStr[k_LogBufSize];
  //kill video display threads
  grab_threads_should_die = TRUE;
  pthread_join(grab_threads[0], NULL);
  pthread_join(grab_threads[1], NULL);
  finish = rover_current_time();
  later = time(NULL);
  strftime(tempStr, k_LogBufSize, "Log file closed at %F-%T GMT", gmtime(&later));
  fprintf(FrontCam->file_ptr, "%.6f: Logging completed\n", finish);
  fprintf(FrontCam->file_ptr, "%s\n", tempStr);
  fclose(FrontCam->file_ptr);
  fprintf(PanoCam->file_ptr, "%.6f: Logging completed\n", finish);
  fprintf(PanoCam->file_ptr, "%s\n", tempStr);
  fclose(PanoCam->file_ptr);
  //now free the memory
  free(FrontCam->PortNumber);
  free(PanoCam->PortNumber);
  free(FrontCam->video_file_name);
  free(PanoCam->video_file_name);
  delete FrontCam->output_video;
  delete PanoCam->output_video;
  for (int i = 0; i < k_ImgBufSize; i++)
    {
      free(FrontCam->ImgArray[i]);
      free(PanoCam->ImgArray[i]);
    }
  free(FrontCam);
  free(PanoCam);
  //kill video save thread

  //kill data logging thread
  log_thread_should_die = TRUE;
  pthread_join(log_thread, NULL);
  fprintf(log_file, "%.6f: Logging completed\n", finish);
  close(log_sockfd);
  fprintf(log_file, "%s\n", tempStr);
  fclose(log_file);
  printf("log_sockfd and log_file closed\n");
  //complete
  printf("rover_server_cleanup completed\n");
}


// functions not called from Scheme
void* rover_server_grab(void* args)
{
  struct CamGrab_t* my_args = (struct CamGrab_t*)args;
  int sockfd, new_fd;  // listen on sock_fd, new connection on new_fd
  int retval;
  char recvbuf[k_timestamp_len * 3];
  XEvent event;
  Display *display = XOpenDisplay(0);
  /* magic to get GUI to run periodically */
  event.type = KeyPress;
  event.xkey.keycode = 9;		/* ESC */
  event.xkey.state = 0;			/* no Mod1Mask */
  
  sockfd = StartServer(my_args->PortNumber);
  // cv::VideoWriter output_video;
  // cv::Size vid_size = cv::Size(640,480); //**HARDCODED** for 640x480 video
  // int codec = CV_FOURCC('M','J','P','G');
  // output_video.open(my_args->video_file_name, codec, 12.0, vid_size, true);
  printf("Opened video file %s\n", my_args->video_file_name);
  printf("server: waiting for image connection on port %s...\n",
	 my_args->PortNumber);
  
  while(!grab_threads_should_die) 
    {  // main accept() loop
      usleep(10000);
      new_fd = AcceptConnection(sockfd);
      /*
	AcceptConnection set to non-blocking, so will spin here until it either gets 
	a valid new_fd (and then goes into while loop below) or 
	grab_threads_should_die becomes TRUE, which will cause the while loop 
	(and function) to exit.
       */
      if (new_fd != -1)
      	{//receive and log start message into log file
      	  memset(recvbuf, 0 , sizeof(recvbuf));
      	  retval = recv(new_fd, &recvbuf, sizeof(recvbuf), 0);
      	  if (retval < 0)
      	    { //what error handling???
      	      printf("rover_server_grab recv retval = %d\n", retval);
      	    }
      	  else
      	    {
      	      fprintf(my_args->file_ptr, "%s\n", recvbuf);
      	      memset(recvbuf, 0 , sizeof(recvbuf));
      	    }
      	}
      while(!grab_threads_should_die && (new_fd != -1))
	{
	  //here's where we do the magic
	  PointGrey_t2* PG = new PointGrey_t2;
	  PG->new_fd = new_fd;
	  Imlib_Image temp_img;
	  int working;
	  while (1)
	    {
	      if (OpenCV_ReceiveFrame(PG, my_args->file_ptr) != 0)
		break;
	      //write frame to output video file
	      my_args->output_video->write(PG->uncompressedImage);
	      //send to commander viewer here??

	      //convert opencv to imlib for display in viewer
	      temp_img = Convert_OpenCV_to_Imlib(PG);
	      pthread_mutex_lock(&my_args->MostRecentLock);
	      working = ((my_args->MostRecent) + 1) % k_ImgBufSize;
	      pthread_mutex_unlock(&my_args->MostRecentLock);
	      pthread_mutex_lock(&my_args->ImgArrayLock[working]);
	      if (my_args->Set[working] == TRUE)
	      	{ //clean up memory allocation
	      	  imlib_context_set_image(*my_args->ImgArray[working]);
	      	  imlib_free_image_and_decache();
	      	}
	      else
		{
		  my_args->Set[working] = TRUE;
		}
	      *my_args->ImgArray[working] = temp_img;
	      pthread_mutex_unlock(&my_args->ImgArrayLock[working]);
	      pthread_mutex_lock(&my_args->MostRecentLock);
	      my_args->MostRecent = working;
	      pthread_mutex_unlock(&my_args->MostRecentLock);
	      XSendEvent(display, display_pane, FALSE, 0, &event);	      
	      XFlush(display);
	    }
	  delete PG;
	  printf("exiting from loop after AcceptConnection\n");
	  break;
	}
      if (new_fd != -1)
      	{//receive and log stop message into log file
      	  //memset(recvbuf, 0 , sizeof(recvbuf));
      	  retval = recv(new_fd, &recvbuf, sizeof(recvbuf), 0);
      	  if (retval <= 0)
      	    { //what error handling???
      	      printf("rover_server_grab recv (end) retval = %d\n", retval);
      	    }
      	  else
      	    fprintf(my_args->file_ptr, "%s\n", recvbuf);
      	}
      close(new_fd);  // accept loop doesn't need this
    }
  //do cleanup here
  close(sockfd);
  printf("sockfd closed\n");
  return NULL; 
}

void* rover_server_log(void* args)
{
  int retval;
  char logbuf[k_LogBufSize];
  fd_set recv_set;
  struct timeval timeout;
  // timeout.tv_sec = 0;
  // timeout.tv_usec = 1000 * 10; //10ms timeout
  while (!log_thread_should_die)
    {//main accept() loop
      usleep(10000);
      log_new_fd = AcceptConnection(log_sockfd);
      /*
	AcceptConnection set to non-blocking, so will spin here until it either gets 
	a valid log_new_fd (and then goes into while loop below) or 
	log_thread_should_die becomes TRUE, which will cause the while loop 
	(and function) to exit.
       */
      if (log_new_fd != -1)
        printf("Log connection established with log_new_fd = %d, log_sockfd = %d\n", 
		 log_new_fd, log_sockfd);

      while (!log_thread_should_die && (log_new_fd != -1))
	{
	  memset(logbuf, 0, sizeof(logbuf));  //clear buffer
	  //wrapping recv in a select here to ensure loop checks 
	  //log_thread_should_die every timeout
	  FD_ZERO(&recv_set);
	  FD_SET(log_new_fd, &recv_set);
	  timeout.tv_sec = 0;
	  timeout.tv_usec = 1000 * 10; //10ms timeout
	  retval = select(log_new_fd+1, &recv_set, NULL, NULL, &timeout);
	  if (retval < 0)
	    printf("select error\n");
	  else if (retval == 0) //timeout
	    continue; //go back to the top of the loop and recheck log_thread_should_die
	  else //retval >= 1-->we have data to receive
	    {
	      retval = recv(log_new_fd, &logbuf, sizeof(logbuf), 0);
	      if (retval < 0)
		{ //what error handling to do here??
		  printf("retval = %d\n", retval);
		  break;
		}
	      fprintf(log_file, "%s\n", logbuf);
	    }
	}
      close(log_new_fd);
    }
  return NULL;
}

void* cdr_viewer_grab(void* args)
{
  struct CamGrab_t* my_args = (struct CamGrab_t*)args;
  int sockfd, new_fd;  // listen on sock_fd, new connection on new_fd
  int retval;
  char recvbuf[k_timestamp_len * 3];
  XEvent event;
  Display *display = XOpenDisplay(0);
  /* magic to get GUI to run periodically */
  event.type = KeyPress;
  event.xkey.keycode = 9;		/* ESC */
  event.xkey.state = 0;			/* no Mod1Mask */
  
  sockfd = StartServer(my_args->PortNumber);
  // cv::VideoWriter output_video;
  // cv::Size vid_size = cv::Size(640,480); //**HARDCODED** for 640x480 video
  // int codec = CV_FOURCC('M','J','P','G');
  // output_video.open(my_args->video_file_name, codec, 12.0, vid_size, true);
  printf("Opened video file %s\n", my_args->video_file_name);
  printf("server: waiting for image connection on port %s...\n",
	 my_args->PortNumber);
  
  while(!grab_threads_should_die) 
    {  // main accept() loop
      usleep(10000);
      new_fd = AcceptConnection(sockfd);
      /*
	AcceptConnection set to non-blocking, so will spin here until it either gets 
	a valid new_fd (and then goes into while loop below) or 
	grab_threads_should_die becomes TRUE, which will cause the while loop 
	(and function) to exit.
       */
      if (new_fd != -1)
      	{//receive and log start message into log file
      	  memset(recvbuf, 0 , sizeof(recvbuf));
      	  retval = recv(new_fd, &recvbuf, sizeof(recvbuf), 0);
      	  if (retval < 0)
      	    { //what error handling???
      	      printf("rover_server_grab recv retval = %d\n", retval);
      	    }
      	  else
      	    {
      	      fprintf(my_args->file_ptr, "%s\n", recvbuf);
      	      memset(recvbuf, 0 , sizeof(recvbuf));
      	    }
      	}
      while(!grab_threads_should_die && (new_fd != -1))
	{
	  //here's where we do the magic
	  PointGrey_t2* PG = new PointGrey_t2;
	  PG->new_fd = new_fd;
	  Imlib_Image temp_img;
	  int working;
	  while (1)
	    {
	      if (OpenCV_ReceiveFrame(PG, my_args->file_ptr) != 0)
		break;
	      //write frame to output video file
	      my_args->output_video->write(PG->uncompressedImage);
	      //send to commander viewer here??

	      //convert opencv to imlib for display in viewer
	      temp_img = Convert_OpenCV_to_Imlib(PG);
	      pthread_mutex_lock(&my_args->MostRecentLock);
	      working = ((my_args->MostRecent) + 1) % k_ImgBufSize;
	      pthread_mutex_unlock(&my_args->MostRecentLock);
	      pthread_mutex_lock(&my_args->ImgArrayLock[working]);
	      if (my_args->Set[working] == TRUE)
	      	{ //clean up memory allocation
	      	  imlib_context_set_image(*my_args->ImgArray[working]);
	      	  imlib_free_image_and_decache();
	      	}
	      else
		{
		  my_args->Set[working] = TRUE;
		}
	      *my_args->ImgArray[working] = temp_img;
	      pthread_mutex_unlock(&my_args->ImgArrayLock[working]);
	      pthread_mutex_lock(&my_args->MostRecentLock);
	      my_args->MostRecent = working;
	      pthread_mutex_unlock(&my_args->MostRecentLock);
	      XSendEvent(display, display_pane, FALSE, 0, &event);	      
	      XFlush(display);
	    }
	  delete PG;
	  printf("exiting from loop after AcceptConnection\n");
	  break;
	}
      if (new_fd != -1)
      	{//receive and log stop message into log file
      	  //memset(recvbuf, 0 , sizeof(recvbuf));
      	  retval = recv(new_fd, &recvbuf, sizeof(recvbuf), 0);
      	  if (retval <= 0)
      	    { //what error handling???
      	      printf("rover_server_grab recv (end) retval = %d\n", retval);
      	    }
      	  else
      	    fprintf(my_args->file_ptr, "%s\n", recvbuf);
      	}
      close(new_fd);  // accept loop doesn't need this
    }
  //do cleanup here
  close(sockfd);
  printf("sockfd closed\n");
  return NULL; 
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
    return new_fd; //no connection
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
      if (n <= 0) { break; }
      total += n;
      bytesleft -= n;
    }
  *len = total; // return number actually sent here
  return n<=0?-1:0; // return -1 on failure, 0 on success
}

int CheckSaving(const char* dir)
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

int OpenCV_ReceiveFrame(PointGrey_t2* PG, FILE* file_ptr)
{
  char recvbuf[k_timestamp_len];
  int count;
  //first receive image size
  int retval = recv(PG->new_fd, &PG->img_size, sizeof(PG->img_size), 0);
  if (retval < 0)
    {
      printf("Error receiving image size\n");
      return -1;
    }
  if ((retval == 0) || (PG->img_size == 0)) //use sent 0 as escape char
    {
      printf("Sender stopped sending\n");
      return -1;
    }
  //if we get here, we got valid size data
  //printf("Received image size: %d\n", PG->img_size);
  //then receive timestamp and write to file
  retval = recv(PG->new_fd, &recvbuf, sizeof(recvbuf), 0);
  if (retval <= 0)
    {
      printf("OpenCV_ReceiveFrame: timestamp recv = %d\n", retval);
      return -1;
    }
  else
    {//print the timestamp to file
      count = framecount; //this block adds numbers to the timestamps
      if (first_count)
	{
	  first_count = false;
	}
      else
	{
	  first_count = true;
	  framecount++;
	}
      fprintf(file_ptr, "%s:%d\n", recvbuf, count); //end numbering block
      //fprintf(file_ptr, "%s\n", recvbuf, count); //timestamps w/o numbers
      
    }
  //then receive image data
  unsigned char* buf = (unsigned char*) malloc(PG->img_size);
  if (recvall(PG->new_fd, buf, &PG->img_size) != 0)
    {
      printf("Error in recvall\n");
      return -1;
    }
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
  int localMostRecent;
  if (CG->MostRecent < 0)
    { //create dummy image to display
      CG->LastDisplayedImage = imlib_create_image(640, 480);
      imlib_context_set_image(CG->LastDisplayedImage);
      imlib_context_set_color(128, 128, 128, 255);
      imlib_image_fill_rectangle(0, 0, 640, 480);
    }
  else
    { //grab threads have started receiving images from rover
      pthread_mutex_lock(&CG->MostRecentLock);
      localMostRecent = CG->MostRecent;
      pthread_mutex_lock(&CG->ImgArrayLock[CG->MostRecent]);
      pthread_mutex_unlock(&CG->MostRecentLock);
      imlib_context_set_image(*CG->ImgArray[localMostRecent]);
      CG->LastDisplayedImage = imlib_clone_image();
      CG->LastDisplayed = localMostRecent;
      pthread_mutex_unlock(&CG->ImgArrayLock[localMostRecent]);
    }
  return CG->LastDisplayedImage;
}


//window-finding code from http://stackoverflow.com/questions/5367806/activating-a-window-on-x11-why-do-i-lose-the-title-bar
// Info: xwininfo
// I am compiling using 
// gcc -o activate activate.c -L/usr/X11R6/lib -lX11

// ERROR HANDLER, GENERIC
static int ErrorHandler (Display *display, XErrorEvent *error)
{
   //printf ("\r\n error! \r\n");// gcc -o xwinspy lol.c -L/usr/X11R6/lib -lX11
   return 0;
}
// END ERROR HANDLER

// Recursively search through all windows on display
Window SearchWindow(char* szWindowToFind, int level, Display *display, 
		    Window rootWindow, int iMatchMode, int showErrors)
{
    Window parent;
    Window *children;
    unsigned int noOfChildren;
    int status;
    unsigned int i;
    Window wSearchedWindow = 0;
    char* win_name;
    if (XFetchName(display, rootWindow, &win_name))
    {
            //printf("WinName (Level %d): %s\n", level, win_name);
            if(iMatchMode == 0)
            {
                if( strstr(win_name, szWindowToFind) )
                {
                    return rootWindow;
                }
            }
            else if(iMatchMode == 1)
            {
                if( !strcmp(win_name, szWindowToFind) )
                {
                    return rootWindow;
                }
            }
            else if(iMatchMode == 2)
            {
                if( strcasestr(win_name, szWindowToFind) )
                {
                    return rootWindow;
                }
            }
            else if(iMatchMode == 3)
            {
                if( !strcasecmp(win_name, szWindowToFind) )
                {
                    return rootWindow;
                }
            }
            else 
            {
                if( strstr(win_name, szWindowToFind) )
                {
                    return rootWindow;
                }
            }

    } // End if XFetchName
    status = XQueryTree (display, rootWindow, &rootWindow, 
			 &parent, &children, &noOfChildren);
    if (status == 0)
    {
        if (showErrors)
            printf ("ERROR - Could not query the window tree. Aborting.\r\n");
        return rootWindow;
    }
    if (noOfChildren > 0)
    {
        for (i=0; i < noOfChildren; i++)
        {
            wSearchedWindow = SearchWindow(szWindowToFind, level+1, display, children[i], iMatchMode, showErrors);
            if(wSearchedWindow)
            {
                break;
            }
        }
    } 
    XFree ((char*) children);
    return wSearchedWindow;
} // End Sub EnumerateWindows


Window FindWindow(char* szWindowToFind)
{
    Display *display = XOpenDisplay (NULL);
    int screen = DefaultScreen (display);
    XSetErrorHandler(ErrorHandler);
    Window rootWindow = RootWindow (display, screen);   
    Window wSearchedWindow = SearchWindow(szWindowToFind, 0, display, 
					  rootWindow, 0, 0);
    char* win_name;
    if (XFetchName(display, wSearchedWindow, &win_name))
    {
        printf("Found: %s\n", win_name);
    }
    XCloseDisplay (display);
    return wSearchedWindow;
}

double rover_current_time(void) 
{
  struct timeval time;
  if (gettimeofday(&time, NULL)!=0) printf("gettimeofday failed");
  return ((double)time.tv_sec)+((double)time.tv_usec)/1e6;
}
