/*!
 * @file ObstacleAvoidanceCar.cpp
 *
 * @mainpage Obstacle Avoidance Car Library
 * 
 * @section intro_sec Introduction
 * 
 * This is a simplified library for the Obstacle Avoidance Car Kit
 * 
 * This kit includes:
 *  - Arduino UNO R3 Clone
 *  - L298N Motor Driver Module
 *  - Ultrasonic Sensor
 *  - Servo
 *  - IR Remote receiver
 *  - ??? Shield
 *  - Regulated battery pack
 * 
 * May include sources from the following libraries, so is intended for
 * private use:
 *  - IRRemote
 *  - L298N
 *  - Others
 * 
 * @section author Author
 * 
 * Written by Daniel Gault for my son.
 * 
 * @section license License
 * 
 * proprietary
 */

#include "ObstacleAvoidanceCar.h"

bool ObstacleAvoidanceCar::begin(void) {
  //TODO
}


bool ObstacleAvoidanceCar::beginRemote(int signalPin) {
  return remote.begin(signalPin);
}

bool ObstacleAvoidanceCar::beginServo(int pulsePin) {
  return servo.begin(pulsePin);
}

bool ObstacleAvoidanceCar::beginUltrasonic(int triggerPin, int echoPin) {
  return ultrasonic.begin(triggerPin, echoPin);
}

bool ObstacleAvoidanceCar::beginWheels(int enAPin, int in1Pin, int in2Pin, int in3Pin, int in4Pin, int enBPin) {
  return leftWheel.begin(enAPin, in1Pin, in2Pin) && rightWheel.begin(enBPin, in4Pin, in3Pin);
}


void ObstacleAvoidanceCar::moveForwards(void) {
  //TODO
}

void ObstacleAvoidanceCar::moveBackwards(void) {
  //TODO
}

void ObstacleAvoidanceCar::turnLeft(void) {
  //TODO
}

void ObstacleAvoidanceCar::turnRight(void) {
  //TODO
}

void ObstacleAvoidanceCar::stopMoving(void) {
  //TODO
}
