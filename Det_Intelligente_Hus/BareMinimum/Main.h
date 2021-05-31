#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <MFRC522.h>
#include <TimerOne.h>
#include "NFC/KeyCardAccess.h"
#include "Menu/Menu.h"
#include "DHT11/DHT11.h"
#include "TimeAndDate/TimeAndDate.h"
#include "Light/Light.h"


extern bool Keycard;
extern bool TimeAndDate;

