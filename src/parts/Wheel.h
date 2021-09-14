/*!
 * @file parts/Wheel.h
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

#ifndef WHEEL_H
#define WHEEL_H

namespace ObstacleAvoidanceCarParts {

class Wheel {

public:

  Wheel() {};

  /*!
   * @brief Initialize the motor controller
   *
   * @param enAPin
   * @param in1Pin
   * @param in2Pin
   * 
   * @return true if successful
   */
  bool begin(int enAPin, int in1Pin, int in2Pin);

  /*!
   * @brief Toggle the direction of the motor
   */
  void setForwards(void);

  /*!
   * @brief Toggle the direction of the motor
   */
  void setBackwards(void);

  /*!
   * @brief Set the duty cycle of the motor
   */
  void setSpeed(int speed);

private:

  uint8_t enAPin, in1Pin, in2Pin;

};

} // /namespace

#endif
