/* C library for interfacing with gamepad
   Author: Scott Bronikowski
   Date: 22 April 2014
*/

#include "toollib-gamepad-c.h"

//global constants
const char* k_CommandPort = "1999";
const int k_maxBufSize = 50;

//values used for pan & tilt servo calculations
const int pan_left = 20000; //max left
const int pan_center = 15500; //adjusted from 15000;
const int pan_right = 10000; //max right
const int tilt_up = 12500; //max up
const int tilt_center = 14500;//adjusted from 15000;
const int tilt_down = 16500; //max down
const float k_PI = 3.1415926535897932384626433832795028841971693993751058;

//global vars
char* cmd_start_cameras = "start_cameras";
char* cmd_stop_cameras = "stop_cameras";
char* cmd_forward_4 = "forward_4";
char* cmd_forward_3 = "forward_3";
char* cmd_forward_2 = "forward_2";
char* cmd_forward_1 = "forward_1";
char* cmd_stop = "stop";
char* cmd_reverse_1 = "reverse_1";
char* cmd_reverse_2 = "reverse_2";
char* cmd_reverse_3 = "reverse_3";
char* cmd_reverse_4 = "reverse_4";
char* cmd_forward_right_1 = "forward_right_1";
char* cmd_forward_right_2 = "forward_right_2";
char* cmd_forward_left_1 = "forward_left_1";
char* cmd_forward_left_2 = "forward_left_2";
char* cmd_pivot_left_1 = "pivot_left_1";
char* cmd_pivot_left_2 = "pivot_left_2";
char* cmd_pivot_right_1 = "pivot_right_1";
char* cmd_pivot_right_2 = "pivot_right_2";
char* cmd_reverse_left_1 = "reverse_left_1";
char* cmd_reverse_left_2 = "reverse_left_2";
char* cmd_reverse_right_1 = "reverse_right_1";
char* cmd_reverse_right_2 = "reverse_right_2";
char* cmd_servo = "servo";
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
  //start server and wait for connection
  int sockfd, new_fd; //listen on sockfd, new connection on new_fd
  float right_stick_length, left_stick_length;
  float left_stick_angle;
  float right_norm_x, right_norm_y, right_x, right_y;
  //float left_norm_x, left_norm_y, left_x, left_y;
  GAMEPAD_STICKDIR left_stick_dir;
  GAMEPAD_BOOL left_trigger_pressed;
  float left_trigger_length;
  char new_cmd_buf[k_maxBufSize];
  char prev_cmd_buf[k_maxBufSize];
  int range, servo_tilt, servo_pan;
  char* motor_cmd = NULL;
  sockfd = gamepad_start_server(k_CommandPort);
  printf("server: waiting for command connection on port %s...\n", k_CommandPort);
  memset(prev_cmd_buf, 0, sizeof(prev_cmd_buf)); //clear previous command buffer
  
  while (!gamepad_thread_should_die)
    { //main accept loop
      usleep(10000);
      new_fd = gamepad_accept_connection(sockfd);
      /*
	AcceptConnection set to non-blocking, so will spin here until it either 
	gets a valid new_fd (and then goes into while loop below) or 
	grab_threads_should_die	becomes TRUE, which will cause the while loop 
	(and function) to exit.
      */
      if (new_fd != -1)
        printf("Command connection established with new_fd = %d, sockfd = %d\n", 
		 new_fd, sockfd);
	
      while (!gamepad_thread_should_die && (new_fd != -1))
	{ //get input from gamepad
	  GamepadUpdate(); //get gamepad status
	  //do something with it
	  //memset(new_cmd_buf, 0, sizeof(new_cmd_buf)); //clear new command buffer
	  
	  //**FIXME** hard-coded here to use controller 0--might be ok???
	  //camera start and stop
	  if (GamepadButtonTriggered(GAMEPAD_0, BUTTON_START)) 
	    //send(new_fd, cmd_start_cameras, strlen(cmd_start_cameras), 0);
	    gamepad_send_command(cmd_start_cameras, new_fd);
	  if (GamepadButtonTriggered(GAMEPAD_0, BUTTON_BACK)) 
	    //send(new_fd, cmd_stop_cameras, strlen(cmd_stop_cameras), 0);
	    gamepad_send_command(cmd_stop_cameras, new_fd);

	  //get stick positions, angles, directions
	  right_stick_length = GamepadStickLength(GAMEPAD_0, STICK_RIGHT);
	  GamepadStickNormXY(GAMEPAD_0, STICK_RIGHT, &right_norm_x, &right_norm_y);
	  left_stick_length = GamepadStickLength(GAMEPAD_0, STICK_LEFT);
	  left_stick_angle = GamepadStickAngle(GAMEPAD_0, STICK_LEFT);
	  left_stick_dir = GamepadStickDir(GAMEPAD_0, STICK_LEFT);
	  //GamepadStickNormXY(GAMEPAD_0, STICK_LEFT, &left_norm_x, &left_norm_y);
	  left_trigger_pressed = GamepadTriggerDown(GAMEPAD_0, TRIGGER_LEFT);
	  left_trigger_length = GamepadTriggerLength(GAMEPAD_0, TRIGGER_LEFT);
	  
	  //look at right stick for pan and tilt
	  right_x = right_stick_length * right_norm_x; //get x and y positions
	  right_y = right_stick_length * right_norm_y; //in range -1 to +1
	  //do tilt
	  if (right_y > 0.f) //tilt up
	    range = tilt_center - tilt_up; //range of up movement
	  else //tilt down
	    range = tilt_down - tilt_center; //range of movement
	  range = (int)(range * right_y); //times de-normalized y movement
	  servo_tilt = tilt_center - range; //works b/c tilt_up < center < down
	  //do pan
	  if (right_x > 0.f) //pan right
	    range = pan_center - pan_right; //range of movement
	  else //pan left
	    range = pan_left - pan_center; //range of movement 
	  range = (int)(range * right_x); //time de-normalized x movement
	  servo_pan = pan_center - range; //works b/c pan_right < center < left
	  //done with right stick

	  //look at left stick for movement (possibly left trigger as well for extra speeds)
	  if ((left_stick_dir == STICKDIR_CENTER) ||
	      GamepadButtonDown(GAMEPAD_0, BUTTON_B) ||
	      GamepadButtonDown(GAMEPAD_0, BUTTON_LEFT_SHOULDER)) 
	    { //stick centered or stop button pressed, so stop
	      motor_cmd = cmd_stop;
	    }
	  else 
	    { //stick not centered, so move
	      if (fabs(left_stick_angle) <= (k_PI/8))
		{ //pivot right
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_pivot_right_1;
		  else
		    motor_cmd = cmd_pivot_right_2;
		}
	      else if (left_stick_angle > (k_PI/8) && 
		       left_stick_angle <= (3*k_PI/8))
		{ //forward right
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_forward_right_1;
		  else
		    motor_cmd = cmd_forward_right_2;
		}
	      else if (left_stick_angle > (3*k_PI/8) && 
		       left_stick_angle <= (5*k_PI/8))
		{ //forward
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_forward_1;
		  else 
		    {
		      if (!left_trigger_pressed)
			motor_cmd = cmd_forward_2;
		      else //trigger pressed
			{
			  if (left_trigger_length < 0.5f)
			    motor_cmd = cmd_forward_3;
			  else
			    motor_cmd = cmd_forward_4;
			}
		    }
		}
	      else if (left_stick_angle > (5*k_PI/8) && 
		       left_stick_angle <= (7*k_PI/8))
		{ //forward left
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_forward_left_1;
		  else
		    motor_cmd = cmd_forward_left_2;
		}
	      else if (fabs(left_stick_angle) >= (7*k_PI/8))
		{ //pivot left
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_pivot_left_1;
		  else
		    motor_cmd = cmd_pivot_left_2;
		}
	      else if (left_stick_angle > (-7*k_PI/8) && 
		       left_stick_angle <= (-5*k_PI/8))
		{ //reverse left
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_reverse_left_1;
		  else
		    motor_cmd = cmd_reverse_left_2;		  
		}
	      else if (left_stick_angle > (-5*k_PI/8) &&
		       left_stick_angle <= (-3*k_PI/8))
		{ //reverse
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_reverse_1;
		  else 
		    {
		      if (!left_trigger_pressed)
			motor_cmd = cmd_reverse_2;
		      else //trigger pressed
			{
			  if (left_trigger_length < 0.5f)
			    motor_cmd = cmd_reverse_3;
			  else
			    motor_cmd = cmd_reverse_4;
			}
		    }
		}
	      else if (left_stick_angle > (-3*k_PI/8) &&
		       left_stick_angle < (-k_PI/8))
		{ //reverse right
		  if (left_stick_length < 0.5f)
		    motor_cmd = cmd_reverse_right_1;
		  else
		    motor_cmd = cmd_reverse_right_2;
		}
	    }
	  //build the command and send it (if new)
	  memset(new_cmd_buf, 0, sizeof(new_cmd_buf)); //clear new command buffer
	  sprintf(new_cmd_buf, "%s_%d_%d:%s", cmd_servo, servo_tilt, 
		  servo_pan, motor_cmd);
	  if (strncmp(new_cmd_buf, prev_cmd_buf, k_maxBufSize) != 0)
	    {//received new command, so save it and send it
	      strncpy(prev_cmd_buf, new_cmd_buf, k_maxBufSize);
	      gamepad_send_command(new_cmd_buf, new_fd);
	    }
	  else //repeated command
	    continue;
	  //probably don't need this anymore
	  //usleep(10000); //put a wait in to slow down command flow
	}
      close(new_fd); //done with this
      //printf("command new_fd closed\n");
    }
  //socket cleanup
  close(sockfd);
  printf("command sockfd closed\n");
  return NULL;
}

void* gamepad_get_in_addr(struct sockaddr *sa)
{// get sockaddr, IPv4 or IPv6:
  if (sa->sa_family == AF_INET) 
    { 
      return &(((struct sockaddr_in*)sa)->sin_addr);
    }
  return &(((struct sockaddr_in6*)sa)->sin6_addr);
}

int gamepad_start_server(const char* PORT)
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

int gamepad_accept_connection(int sockfd)
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
	    gamepad_get_in_addr((struct sockaddr *)&their_addr),
	    s, sizeof(s));
  printf("server: got connection from %s\n", s);
  return new_fd;
}

int gamepad_send_command(const char* command, int fd)
{
  char cmd_buf[k_maxBufSize];
  memset(cmd_buf, 0, sizeof(cmd_buf));
  strncpy(cmd_buf, command, sizeof(cmd_buf));
  printf("gamepad_send_command: %s\n", cmd_buf);
  return send(fd, cmd_buf, sizeof(cmd_buf), 0);
}
