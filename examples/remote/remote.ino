#include <Arduino.h>
#include <ObstacleAvoidanceCar.h>

// Infrared Remote pins
const int signalPin = 12;

ObstacleAvoidanceCar car;  // create car object to control a servo

int key;

void setup() {
  car.beginRemote(signalPin);

  Serial.begin(115200);
}

void loop() {
  if (key = car.getRemoteKey()) {
    Serial.print("0x");
    Serial.println(key, 16);
  }
}
