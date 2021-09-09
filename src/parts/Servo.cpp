/*!
 * @file parts/Ultrasonic.cpp
 *
 * @mainpage Obstacle Avoidance Car Library
 *
 * @section author Author
 *
 * Written by Daniel Gault for my son.
 *
 * @section license License
 *
 * proprietary
 */

#include <Arduino.h>

#include "Servo.h"

namespace ObstacleAvoidanceCarParts {

bool Servo::begin(int pulsePin) {
  servo.attach(pulsePin);

  return servo.attached();
}

void Servo::setDirectionRaw(int value) {
  servo.write(value);
  delay(15);
}

void Servo::setDirectionAngle(int angle) {
  setDirectionRaw(angle + 90);
}

} // /namespace
