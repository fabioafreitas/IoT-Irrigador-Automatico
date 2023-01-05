#include <Adafruit_ADS1X15.h>

#define SOIL_HUMIDITY_ADS_PIN 0

Adafruit_ADS1115 ads;


void initADS() {
  ads.setGain(GAIN_TWOTHIRDS);
  //adsVCC.setGain(GAIN_TWOTHIRDS);

  if (!ads.begin(0x48)) {
    Serial.println("[ADS GND] Failed to initialize ADS.");
    while (1);
  }
}


float getSoilHumidity() {
  int16_t adc;
  float volts;
  //float soil_humidity;
  
  adc = ads.readADC_SingleEnded(SOIL_HUMIDITY_ADS_PIN);
  volts = ads.computeVolts(adc);
  

  Serial.println("-------------------------- 3.3v ---------------------------------");
  Serial.print("ADS VALUE: "); Serial.println(adc);
  Serial.print("Volts: "); Serial.print(volts, 3); Serial.println("V"); 
  
  return 0;
}

void setup(void) {
  delay(1000);
  Serial.begin(115200);
  initADS();
}

void loop(void) {
  float sh = getSoilHumidity();
  delay(3000);
}
