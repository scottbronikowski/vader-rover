/* A simple server in the internet domain using TCP
   The port number is passed as an argument 
   This version runs forever, forking off a separate 
   process for each connection
*/
//Modified from http://www.linuxhowtos.org/C_C++/socket.htm
//By Scott Bronikowski, 6 February 2014

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

void dostuff(int, char*); /* function prototype */

void error(const char *msg)
{
    perror(msg);
    exit(1);
}

int main(int argc, char *argv[])
{
     int sockfd, newsockfd, portno, pid;
     socklen_t clilen;
     struct sockaddr_in serv_addr, cli_addr;
     char* tempstr;
  

     if (argc < 2) {
         fprintf(stderr,"ERROR, no port provided\n");
         exit(1);
     }
     sockfd = socket(AF_INET, SOCK_STREAM, 0);
     if (sockfd < 0) 
        error("ERROR opening socket");
     bzero((char *) &serv_addr, sizeof(serv_addr));
     portno = atoi(argv[1]);
     serv_addr.sin_family = AF_INET;
     serv_addr.sin_addr.s_addr = INADDR_ANY;
     serv_addr.sin_port = htons(portno);
     if (bind(sockfd, (struct sockaddr *) &serv_addr,
              sizeof(serv_addr)) < 0) 
              error("ERROR on binding");
     listen(sockfd,5);
     clilen = sizeof(cli_addr);
     while (1) {
         newsockfd = accept(sockfd, 
               (struct sockaddr *) &cli_addr, &clilen);
         if (newsockfd < 0) 
             error("ERROR on accept");
         pid = fork();
         if (pid < 0)
             error("ERROR on fork");
         if (pid == 0)  {
             close(sockfd);
	     tempstr = inet_ntoa(cli_addr.sin_addr);
	     //printf("Connection from IP: %s\n",tempstr);
	     dostuff(newsockfd,tempstr);
             exit(0);
         }
         else close(newsockfd);
     } /* end of while */
     close(sockfd);
     return 0; /* we never get here */
}

/******** DOSTUFF() *********************
 There is a separate instance of this function 
 for each connection.  It handles all communication
 once a connnection has been established.
 *****************************************/
void dostuff (int sock, char* addrstr)
{
   int n;
   char buffer[256];
   char *rec_msg = "Server received message: ";
   char tempbuf[256 + sizeof(rec_msg)];
      
   bzero(buffer,256);
   n = read(sock,buffer,255);
   if (n < 0) error("ERROR reading from socket");
   printf("Message received from IP %s: %s\n",addrstr,buffer);
   strcpy(tempbuf, rec_msg);
   strcat(tempbuf, buffer);
   n = write(sock,tempbuf,sizeof(tempbuf));
   if (n < 0) error("ERROR writing to socket");
}
