#include <RGBLed.h>

#define RED_PIN   D5
#define GREEN_PIN D6
#define BLUE_PIN  D7

RGBLed led(RED_PIN, GREEN_PIN, BLUE_PIN, RGBLed::COMMON_CATHODE);

void setup() { }

void loop() {
  led.setColor(RGBLed::RED);
  delay(2000);
  led.setColor(RGBLed::BLUE);
  delay(2000);
  led.setColor(RGBLed::GREEN);
  delay(2000);
  
}
