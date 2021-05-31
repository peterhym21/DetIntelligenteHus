#include <Arduino.h>

#define RedRGB 42
#define GreenRGB 43
#define BlueRGB 44

#define RedLED 9
#define GreenLED 7
#define BlueLED 8

extern int R_brightness;
extern int G_brightness;
extern int B_brightness;

void ChangeRGBAnalog();
void TurnOnRedLED();
void TurnOnGreenLED();
void TurnOnBlueLED();
void TurnOFFRedLED();
void TurnOFFGreenLED();
void TurnOFFBlueLED();