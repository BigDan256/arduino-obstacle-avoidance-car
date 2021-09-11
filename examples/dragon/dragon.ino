#include <Arduino.h>
#include <ObstacleAvoidanceCar.h>

// Infrared Remote pins
const int signalPin = 12;

// Motor Controller Module pins
const int enAPin = 5;
const int in1Pin = 2;
const int in2Pin = 4;
const int in3Pin = 7;
const int in4Pin = 8;
const int enBPin = 10;

ObstacleAvoidanceCar car;  // create car object to control a servo

int turnSpeed = 127;
int moveSpeed = 127;

void dragon(int depth); // The movement pattern

void setup() {
  // Uncomment to attach modules to the car
  car.beginRemote(signalPin);
  car.beginWheels(enAPin, in1Pin, in2Pin, in3Pin, in4Pin, enBPin);
}

void loop() {
  switch (car.getRemoteKey()) {

  case 0x00: dragon(0); break;
  case 0x01: dragon(1); break;
  case 0x02: dragon(2); break;
  case 0x03: dragon(3); break;
  case 0x04: dragon(4); break;
  case 0x05: dragon(5); break;
  case 0x06: dragon(6); break;
  case 0x07: dragon(7); break;
  case 0x08: dragon(8); break;
  case 0x09: dragon(9); break;

  case 0x0A:
    turnSpeed = (turnSpeed - 2) & 0x7f;
    car.turnLeft(2000, turnSpeed);
    break;
  case 0x0B:
    turnSpeed = (turnSpeed + 2) & 0x7f;
    car.turnRight(2000, turnSpeed);
    break;
  case 0x0C:
    moveSpeed = (moveSpeed + 2) & 0x7f;
    car.moveForwards();
    break;
  case 0x0D:
    moveSpeed = (moveSpeed - 2) & 0x7f;
    car.moveBackwards();
    break;

  default:
  }
}

void dragonL(int depth) {
    if (0 == depth) {
        car.moveForwards(500, moveSpeed);
        return;
    }
    dragonL(depth - 1);
    car.turnLeft(500, turnSpeed);
    dragonR(depth - 1);
}

void dragonR(int depth) {
    if (0 == depth) {
        car.moveForwards(500, moveSpeed);
        return;
    }
    dragonL(depth - 1);
    car.turnRight(500, turnSpeed);
    dragonR(depth - 1);
}

void dragon(int depth) {
    dragonL(depth);
    car.turnLeft(500, turnSpeed);
    dragonR(depth);
}

