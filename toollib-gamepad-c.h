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
//values used for pan & tilt servo calculations
extern const int pan_left;
extern const int pan_center;
extern const int pan_right;
extern const int tilt_up;
extern const int tilt_center;
extern const int tilt_down;
extern const float k_PI;
//these should be constants, but had compiler errors using const 
extern char* cmd_start_cameras;
extern char* cmd_stop_cameras;
extern char* cmd_forward_4;
extern char* cmd_forward_3;
extern char* cmd_forward_2;
extern char* cmd_forward_1;
extern char* cmd_stop;
extern char* cmd_reverse_1;
extern char* cmd_reverse_2;
extern char* cmd_reverse_3;
extern char* cmd_reverse_4;
extern char* cmd_forward_right_1;
extern char* cmd_forward_right_2;
extern char* cmd_forward_left_1;
extern char* cmd_forward_left_2;
extern char* cmd_pivot_left_1;
extern char* cmd_pivot_left_2;
extern char* cmd_pivot_right_1;
extern char* cmd_pivot_right_2;
extern char* cmd_reverse_left_1;
extern char* cmd_reverse_left_2;
extern char* cmd_reverse_right_1;
extern char* cmd_reverse_right_2;
extern char* cmd_servo;

//global vars
extern int gamepad_thread_should_die;
extern pthread_t gamepad_thread;
extern int sockfd, new_fd;

//functions called from Scheme
void gamepad_hello_world(void);
void gamepad_init(void);
void gamepad_shutdown(void);
void gamepad_start_cameras(void);
void gamepad_stop_cameras(void);

//functions NOT called from Scheme
void* gamepad_update(void* args);
int gamepad_start_server(const char* PORT);
int gamepad_accept_connection(int sockfd);
void* gamepad_get_in_addr(struct sockaddr *sa);
int gamepad_send_command(const char* command, int fd);

#endif
