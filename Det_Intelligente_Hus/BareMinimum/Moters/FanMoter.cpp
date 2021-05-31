#include "FanMoter.h"

int moter = 12;


void TempTooCold()
{
	Timer1.pwm(moter, (1023 / 100) * 0);
	return;
}

void TempTooHot()
{
	Timer1.pwm(moter, (1023 / 100) * 100);
	return;
}

void TempPerfekt()
{
	Timer1.pwm(moter, (1023 / 100) * 50);
	return;
}