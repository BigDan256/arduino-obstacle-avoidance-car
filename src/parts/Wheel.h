/*!
 * @file parts/Wheel.h
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

  void setForwards(void);

  void setBackwards(void);

  void setSpeed(void);

private:

  int enAPin, in1Pin, in2Pin;

};

} // /namespace

#endif
