#include "KeyCardAccess.h"

MFRC522 mfrc522(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;

String ReadUID()
{
	String UID;
	for (byte i = 0; i < mfrc522.uid.size; i++) {
		UID += mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ";
		UID += String (mfrc522.uid.uidByte[i], HEX);
	}
	UID.toUpperCase();
	return UID ;

}

void CheckKeyCard(String UID, bool *Keycard)
{
	String UnlogKey = " 30 45 66 A7";
	if (UID	== UnlogKey)
	{
		*Keycard = true;
		Serial.println("Welcome Home");
	}
	else if (UID != UnlogKey)
	{
		*Keycard = false;
		Serial.println("Access denied");
		
	}

}
