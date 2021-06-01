#include <DHT.h>
#include "../Light/Light.h"
#include "../Moters/FanMoter.h"

#define DHTPIN 2
#define DHTTYPE DHT11

extern DHT dht;
extern float SetNumber;
extern float Hysterese;

float GetHumid();
float GetTemp();
void TjekTempInHous();
void TooCold();
void TooHot();
void PerfektTemp();