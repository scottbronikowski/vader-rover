/*
  Author: Scott Bronikowski
  Date: 18 July 2014
  Teensy program to run encoders as odometers.
  Adapted from TwoKnobs.ino in Teensy Encoder Library and Razor_AHRS.ino in razor-9dof-ahrs library
*/

#include <Encoder.h>

//Derived from drive testing with EncoderTest.ino
#define right_ticks_per_cm 323.709
#define left_ticks_per_cm 328.288

//serial port baud rate
#define OUTPUT_BAUD_RATE 57600
//data output interval
#define OUTPUT_DATA_INTERVAL 20 //in ms
//output formats
#define OUTPUT_FORMAT_TEXT 0
#define OUTPUT_FORMAT_BINARY 1
//set if streaming output enabled by default
#define OUTPUT_STARTUP_STREAM_ON false

//set startup output format
int output_format = OUTPUT_FORMAT_TEXT;
//other output variables
boolean output_stream_on;
boolean output_single_on;

//debug option
#define DEBUG_PRINT_LOOP_TIME false

#define STATUS_LED_PIN 13

//odometer variables
//float left_cm;
//float right_cm;
unsigned long timestamp;
unsigned long timestamp_old;
unsigned long dt;
long positionLeft;
long positionRight;
//float avg_ticks_per_cm = (right_ticks_per_cm + left_ticks_per_cm) / 2;


Encoder encoderRight(4,3);
Encoder encoderLeft(1,2);

void output()
{
  float cm[2]; //left is 0, right is 1
  cm[0] = positionLeft / left_ticks_per_cm;
  //cm[0] = positionLeft / avg_ticks_per_cm;
  cm[1] = positionRight / right_ticks_per_cm;
  //cm[1] = positionRight / avg_ticks_per_cm;
  if (output_format == OUTPUT_FORMAT_BINARY)
  {
    unsigned char buf1[4]; //for timestamp (4-byte unsigned long)
    unsigned char buf2[4]; //for dt (also 4-byte unsigned long)
    memcpy(buf1, &timestamp, 4);
    memcpy(buf2, &dt, 4);
    Serial.write((byte*) cm, 8); //2 4-byte floats
    Serial.write(buf1, 4);
    Serial.write(buf2, 4);
    //Serial.write((byte*) left_cm, 4);
    //Serial.write((byte*) right_cm, 4);
  }
  else if (output_format == OUTPUT_FORMAT_TEXT)
  {
    Serial.print("timestamp="); Serial.print(timestamp); Serial.print(",");
    Serial.print("dt="); Serial.print(dt); Serial.print(",");
    Serial.print("L distance="); Serial.print(cm[0]); Serial.print("cm,");
    Serial.print("R distance="); Serial.print(cm[1]); Serial.print("cm");
    Serial.println();
  }
}
void turn_output_stream_on()
{
  output_stream_on = true;
  digitalWrite(STATUS_LED_PIN, HIGH);
}
void turn_output_stream_off()
{
  output_stream_on = false;
  digitalWrite(STATUS_LED_PIN, LOW);
}
// Blocks until another byte is available on serial port
char readChar()
{
  while (Serial.available() < 1) { } // Block
  return Serial.read();
}


void setup()
{
  //init serial output
  Serial.begin(OUTPUT_BAUD_RATE);
  //init status LED
  pinMode(STATUS_LED_PIN, OUTPUT);
  digitalWrite(STATUS_LED_PIN, LOW);
  //init output
#if (OUTPUT_STARTUP_STREAM == false)
  turn_output_stream_off();
#else
  turn_output_stream_on();
#endif
  //get initial timestamp
  timestamp = millis();

}

void loop()
{
  //read control messages if available
  if (Serial.available() >= 2)
  {
    if (Serial.read() == '#') //start of new control message
    {
      int command = Serial.read(); // Commands
      if (command == 'f') // request one output _f_rame
      {
        digitalWrite(STATUS_LED_PIN, HIGH);
        output_single_on = true;
      }
      else if (command == 's') // _s_ynch request
      {
        // Read ID
        byte id[2];
        id[0] = readChar();
        id[1] = readChar();
        // Reply with synch message
        Serial.print("#SYNCH");
        Serial.write(id, 2);
        Serial.println();
      }
      else if (command == 'o') //set _o_utput mode
      {
	char output_param = readChar();
	if (output_param == 't') //output text
	  output_format = OUTPUT_FORMAT_TEXT;
	else if (output_param == 'b') //output binary
	  output_format = OUTPUT_FORMAT_BINARY;
	else if (output_param == '0') //turn off streaming
	  turn_output_stream_off();
	else if (output_param == '1') //turn on streaming
	  turn_output_stream_on();
      }
    }
  }
  //is it time to get another reading?
  if ((millis() - timestamp) >= OUTPUT_DATA_INTERVAL)
  {
    //get new timestamp and dt
    timestamp_old = timestamp;
    timestamp = millis();
    dt = timestamp - timestamp_old;
    //read from endcoders
    positionLeft = encoderLeft.read();
    positionRight = encoderRight.read();
    //reset encoders
    encoderLeft.write(0);
    encoderRight.write(0);
    //send output
    if (output_stream_on) 
      output();
    else if (output_single_on)
    { //flash LED and send output
      //digitalWrite(STATUS_LED_PIN, HIGH); //turned on earlier
      output();
      digitalWrite(STATUS_LED_PIN, LOW);
      output_single_on = false; 
    }
#if DEBUG_PRINT_LOOP_TIME == true
    Serial.print("loop time (ms) = ");
    Serial.println(millis() - timestamp);
#endif
  }
#if DEBUG_PRINT_LOOP_TIME == true
  else
  {
    Serial.println("waiting...");
  }
#endif
  

}

