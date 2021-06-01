# Det Intelligente Hus

## Introduktion / Motivation

Det intelligente Hus for mig, er at gøre ting så nemt at anvende for den enklete bruge,
og af den grund er dette et udksat af hvad jeg ville mene der skal være i det intelligente hus.
nogle af de ting ville være en central display med en keypad til at kunne ændre temratur, blæser hasighed. Et display til at kunne se tempraturem, tiden, dato, eller andet nytting info. Knapper til at åbne vinduer/ døre. Keycard til at lås døre op. Justerbare RGB LED lys.

Dette er selvfølig kun toppen af det, men neden under har jeg en præciserede liste over det ting jeg gerne vil lave.

Det skal dog siges at dette er kun en prototype på forslag til hvordan fremtidens huse kunne blive til

## Diagrams

![Flow Chart](Documentation/Det_intilligente_Hus.png)


## Hardware Details

Til dette projekt er der blevet brugt en Elegoo MEGA2560 R3, og en ATATMEL-ICE-BASIC som bliver brugt til Debuggeing af koden.

Yderliger skal der bruges følgende:

- Fan Blade
- DC Moter
- L293D
- Power Suply Moduel
- Doide Rectifier
- Keypad
- RFIO-RC522 (NFC / RFID læser)
- LCD Display
- OLED Display
- DS3231 
- DHT11
- RGB LED
- Rød, Grøn, Blå singe LED
- 6 220 Ohm Modstand
- 4 Potentiometere
- Servo moter
- HC-SR04 ultralyds sensor
- en masse ledninger


## Tools

[Microchip Studio for AVR and SAM Devices 7.0.2542](https://www.microchip.com/en-us/development-tools-tools-and-software/microchip-studio-for-avr-and-sam-devices#Downloads)

[Draw.io](https://app.diagrams.net/)

[Visual Studio Code version 1.56](https://code.visualstudio.com/)

[Git 2.31.1](https://git-scm.com/downloads)

## Librayes

[Adafruit_BusIO 1.7.3](https://github.com/adafruit/Adafruit_BusIO)

[Adafruit_GFX_Library 1.10.10](https://github.com/adafruit/Adafruit-GFX-Library)

[Adafruit_SSD1306 2.4.5](https://github.com/adafruit/Adafruit_SSD1306)

[AdaFruit_unified_sensor 1.1.4](https://github.com/adafruit/Adafruit_Sensor)

[DHT_sesnor_libaray 1.4.2](https://github.com/adafruit/DHT-sensor-library)

[DS3231 1.0.7](https://github.com/jarzebski/Arduino-DS3231)

[Keypad 1.0.2](https://playground.arduino.cc/Code/Keypad/)

[LiquidCrystal 1.0.7](https://www.arduino.cc/en/Reference/LiquidCrystal)

[MFRC522 1.4.8](https://github.com/miguelbalboa/rfid)

[Servo 1.1.7](https://www.arduino.cc/reference/en/libraries/servo/)

[SPI](https://www.arduino.cc/en/reference/SPI)

[TimerOne 1.1.0](https://playground.arduino.cc/Code/Timer1/)

[TimerThree 1.1.0](https://playground.arduino.cc/Code/Timer1/)

[Wire](https://www.arduino.cc/en/reference/wire)

[HCSR04-ultrasonic-sensor-lib 2.2.0](https://github.com/gamegine/HCSR04-ultrasonic-sensor-lib)

### Pins

- DHT11: Pin 2
- HC-SR04: Triger Pin 3, Echo Pin 4
- LCD
        - LCD RS pin to digital pin 22
        - LCD Enable pin (E) to digital pin 23
        - LCD D4 pin to digital pin 24
        - LCD D5 pin to digital pin 25
        - LCD D6 pin to digital pin 26
        - LCD D7 pin to digital pin 27
        - LCD R/W pin to ground
        - LCD VSS pin to ground
        - LCD VCC/VDD pin to 5V
        - 10K resistor:
        - ends to +5V and ground
        - wiper to LCD VO
- Light
        - RedRGB pin 42
        - GreenRGB pin 43
        - BlueRGB pin 44
        - RedLED pin 9
        - GreenLED pin 7
        - BlueLED pin 8
- DC moter Pin 12
- Keypad:
        - rowPins: 32, 33, 34, 35 //connect to the row pinouts of the keypad
        - colPins: 36, 37, 38, 39 //connect to the column pinouts of the keypad
- NFC / RFID
        - RST_PIN   5
        - SS_PIN    53
- servopin pin 10
- OLED pin 20,21 (SCL og SDA)
- Real time clock pin SCL og SDA

## Deployment

1. conenct both cabels to the Atmel and Mega2560
2. right click your projekt, go to properties, finde tools, and selcet Atmel and JTAG in the to dopedowns, save and close
3. hit start without debugging, and let it uplode, an check that it is succesfull


## Responsible People  


|Name|E-mail|Role|
|-|-|-|
|Peter Hymoller|Peter.hymoeller@hotmail.dk|Developer|
|Egon Christian Rasmussen|ecr@eucsyd.dk|Product Owner|