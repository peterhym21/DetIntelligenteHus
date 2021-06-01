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
#include "HC-SR04/HC-SR04.h"
#include "Servos/Servos.h"


extern bool Keycard;
extern bool TimeAndDate;

