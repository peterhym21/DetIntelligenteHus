#include "Main.h"


bool Keycard = false;

void setup()
{
	Serial.begin(9600);
	SPI.begin();
	mfrc522.PCD_Init();
	if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
	{ // Address for 128x64
		Serial.println(F("SSD1306 allocation failed"));
		for(;;); // Don't proceed, loop forever
	}
	
}

void loop()
{
	if (Keycard)
	{
		DisplayMenu();
		char key = keypad.getKey();
		if (key != NO_KEY){
			Serial.println(key);
			Menu(key);
		}
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



