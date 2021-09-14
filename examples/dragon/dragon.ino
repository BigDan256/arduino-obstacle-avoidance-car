#include <Arduino.h>
#include <ObstacleAvoidanceCar.h>

using ObstacleAvoidanceCarParts::Remote;

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

int turnTime = 500;
int moveTime = 500;

void dragon(int depth); // The movement pattern

void setup() {
  car.beginRemote(signalPin);
  car.beginWheels(enAPin, in1Pin, in2Pin, in3Pin, in4Pin, enBPin);
  car.setSpeed(255);
}

void loop() {
  switch (car.getRemoteKey()) {

  case Remote::KEY_0: dragon(0); break;
  case Remote::KEY_1: dragon(1); break;
  case Remote::KEY_2: dragon(2); break;
  case Remote::KEY_3: dragon(3); break;
  case Remote::KEY_4: dragon(4); break;
  case Remote::KEY_5: dragon(5); break;
  case Remote::KEY_6: dragon(6); break;
  case Remote::KEY_7: dragon(7); break;
  case Remote::KEY_8: dragon(8); break;
  case Remote::KEY_9: dragon(9); break;

  case Remote::KEY_LEFT:
    turnTime = (turnTime - 10) & 0x7ff;
    car.turnLeft(turnTime);
    break;
  case Remote::KEY_RIGHT:
    turnTime = (turnTime + 10) & 0x7ff;
    car.turnRight(turnTime);
    break;
  case Remote::KEY_UP:
    moveTime = (moveTime + 10) & 0x7ff;
    car.moveForwards(moveTime);
    break;
  case Remote::KEY_DOWN:
    moveTime = (moveTime - 10) & 0x7ff;
    car.moveBackwards(moveTime);
    break;

  default:
    break;
  }
}

void dragonL(int depth) {
    if (0 == depth) {
        car.moveForwards(moveTime);
        return;
    }
    dragonL(depth - 1);
    car.turnLeft(turnTime);
    dragonR(depth - 1);
}

void dragonR(int depth) {
    if (0 == depth) {
        car.moveForwards(moveTime);
        return;
    }
    dragonL(depth - 1);
    car.turnRight(turnTime);
    dragonR(depth - 1);
}

void dragon(int depth) {
    dragonL(depth);
    car.turnLeft(turnTime);
    dragonR(depth);
}
