# Det Intelligente Hus

## Introduktion / Motivation

Det intelligente Hus for mig, er at gøre ting så nemt at anvende for den enklete bruge,
og af den grund er dette et udksat af hvad jeg ville mene der skal være i det intelligente hus.
nogle af de ting ville være en central display med en keypad til at kunne ændre temratur, blæser hasighed. Et display til at kunne se tempraturem, tiden, dato, eller andet nytting info. Knapper til at åbne vinduer/ døre. Keycard til at lås døre op. Justerbare RGB LED lys.

Dette er selvfølig kun toppen af det, men neden under har jeg en præciserede liste over det ting jeg gerne vil lave.

Det skal dog siges at dette er kun en prototype på forslag til hvordan fremtidens huse kunne blive til


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
- en masse ledninger


## Tools

[Microchip Studio for AVR and SAM Devices 7.0.2542](https://www.microchip.com/en-us/development-tools-tools-and-software/microchip-studio-for-avr-and-sam-devices#Downloads)

[Draw.io](https://app.diagrams.net/)

[Visual Studio Code version 1.56](https://code.visualstudio.com/)

[Git 2.31.1](https://git-scm.com/downloads)

## Librayes

[Adafruit_BusIO](https://github.com/adafruit/Adafruit_BusIO)

[Adafruit_GFX_Library](https://github.com/adafruit/Adafruit-GFX-Library)

[Adafruit_SSD1306](https://github.com/adafruit/Adafruit_SSD1306)

[AdaFruit_unified_sensor](https://github.com/adafruit/Adafruit_Sensor)

[DHT_sesnor_libaray](https://github.com/adafruit/DHT-sensor-library)

[DS3231](https://github.com/jarzebski/Arduino-DS3231)

[Keypad](https://playground.arduino.cc/Code/Keypad/)

[LiquidCrystal](https://www.arduino.cc/en/Reference/LiquidCrystal)

[MFRC522](https://github.com/miguelbalboa/rfid)

[Servo](https://www.arduino.cc/reference/en/libraries/servo/)

[SPI](https://www.arduino.cc/en/reference/SPI)

[TimerOne](https://playground.arduino.cc/Code/Timer1/)

[TimerThree](https://playground.arduino.cc/Code/Timer1/)

[Wire](https://www.arduino.cc/en/reference/wire)

[HCSR04-ultrasonic-sensor-lib](https://github.com/gamegine/HCSR04-ultrasonic-sensor-lib)

[NewPing](https://playground.arduino.cc/Code/NewPing/)

## Diagrams

![Flow Chart]()

## Deployment

1. conenct both cabels to the Atmel and Mega2560
2. right click your projekt, go to properties, finde tools, and selcet Atmel and JTAG in the to dopedowns, save and close
3. hit start without debugging, and let it uplode, an check that it is succesfull


## Responsible People  


|Name|E-mail|Role|
|-|-|-|
|Peter Hymoller|Peter.hymoeller@hotmail.dk|Developer|
|Egon Christian Rasmussen|ecr@eucsyd.dk|Product Owner|