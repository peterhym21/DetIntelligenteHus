#include "HC-SR04.h"

HCSR04 hc(trigPin, echoPin);

int GetDistance()
{
	unsigned int distance = hc.dist();
	return distance;
}