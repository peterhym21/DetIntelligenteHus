#include <LiquidCrystal.h>
#include "../DS3231/DS3231.h"
#include "../TimeAndDate/TimeAndDate.h"
/*

The circuit:
* LCD RS pin to digital pin 22
* LCD Enable pin (E) to digital pin 23
* LCD D4 pin to digital pin 24
* LCD D5 pin to digital pin 25
* LCD D6 pin to digital pin 26
* LCD D7 pin to digital pin 27
* LCD R/W pin to ground
* LCD VSS pin to ground
* LCD VCC/VDD pin to 5V
* 10K resistor:
* ends to +5V and ground
* wiper to LCD VO pin		//(pin 3)
*/

extern int rs, en, d4, d5, d6, d7;
extern LiquidCrystal lcd;


void LCDPrintTemp(float temp);
void LCDPrintHumidity(float humid);
void LCDPrintTimeAndDate(RTCDateTime dt);