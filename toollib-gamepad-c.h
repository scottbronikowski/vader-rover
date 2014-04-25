/*
  C header for interfacing with gamepad
  Author: Scott Bronikowski
  Date: 22 April 2014
 */
#ifndef TOOLLIB_GAMEPAD_H
#define TOOLLIB_GAMEPAD_H

#include "gamepad.h"
#include "toollib-rover-cpp.h" //mucho includes here
#include <stdio.h>


//defines

//structures

//global constants
extern const char* k_CommandPort;
extern const int k_maxBufSize;
extern const char* cmd_start_cameras;
extern const char* cmd_stop_cameras;
//extern const char* cmd_pan;
//extern const char* cmd_tilt;
extern const char* cmd_servo;
//values used for pan & tilt servo calculations
extern const int pan_left;
extern const int pan_center;
extern const int pan_right;
extern const int tilt_up;
extern const int tilt_center;
extern const int tilt_down;

//global vars
extern int gamepad_thread_should_die;
extern pthread_t gamepad_thread;

//functions called from Scheme
void gamepad_hello_world(void);
void gamepad_init(void);
void gamepad_shutdown(void);

//functions NOT called from Scheme
void* gamepad_update(void* args);
int gamepad_start_server(const char* PORT);
int gamepad_accept_connection(int sockfd);
void* gamepad_get_in_addr(struct sockaddr *sa);
int gamepad_send_command(const char* command, int fd);

#endif
