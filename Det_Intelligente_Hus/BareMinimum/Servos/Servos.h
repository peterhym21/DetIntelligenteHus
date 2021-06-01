#include <Arduino.h>
#include <Servo.h>

#define servopin 10
extern Servo myservo; // create servo object to control a servo
extern int val; // variable to read the value from the analog pin


void SetServo(int grader);