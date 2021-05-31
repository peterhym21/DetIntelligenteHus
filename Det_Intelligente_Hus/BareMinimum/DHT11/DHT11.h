#include <DHT.h>
#include "../Light/Light.h"
#include "../Moters/FanMoter.h"

extern DHT dht;
extern float SetNumber;
extern float Hysterese;

float GetHumid();
float GetTemp();
void TjekTempInHous();
void TooCold();
void TooHot();
void PerfektTemp();