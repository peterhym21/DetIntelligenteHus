#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>
#include "../Menu/Menu.h"

#define RST_PIN   5
#define SS_PIN    53

extern MFRC522 mfrc522;
extern MFRC522::MIFARE_Key key;
String ReadUID();
void CheckKeyCard(String UID, bool *Keycard);
