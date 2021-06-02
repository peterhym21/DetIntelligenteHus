#include "Servos.h"

Servo myservo; // create servo object to control a servo
int val = 50;


void SetServo(int cm)
{
	if (cm < val)
	{
		myservo.write(cm); // cm bliver brugt til graderne af servoen
	}
	else
	{
		myservo.write(90);
	}
}
