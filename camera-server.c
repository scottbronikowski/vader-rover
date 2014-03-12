/*
** server.c -- a stream socket server demo
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


//globals
const char* k_FrontCamPort = "3601";
const char* k_PanoCamPort = "3602";
const int BACKLOG = 5;

//prototypes
void sigchld_handler(int s);
void *get_in_addr(struct sockaddr *sa);
int StartServer(const char* PORT);
int AcceptConnection(int sockfd);
int recvall(int s, unsigned char* buf, int* len);

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
	  unsigned int width, height, depth;
	  int img_size, retval;
	  while(1)
	    {
	      //first receive size (w, h, d)
	      retval = recv(new_fd, &width, sizeof(width), 0);
	      if (retval < 0)
		{
		  printf("Error receiving width\n");
		  break;
		}
	      if (retval == 0)
		{
		  printf("Sender stopped sending\n");
		  break;
		}
	      if (recv(new_fd, &height, sizeof(height), 0) <= 0)
		{
		  printf("Error receiving height\n");
		}
	      if (recv(new_fd, &depth, sizeof(depth), 0) <= 0)
		{
		  printf("Error receiving depth\n");
		}
	      printf("Received w x h x d = %u x %u x %u\n", width, height, depth);

	      //then receive data
	      img_size = (int)(width * depth * height);
	      unsigned char* buf = malloc(img_size);
	      if (recvall(new_fd, buf, &img_size) != 0)
		{
		  printf("Error in recvall\n");
		  break;
		}
	      printf("Received %d bytes of image data\n", img_size);
	      free(buf);
	    }
	  

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
    if (n == -1) { break; }
    total += n;
    bytesleft -= n;
  }
  
  *len = total; // return number actually sent here
  //printf("received %d\n", *len);
  return n==-1?-1:0; // return -1 on failure, 0 on success
}
