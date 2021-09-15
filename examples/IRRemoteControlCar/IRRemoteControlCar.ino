#include <Arduino.h>
#include <ObstacleAvoidanceCar.h>

// Infrared Remote pins
const int signalPin = 12;

// Ultrasonic Module pins
const int triggerPin = A1;
const int echoPin    = A0;

// Servo Module pins
const int pulsePin = 3;

// Motor Controller Module pins
const int enAPin = 5;
const int in1Pin = 2;
const int in2Pin = 4;
const int in3Pin = 7;
const int in4Pin = 8;
const int enBPin = 10;


ObstacleAvoidanceCar car;  // create car object to control a servo

using ObstacleAvoidanceCarParts::Remote;

void setup() {
  // put your setup code here, to run once:

  // Uncomment to attach modules to the car
  car.beginRemote(signalPin);
  //car.beginUltrasonic(triggerPin, echoPin);
  //car.beginServo(pulsePin);
  car.beginWheels(enAPin, in1Pin, in2Pin, in3Pin, in4Pin, enBPin);

  car.setSpeed(120);
}

void loop() {
  // put your main code here, to run repeatedly:

  switch (car.getRemoteKey()) {

  case Remote::KEY_LEFT:
    car.turnLeft(200);
    break;

  case Remote::KEY_RIGHT:
    car.turnRight(200);
    break;

  case Remote::KEY_UP:
    car.moveForwards(500);
    break;

  case Remote::KEY_DOWN:
    car.moveBackwards(500);
    break;

  default:
    break;
  }
}
