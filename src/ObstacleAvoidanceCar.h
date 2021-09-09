/*!
 * @file ObstacleAvoidanceCar.h
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

#ifndef OBSTACLEAVOIDANCECAR_H
#define OBSTACLEAVOIDANCECAR_H

#include "parts/Remote.h"
#include "parts/Servo.h"
#include "parts/Ultrasonic.h"
#include "parts/Wheel.h"

/*!
 * @brief Main ObstacleAvoidanceCar class
 */
class ObstacleAvoidanceCar {

public:

  ObstacleAvoidanceCar() {};

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool begin(void);

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginRemote(int signalPin);

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginServo(int pulsePin);

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginUltrasonic(int triggerPin, int echoPin);

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginWheels(int enAPin, int in1Pin, int in2Pin, int in3Pin, int in4Pin, int enBPin);

  /*!
   * @brief Start the motors moving forwards
   */
  void moveForwards(void);

  /*!
   * @brief Start the motors moving backwards
   */
  void moveBackwards(void);

  /*!
   * @brief Start the motors turning left on the spot
   */
  void turnLeft(void);

  /*!
   * @brief Start the motors turning right on the spot
   */
  void turnRight(void);

  /*!
   * @brief Stop the motors moving
   */
  void stopMoving(void);

  ObstacleAvoidanceCarParts::Remote remote;

  ObstacleAvoidanceCarParts::Servo servo;

  ObstacleAvoidanceCarParts::Ultrasonic ultrasonic;

  ObstacleAvoidanceCarParts::Wheel leftWheel, rightWheel;

private:

};

#endif
