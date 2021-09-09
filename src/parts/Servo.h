/*!
 * @file parts/Servo.h
 *
 * This is a summarized library for the Obstacle Avoidance Car Kit
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
  bool begin(int pulsePin);

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

  int pulsePin;
  ::Servo servo;

};

} // /namespace

#endif
