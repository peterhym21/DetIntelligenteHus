#include "DHT11.h"


#define DHTPIN 2
#define DHTTYPE DHT11
float SetNumber = 26;
float Hysterese = 1;

DHT dht(DHTPIN, DHTTYPE);


float GetHumid()
{
	return dht.readHumidity();
}

float GetTemp()
{
	return dht.readTemperature();
}


void TjekTempInHous()
{
	float tempC = GetTemp();
	if (tempC < (SetNumber - Hysterese ))
	{
		TooCold();
	}
	if (tempC > (SetNumber + Hysterese ))
	{
		TooHot();
	}
	if ( tempC > (SetNumber - Hysterese )  &&  tempC < (SetNumber + Hysterese ))
	{
		PerfektTemp();
	}
}

void TooCold()
{
	TempTooCold();
	TurnOnRedLED();
	TurnOFFGreenLED();
	TurnOFFBlueLED();
}

void TooHot()
{
	TempTooHot();
	TurnOnBlueLED();
	TurnOFFGreenLED();
	TurnOFFRedLED();
}

void PerfektTemp()
{
	TempPerfekt();
	TurnOnGreenLED();
	TurnOFFRedLED();
	TurnOFFBlueLED();
}