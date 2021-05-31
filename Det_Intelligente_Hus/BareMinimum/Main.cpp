﻿#include "Main.h"


bool Keycard = false;
bool TimeAndDate = false;
long previousMillis = 0;
long interval = 1000;
DS3231 clock;

void setup()
{
	#pragma region Begins
	Serial.begin(9600);
	SPI.begin();
	mfrc522.PCD_Init();
	dht.begin();
	lcd.begin(16, 2);
	clock.begin();
	Timer1.initialize(10);
	if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
	{ // Address for 128x64
		Serial.println(F("SSD1306 allocation failed"));
		for(;;); // Don't proceed, loop forever
	}
	#pragma endregion Begins
	
	#pragma region PinMode
	pinMode(RedRGB, OUTPUT);
	pinMode(GreenRGB, OUTPUT);
	pinMode(BlueRGB, OUTPUT);
	pinMode(RedLED, OUTPUT);
	pinMode(GreenLED, OUTPUT);
	pinMode(BlueLED, OUTPUT);
	#pragma endregion PinMode
	
	display.clearDisplay();
	lcd.clear();
	
}

void loop()
{
	if (Keycard)
	{
		unsigned long currentMillis = millis();
		DisplayMenu();
		char key = keypad.getKey();
		if (key != NO_KEY){
			Serial.println(key);
			Menu(key, &TimeAndDate);
		}
		if (currentMillis - previousMillis >= interval && TimeAndDate )
		{
			RTCDateTime dt = GetDateTime();
			LCDPrintTimeAndDate(dt);
			previousMillis = currentMillis;
		}
		ChangeRGBAnalog();
		TjekTempInHous();
	}
	
	if (!Keycard)
	{
		if ( !mfrc522.PICC_IsNewCardPresent() || !mfrc522.PICC_ReadCardSerial() ) {
			return;
		}
		String UID = ReadUID();
		CheckKeyCard(UID, &Keycard);
		display.clearDisplay();
	}

}



