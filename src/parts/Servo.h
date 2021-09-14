/*!
 * @file parts/Servo.h
 *
 * This is a summarized library for the Obstacle Avoidance Car Kit
 * 
 * This kit includes:
 *  - Arduino UNO R3 Clone
 *  - L298N Motor Driver Module
 *  - HC-SR04 Ultrasonic Sensor Module
 *  - SG90 Servo
 *  - IR Receiver Module
 *  - Sensor Shield V5.0
 *  - Regulated battery pack
 */

#ifndef SERVO_H
#define SERVO_H

#include <Servo.h>

namespace ObstacleAvoidanceCarParts {

class Servo {

public:

  Servo() {};

  /*!
   * @brief Initialize the Servo motor
   *
   * @param pulsePin Connected digital pin
   * 
   * @return true if successful
   */
  bool begin(uint8_t pulsePin);

  /*!
   * @brief Turn the servo to look in a specified direction
   *
   * @param value The direction in degrees between 0 and 180
   */
  void setDirectionRaw(int value);

  /*!
   * @brief Turn the servo to look in a specified direction
   *
   * @param angle The direction in degrees between -90 and 90
   */
  void setDirectionAngle(int angle);

private:

  uint8_t pulsePin;
  ::Servo servo;

};

} // /namespace

#endif
