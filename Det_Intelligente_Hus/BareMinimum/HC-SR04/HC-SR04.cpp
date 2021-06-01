#include "HC-SR04.h"

int trigPin = 3;    // Trigger
int echoPin = 4;    // Echo
HCSR04 hc(trigPin,echoPin);

int GetDistance()
{
	unsigned int distance = hc.dist();
	return distance;
}