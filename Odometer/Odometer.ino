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
float left_cm;
float right_cm;
unsigned long timestamp;
unsigned long timestamp_old;
unsigned long timestamp_reading;
long positionLeft;
long positionRight;


Encoder encoderRight(4,3);
Encoder encoderLeft(1,2);

void output()
{
  left_cm = positionLeft * left_ticks_per_cm;
  right_cm = positionRight * right_ticks_per_cm;
  if (output_format == OUTPUT_FORMAT_BINARY)
  {
    unsigned char buf[4]; //for timestamp (32-bit unsigned long)
    memcpy(buf, &timestamp, 4);
    Serial.write(buf, 4);
    Serial.write((byte*) left_cm, 4);
    Serial.write((byte*) right_cm, 4);
  }
  else if (output_format == OUTPUT_FORMAT_TEXT)
  {
    Serial.print("timestamp="); Serial.print(timestamp); Serial.print(",");
    Serial.print("L distance="); Serial.print(left_cm); Serial.print("cm,");
    Serial.print("R distance="); Serial.print(right_cm); Serial.print("cm");
    Serial.println();
  }
}

void turn_output_stream_on()
{
  output_stream_on = true;
  digitalWrite(STATUS_LED_PIN, LOW);
}

void turn_output_stream_off()
{
  output_stream_on = false;
  digitalWrite(STATUS_LED_PIN, HIGH);
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
  //read control messages
  if (Serial.available() >= 2)
  {
    if (Serial.read() == '#') //start of new control message
    {

    }
  }
  

}

