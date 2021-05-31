#include "TimeAndDate.h"

RTCDateTime GetDateTime()
{
	return clock.getDateTime();
}

int AddLeadingZero(int num)
{
	if (num < 10)
	{
		lcd.print("0");
		return num;
	}
	return num;
}