#include <Arduino.h> 
#include <HCSR04.h>

#define trigPin 3    // Trigger
#define echoPin 4    // Echo
extern HCSR04 hc;

int GetDistance();
