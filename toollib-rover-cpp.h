/*
  Header for toollib-rover interface between vader-rover and dsci

  Author: Scott Bronikowski
  Date: 4 April 2014
 */
#ifndef TOOLLIB_ROVER_H
#define TOOLLIB_ROVER_H

int hello_world(int);

int rover_server(char* PORT);

void check_image_load_and_save(void);

int tutorial(void);

#endif
