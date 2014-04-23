/* C library for interfacing with gamepad
   Author: Scott Bronikowski
   Date: 22 April 2014
*/

#include "toollib-gamepad-c.h"

//global constants

//global vars
int gamepad_thread_should_die;
pthread_t gamepad_thread;

//functions called from Scheme
void gamepad_hello_world(void)
{
  printf("Hello from gamepad!\n");

}

void gamepad_init(void)
{
  gamepad_thread_should_die = FALSE;
  GamepadInit();
  //call thread
  pthread_attr_t attributes;
  pthread_attr_init(&attributes);
  pthread_attr_setdetachstate(&attributes, PTHREAD_CREATE_JOINABLE);
  pthread_create(&gamepad_thread, &attributes, gamepad_update, NULL);
  pthread_attr_destroy(&attributes);
  printf("Gamepad initialized\n");
}

void gamepad_shutdown(void)
{
  gamepad_thread_should_die = TRUE;
  pthread_join(gamepad_thread, NULL);
  GamepadShutdown();
  printf("Gamepad shutdown complete\n");
}


//functions NOT called from Scheme
void* gamepad_update(void* args)
{
  while (!gamepad_thread_should_die)
    {
      GamepadUpdate(); //get gamepad status
      //do something with it
      //**FIXME** hard-coded here to use controller 0--might be ok???
      
      //if (GamepadButtonDown(0, BUTTON_START)) 
      if (GamepadButtonTriggered(0, BUTTON_START))
	rover_start_cameras();
      //if (GamepadButtonDown(0, BUTTON_BACK))
      if (GamepadButtonTriggered(0, BUTTON_BACK))
	rover_stop_cameras();
    }
  return NULL;
}
