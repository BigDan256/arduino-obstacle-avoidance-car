/*!
 * @file parts/Wheel.cpp
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

#include "Wheel.h"

namespace ObstacleAvoidanceCarParts {

bool Wheel::begin(int enAPin_, int in1Pin_, int in2Pin_) {
  enAPin = enAPin_;
  in1Pin = in1Pin_;
  in2Pin = in2Pin_;

  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  analogWrite(enAPin, 0);
  
  return false;
}

void Wheel::setForwards(void) {
  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin, LOW);
}

void Wheel::setBackwards(void) {
  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin, LOW);
}

void Wheel::setSpeed(int speed) {
  analogWrite(enAPin, speed);
}

} // /namespace
