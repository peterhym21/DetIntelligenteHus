#include "Light.h"

int R_brightness = 0;
int G_brightness = 0;
int B_brightness = 0;

void ChangeRGBAnalog()
{
	R_brightness = map(analogRead(A0), 0, 1023, 0, 255);
	G_brightness = map(analogRead(A1), 0, 1023, 0, 255);
	B_brightness = map(analogRead(A2), 0, 1023, 0, 255);
	
	analogWrite(RedRGB, R_brightness);
	analogWrite(GreenRGB, G_brightness);
	analogWrite(BlueRGB, B_brightness);
	
}


void TurnOnRedLED()
{
	digitalWrite(RedLED, HIGH);
}

void TurnOnGreenLED()
{
	digitalWrite(GreenLED, HIGH);
}

void TurnOnBlueLED()
{
	digitalWrite(BlueLED, HIGH);
}

void TurnOFFRedLED()
{
	digitalWrite(RedLED, LOW);
}

void TurnOFFGreenLED()
{
	digitalWrite(GreenLED, LOW);
}

void TurnOFFBlueLED()
{
	digitalWrite(BlueLED, LOW);
}