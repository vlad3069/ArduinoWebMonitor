#include "DHT.h"
#define DHTPIN 2


DHT dht1(DHTPIN, DHT11);
int Temperature1;
int Humidity1;

void setup() {
  Serial.begin(9600);
  dht1.begin();
}

void loop() {
  Humidity1 = dht1.readHumidity();
  Temperature1 = dht1.readTemperature();
  if (isnan(Humidity1) || isnan(Temperature1)) {
  Serial.println("Не удается считать показания");

  return;
}
//Serial.print(Humidity1);
//Serial.print("H    ");
Serial.println(Temperature1);
//Serial.println("T");
delay(10000);
}
