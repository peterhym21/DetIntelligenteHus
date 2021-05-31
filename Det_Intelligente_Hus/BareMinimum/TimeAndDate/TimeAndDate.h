#include <DS3231.h>
#include <LiquidCrystal.h>
extern int rs, en, d4, d5, d6, d7;
extern LiquidCrystal lcd;

extern DS3231 clock;

RTCDateTime GetDateTime();
int AddLeadingZero(int num);