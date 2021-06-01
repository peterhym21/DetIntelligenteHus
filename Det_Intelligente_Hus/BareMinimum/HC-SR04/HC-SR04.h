#include <Arduino.h> 
#include <HCSR04.h>

extern int trigPin;    // Trigger
extern int echoPin;    // Echo
extern HCSR04 hc;

int GetDistance();
