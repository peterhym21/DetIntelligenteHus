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

int rs = 22, en = 23, d4 = 24, d5 = 25, d6 = 26, d7 = 27;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void DisplayMenu()
{
	display.clearDisplay();

	display.setTextSize(1); // Normal 1:1 pixel scale
	display.setTextColor(WHITE); // Draw white text
	display.setCursor(0,0);
	display.println(F("Menu"));
	display.setCursor(0,10);
	display.println(F("A: Time"));
	display.setCursor(0,20);
	display.println(F("B: Date"));
	display.setCursor(0,30);
	display.println(F("C: Tempreture"));
	display.setCursor(0,40);
	display.println(F("A: Humidity"));

	display.display();
}

void Menu(char key)
{
	if (key == 'A')
	{
		Serial.println("Du valgte: A");
	}
	if (key == 'B')
	{
		Serial.println("Du valgte: B");
	}
	if (key == 'C')
	{
		Serial.println("Du valgte: C");
	}
	if (key == 'D')
	{
		Serial.println("Du valgte: D");
	}
}

