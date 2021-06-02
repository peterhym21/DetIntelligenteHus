#include "Menu.h"

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const byte rows = 4;
const byte cols = 4;
char keys[rows][cols] = {
	{'1','2','3','A'},
	{'4','5','6','B'},
	{'7','8','9','C'},
	{'*','0','#','D'}
};
byte rowPins[rows] = {32, 33, 34, 35}; //connect to the row pinouts of the keypad
byte colPins[cols] = {36, 37, 38, 39}; //connect to the column pinouts of the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, rows, cols );


void DisplayMenu()
{
	display.clearDisplay();

	display.setTextSize(1);
	display.setTextColor(WHITE);
	display.setCursor(0,0);
	display.println(F("Menu"));
	display.setCursor(0,10);
	display.println(F("A: Time and Date"));
	display.setCursor(0,20);
	display.println(F("B: Tempreture"));
	display.setCursor(0,30);
	display.println(F("C: Humidity"));

	display.display();
}

void Menu(char key, bool *TimeAndDate)
{
	
	switch (key)
	{
		case 'A':
		Serial.println("Du valgte: A");
		{
			*TimeAndDate = true;
			Serial.println(*TimeAndDate);
		}
		break;
		case 'B':
		{
			Serial.println("Du valgte: C");
			float temp = GetTemp();
			LCDPrintTemp(temp);
			*TimeAndDate = false;
		}
		break;
		case 'C':
		{
			Serial.println("Du valgte: D");
			float humid = GetHumid();
			LCDPrintHumidity(humid);
			*TimeAndDate = false;
		}
		break;
		default:
		break;
	}
}


