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

#include "Ultrasonic.h"

#define SOUND_SPEED 0.1715f // mm/us

namespace ObstacleAvoidanceCarParts {

bool Ultrasonic::begin(uint8_t triggerPin_, uint8_t echoPin_) {
  triggerPin = triggerPin_;
  echoPin    = echoPin_;

  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
}

unsigned long Ultrasonic::readDistanceRaw(void) {
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  sum -= buffer[ptr];
  buffer[ptr] = pulseIn(echoPin, HIGH);
  sum += buffer[ptr];

  ptr = (ptr + 1) & 15;

  return sum >> 1;
}

float Ultrasonic::readDistanceCM(void) {
  return readDistanceRaw() * SOUND_SPEED * 0.1f;
}

float Ultrasonic::readDistanceMM(void) {
  return readDistanceRaw() * SOUND_SPEED;
}

} // /namespace
