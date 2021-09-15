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

int turnTime = 200;
int moveTime = 500;

void dragonL(int depth); // The movement pattern

void setup() {
  // put your setup code here, to run once:

  // Uncomment to attach modules to the car
  car.beginRemote(signalPin);
  //car.beginUltrasonic(triggerPin, echoPin);
  //car.beginServo(pulsePin);
  car.beginWheels(enAPin, in1Pin, in2Pin, in3Pin, in4Pin, enBPin);

  car.setSpeed(255);
}

void loop() {
  // put your main code here, to run repeatedly:

  switch (car.getRemoteKey()) {

  case Remote::KEY_0: dragonL(0); break;
  case Remote::KEY_1: dragonL(1); break;
  case Remote::KEY_2: dragonL(2); break;
  case Remote::KEY_3: dragonL(3); break;
  case Remote::KEY_4: dragonL(4); break;
  case Remote::KEY_5: dragonL(5); break;
  case Remote::KEY_6: dragonL(6); break;
  case Remote::KEY_7: dragonL(7); break;
  case Remote::KEY_8: dragonL(8); break;
  case Remote::KEY_9: dragonL(9); break;

  case Remote::KEY_LEFT:
    car.turnLeft(turnTime);
    break;

  case Remote::KEY_RIGHT:
    car.turnRight(turnTime);
    break;

  case Remote::KEY_UP:
    car.moveForwards(moveTime);
    break;

  case Remote::KEY_DOWN:
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
  car.turnLeft(turnTime / 2);
  dragonL(depth - 1);
  car.turnRight(turnTime);
  dragonR(depth - 1);
  car.turnRight(turnTime / 2);
}

void dragonR(int depth) {
  if (0 == depth) {
      car.moveForwards(moveTime);
      return;
  }
  car.turnLeft(turnTime / 2);
  dragonL(depth - 1);
  car.turnLeft(turnTime);
  dragonR(depth - 1);
  car.turnRight(turnTime / 2);
}
