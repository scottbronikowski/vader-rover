/*
Tool library for running vader-rover in Scheme GUI.
Includes:
--Implementation of server to receive camera data from rover:c ommunication 
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
const char* ssh_prefix = "ssh -p 22222 root@localhost";

//global variables
struct CamGrab_t* FrontCam;
struct CamGrab_t* PanoCam;
pthread_t grab_threads[k_numCams];
int grab_threads_should_die = FALSE;
Window display_pane; //??

// functions called from Scheme (must have extern "C" to prevent mangling)
extern "C" int rover_server_setup(void)
{
  FrontCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  PanoCam = (struct CamGrab_t*) malloc(sizeof(struct CamGrab_t));
  pthread_mutex_init(&FrontCam->MostRecentLock, NULL);
  pthread_mutex_init(&PanoCam->MostRecentLock, NULL);
  FrontCam->MostRecent = -1;
  PanoCam->MostRecent = -1;
  //create LastDisplayedImage as dummy
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
  // AllCams = (struct AllCams_t*) malloc(sizeof(struct AllCams_t));
  // AllCams->CG[0] = FrontCam;
  // AllCams->CG[1] = PanoCam;
  grab_threads_should_die = FALSE;
  char windowname[] = "rover-viewer";
  display_pane = FindWindow(windowname);//"rover-viewer");
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
  //call display thread here
  
  //call save thread here
  pthread_attr_destroy(&attributes);
  // will we ever get here?
  //return 0;
  printf("at end of rover_server_start\n");
} 

extern "C" Imlib_Image rover_get_front_cam(void)
{
  //printf("getting image from front cam...\n");
  return Get_Image_from_ImgArray(FrontCam);
}

extern "C" Imlib_Image rover_get_pano_cam(void)
{
  //printf("getting image from pano cam...\n");
  return Get_Image_from_ImgArray(PanoCam);
}

extern "C" void rover_server_cleanup(void)
{
  grab_threads_should_die = TRUE;
  pthread_join(grab_threads[0], NULL);
  pthread_join(grab_threads[1], NULL);
  //kill display and save threads here
  printf("rover_server_cleanup completed\n");
}

extern "C" void rover_start_cameras(void)
{
  char cmd[500];
  sprintf(cmd, "%s '/root/bin/run_cameras' &", ssh_prefix);
  printf("sending: %s\n", cmd);
  system(cmd);
}

extern "C" void rover_stop_cameras(void)
{
  char cmd[500];
  sprintf(cmd, "%s 'pkill run_cameras' &", ssh_prefix);
  printf("sending: %s\n", cmd);
  system(cmd);
}

// extern "C" void rover_display(void)
// {
//   Display *display = XOpenDisplay("");
//   //int screen = DefaultScreen(display);
//   XEvent event;
//   /* magic to get GUI to run periodically */
//   event.type = KeyPress;
//   event.xkey.keycode = 9;		/* ESC */
//   event.xkey.state = 0;			/* no Mod1Mask */

// }

// functions not called from Scheme
void* rover_server_grab(void* args)
{
  struct CamGrab_t* my_args = (struct CamGrab_t*)args;
  int sockfd, new_fd;  // listen on sock_fd, new connection on new_fd
  // struct sigaction sa;
  XEvent event;
  Display *display = XOpenDisplay(0);
  //int screen = DefaultScreen(display);
  /* magic to get GUI to run periodically */
  event.type = KeyPress;
  event.xkey.keycode = 9;		/* SEC */
  event.xkey.state = 0;			/* no Mod1Mask */
  /* magic so can display Imlib frames */
  // imlib_context_disconnect_display();
  // imlib_context_set_display(display);
  // imlib_context_set_visual(XDefaultVisual(display, screen));
  // imlib_context_set_colormap(XDefaultColormap(display, screen));
  // imlib_context_set_drawable(display_pane);
  
  sockfd = StartServer(my_args->PortNumber);

  printf("server: waiting for connections...\n");
  
  while(!grab_threads_should_die) 
    {  // main accept() loop
      usleep(10000);
      new_fd = AcceptConnection(sockfd);
      /*
	AcceptConnection set to non-blocking, so will spin here until it either gets 
	a valid new_fd (and then goes into while loop below) or grab_threads_should_die
	becomes TRUE, which will cause the while loop (and function) to exit.
       */
      while(!grab_threads_should_die && (new_fd != -1))
	{
	  //here's where we do the magic
	  PointGrey_t2* PG = new PointGrey_t2;
	  PG->new_fd = new_fd;
	  Imlib_Image temp_img;
	  int working;
	  while (1)
	    {
	      //printf("%s-working = %d\n", my_args->PortNumber, working);
	      if (OpenCV_ReceiveFrame(PG) != 0)
		break;
	      temp_img = Convert_OpenCV_to_Imlib(PG);
	      pthread_mutex_lock(&my_args->MostRecentLock);
	      working = ((my_args->MostRecent) + 1) % k_ImgBufSize;
	      pthread_mutex_unlock(&my_args->MostRecentLock);
	      //printf("getting lock\n");
	      pthread_mutex_lock(&my_args->ImgArrayLock[working]);
	      //printf("locked\n");
	      if (my_args->Set[working] == TRUE)
	      	{ //clean up memory allocation
	      	  //printf("cleaning up memory\n");
	      	  imlib_context_set_image(*my_args->ImgArray[working]);
	      	  imlib_free_image_and_decache();
	      	}
	      else
		{
		  my_args->Set[working] = TRUE;
		}
	      //printf("done cleaning memory\n");
	      *my_args->ImgArray[working] = temp_img;
	      //printf("assigned\n");
	      pthread_mutex_unlock(&my_args->ImgArrayLock[working]);
	      pthread_mutex_lock(&my_args->MostRecentLock);
	      my_args->MostRecent = working;
	      pthread_mutex_unlock(&my_args->MostRecentLock);
	      //printf("unlocked\n");
	      //imlib_context_set_image(my_args->ImgArray[working]);
	      XSendEvent(display, display_pane, FALSE, 0, &event);	      
	      XFlush(display);
	      //printf("sent xevent\n");
	    }
	  delete PG;
	  printf("exiting from loop after AcceptConnection\n");
	  break;
	}
      close(new_fd);  // accept loop doesn't need this
    }
  //do cleanup here
  close(sockfd);
  printf("sockfd closed\n");
  return NULL; // (void *)my_args;?????
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
    return new_fd;
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
  //printf("Received %d bytes of image data\n", PG->img_size);
  
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
  //printf("in Get_Image_from_ImgArray, MostRecent = %d\n", CG->MostRecent);
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
Window SearchWindow(char* szWindowToFind, int level, Display *display, Window rootWindow, int iMatchMode, int showErrors)
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



    status = XQueryTree (display, rootWindow, &rootWindow, &parent, &children, &noOfChildren);

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

    Window wSearchedWindow = SearchWindow(szWindowToFind, 0, display, rootWindow, 0, 0);

    char* win_name;
    if (XFetchName(display, wSearchedWindow, &win_name))
    {
        printf("Found: %s\n", win_name);
    }

    XCloseDisplay (display);
    return wSearchedWindow;
}
