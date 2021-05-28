#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <LiquidCrystal.h>
#include <Keypad.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

extern long previousMillis;
extern long interval;
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET 4 // Reset pin # (or -1 if sharing Arduino reset pin)
extern Adafruit_SSD1306 display;


#define pwm 12
#define Off 0
#define OneFourth 64
#define ToFourth 127
#define ThreeFourth 191
#define FourFourth 255

extern const byte rows;
extern const byte cols;
extern char keys[][4];
extern byte rowPins[]; //connect to the row pinouts of the keypad
extern byte colPins[]; //connect to the column pinouts of the keypad
extern Keypad keypad;

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


// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
extern int rs, en, d4, d5, d6, d7;
extern LiquidCrystal lcd;


void DisplayMenu();
void Menu(char key);


