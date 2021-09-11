#include <Arduino.h>
#include <ObstacleAvoidanceCar.h>

// Servo Module pins
const int pulsePin = 3;

ObstacleAvoidanceCar car;  // create car object to control a servo

int angle = 0;    // variable to store the servo position

void setup() {
  car.beginServo(pulsePin); // attaches the servo to the car object
}

void loop() {
  for (angle = -90; angle < 90; angle += 1) { // goes from -90 degrees to 89 degrees
                                              // in steps of 1 degree
    car.servo.setDirectionAngle(angle);       // tell servo to go to position in variable 'pos'
    delay(15);                                // waits 15 ms for the servo to reach the position
  }
  for (angle = 90; angle > -90; angle -= 1) { // goes from 90 degrees to -89 degrees
    car.servo.setDirectionAngle(angle);       // tell servo to go to position in variable 'pos'
    delay(15);                                // waits 15 ms for the servo to reach the position
  }
}
