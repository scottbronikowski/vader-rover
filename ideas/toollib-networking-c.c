/* LaHaShem HaAretz U'Mloah */
/* Copyright 1999 and 2000 NEC Research Institute, Inc. All rights reserved. */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <errno.h>
#include <stdarg.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <sys/ioctl.h>

int sock;
unsigned int peer;
FILE *in, *out;
struct sockaddr_in address;

void set_up_server(int port);
int socketfd;
int get_peer0(void);
int get_peer1(void);
int get_peer2(void);
int get_peer3(void);
FILE *get_in(void);
FILE *get_out(void);
int close_socket(void);
void open_connection_to_server(char *hostname, int port);

int get_socketfd()
{
  return socketfd;
}

int socket_bytes_available(int fd)
{
  int count;
  ioctl(fd, FIONREAD, &count);
  return count;
}

static void panic(const char *error_text, ...)
{ va_list ap;
  char error_message[1024];
  va_start(ap, error_text);
  vsprintf(error_message, error_text, ap);
  fprintf(stderr, "panic: %s\n", error_message);
  exit(1);}

void set_up_server(int port)
{ int i = 1;
  /* needs work: what is the difference between PF_INET and AF_INET */
  if ((sock = socket(PF_INET, SOCK_STREAM, 0))<0)
  { panic("Call to socket failed");}
  setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &i, sizeof(i));
  address.sin_family = AF_INET;
  /* needs work: should we cast the first arg to (char *) */
  /* memset(&address.sin_addr, 0, sizeof(address.sin_addr)); */
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons((short)port);
  if (bind(sock, (struct sockaddr *)&address, sizeof(address)))
  { panic("Call to bind failed");}
  if (listen(sock, 5)) panic("Call to listen failed");}

void accept_connection(void)
{ int conn;
  socklen_t addrlength = sizeof(address);
  while ((conn = accept(sock, (struct sockaddr *)&address, &addrlength))<0&&
	 errno==EINTR);
  if (conn<0) panic("Call to accept failed");
  peer = address.sin_addr.s_addr;
  in = fdopen(conn, "r");
  out = fdopen(conn, "w");
  socketfd =conn;
}

int get_peer0(void) {return *(((unsigned char *)&peer)+0);}

int get_peer1(void) {return *(((unsigned char *)&peer)+1);}

int get_peer2(void) {return *(((unsigned char *)&peer)+2);}

int get_peer3(void) {return *(((unsigned char *)&peer)+3);}

FILE *get_in(void) {return in;}

FILE *get_out(void) {return out;}

int close_socket(void) {return close(sock);}

void open_connection_to_server(char *hostname, int port)
{ struct sockaddr_in address;
  struct in_addr inaddr;
  struct hostent *host;
  int sock, retval, retries = 1000;
  if (inet_aton(hostname, &inaddr))
  { host = gethostbyaddr((char *)&inaddr, sizeof(inaddr), AF_INET);}
  else host = gethostbyname(hostname);
  if (!host) {herror("error looking up host"); exit(1);}
  l:
  /* needs work: what is the difference between PF_INET and AF_INET */
  if ((sock = socket(PF_INET, SOCK_STREAM, 0))<0)
  { panic("Call to socket failed");}
  address.sin_family = AF_INET;
  address.sin_port = htons((short)port);
  /* needs work: should we use sizeof(address.sin_addr) or host->h_length */
  /* needs work: should we cast the first arg to (char *) */
  memcpy(&address.sin_addr, host->h_addr_list[0], sizeof(address.sin_addr));
  while ((retval = connect(sock, (struct sockaddr *)&address, sizeof(address)))
	 <0&&
	 errno==EINTR);
  if (retval<0)
  { if (errno==ECONNREFUSED&&retries>0)
    { usleep(100000);
      retries--;
      close(sock);
      goto l;}
    panic("Call to connect failed");}
  in = fdopen(sock, "r");
  out = fdopen(sock, "w");
  socketfd=sock;}

/* Tam V'Nishlam Shevah L'El Borei Olam */
