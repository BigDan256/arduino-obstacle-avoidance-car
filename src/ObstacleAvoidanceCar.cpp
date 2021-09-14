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

#include <Arduino.h>

bool ObstacleAvoidanceCar::begin(void) {
  //TODO
}


bool ObstacleAvoidanceCar::beginRemote(uint8_t signalPin) {
  return remote.begin(signalPin);
}

int ObstacleAvoidanceCar::getRemoteKey(void) {
  return remote.getKey();
}



bool ObstacleAvoidanceCar::beginServo(uint8_t pulsePin) {
  return servo.begin(pulsePin);
}

void ObstacleAvoidanceCar::lookLeft(void) {
  servo.setDirectionRaw(0);
}

void ObstacleAvoidanceCar::lookRight(void) {
  servo.setDirectionRaw(180);
}

void ObstacleAvoidanceCar::lookStraight(void) {
  servo.setDirectionRaw(90);
}



bool ObstacleAvoidanceCar::beginUltrasonic(uint8_t triggerPin, uint8_t echoPin) {
  return ultrasonic.begin(triggerPin, echoPin);
}

float ObstacleAvoidanceCar::getDistanceCM(void) {
  return ultrasonic.readDistanceCM();
}



bool ObstacleAvoidanceCar::beginWheels(uint8_t enAPin, uint8_t in1Pin, uint8_t in2Pin, uint8_t in3Pin, uint8_t in4Pin, uint8_t enBPin) {
  return leftWheel.begin(enAPin, in1Pin, in2Pin) && rightWheel.begin(enBPin, in4Pin, in3Pin);
}


void ObstacleAvoidanceCar::move(int time, int speed) {
  // Set the movement speed
  leftWheel.setSpeed(speed);
  rightWheel.setSpeed(speed);

  // Run for a length of time
  delay(time);

  // Stop moving
  leftWheel.setSpeed(0);
  rightWheel.setSpeed(0);
}
void ObstacleAvoidanceCar::move(int time) {
  move(time, wheelSpeed);
}
void ObstacleAvoidanceCar::move(void) {
  move(timeStep);
}


void ObstacleAvoidanceCar::moveForwards(int time, int speed) {
  // Set the new movement direction
  leftWheel.setForwards();
  rightWheel.setForwards();

  move(time, speed);
}
void ObstacleAvoidanceCar::moveForwards(int time) {
  moveForwards(time, wheelSpeed);
}
void ObstacleAvoidanceCar::moveForwards(void) {
  moveForwards(timeStep);
}


void ObstacleAvoidanceCar::moveBackwards(int time, int speed) {
  // Set the new movement direction
  leftWheel.setBackwards();
  rightWheel.setBackwards();

  move(time, speed);
}
void ObstacleAvoidanceCar::moveBackwards(int time) {
  moveBackwards(time, wheelSpeed);
}
void ObstacleAvoidanceCar::moveBackwards(void) {
  moveBackwards(timeStep);
}


void ObstacleAvoidanceCar::turnLeft(int time, int speed) {
  // Set the new movement direction
  leftWheel.setBackwards();
  rightWheel.setBackwards();

  move(time, speed);
}
void ObstacleAvoidanceCar::turnLeft(int time) {
  moveBackwards(time, wheelSpeed);
}
void ObstacleAvoidanceCar::turnLeft(void) {
  moveBackwards(timeStep);
}


void ObstacleAvoidanceCar::turnRight(int time, int speed) {
  // Set the new movement direction
  leftWheel.setBackwards();
  rightWheel.setBackwards();

  move(time, speed);
}
void ObstacleAvoidanceCar::turnRight(int time) {
  moveBackwards(time, wheelSpeed);
}
void ObstacleAvoidanceCar::turnRight(void) {
  moveBackwards(timeStep);
}


void ObstacleAvoidanceCar::setSpeed(int speed) {
  wheelSpeed = speed;
}

void ObstacleAvoidanceCar::setTimeStep(int time) {
  timeStep = time;
}
