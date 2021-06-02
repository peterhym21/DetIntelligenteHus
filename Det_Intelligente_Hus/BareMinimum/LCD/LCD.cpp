#include "LCD.h"

int rs = 22, en = 23, d4 = 24, d5 = 25, d6 = 26, d7 = 27;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void LCDPrintTemp(float temp)
{
	lcd.clear();
	lcd.print(F("Temperatur: "));
	lcd.print(temp, 0);
	lcd.print((char)223);
}

void LCDPrintHumidity(float humid)
{
	lcd.clear();
	lcd.print(F("Humidity: "));
	lcd.print(humid, 0);
	lcd.print(F("%"));
}


void LCDPrintTimeAndDate(RTCDateTime dt)
{
	lcd.clear();
	lcd.print(AddLeadingZero(dt.year));   lcd.print("-");
	lcd.print(AddLeadingZero(dt.month));  lcd.print("-");
	lcd.print(AddLeadingZero(dt.day));    lcd.print(" ");
	lcd.setCursor(0, 1);
	lcd.print(AddLeadingZero(dt.hour));   lcd.print(":");
	lcd.print(AddLeadingZero(dt.minute)); lcd.print(":");
	lcd.print(AddLeadingZero(dt.second)); lcd.print("");
}
