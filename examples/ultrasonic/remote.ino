#include <Arduino.h>
#include <ObstacleAvoidanceCar.h>

// Ultrasonic Module pins
const int triggerPin = A1;
const int echoPin    = A0;

ObstacleAvoidanceCar car;  // create car object to control a servo

float distance;

void setup() {
  car.beginUltrasonic(triggerPin, echoPin);

  Serial.begin(115200);
}

void loop() {
  if (distance = car.getDistanceCM()) {
    Serial.println(distance);
  }
}
