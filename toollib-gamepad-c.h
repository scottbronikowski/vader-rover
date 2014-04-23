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

//global vars
extern int gamepad_thread_should_die;
extern pthread_t gamepad_thread;

//functions called from Scheme
void gamepad_hello_world(void);
void gamepad_init(void);
void gamepad_shutdown(void);

//functions NOT called from Scheme
void* gamepad_update(void* args);


#endif
