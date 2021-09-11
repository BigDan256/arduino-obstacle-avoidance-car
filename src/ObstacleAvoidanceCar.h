/*!
 * @file ObstacleAvoidanceCar.h
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



  ObstacleAvoidanceCarParts::Remote remote;

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginRemote(int signalPin);

  /*!
   * @brief Fetch the most recent remote key
   */
  int getRemoteKey(void);



  ObstacleAvoidanceCarParts::Servo servo;

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginServo(int pulsePin);

  /*!
   * @brief Look to the left
   */
  void lookLeft(void);

  /*!
   * @brief Look to the right
   */
  void lookRight(void);

  /*!
   * @brief Look straight ahead
   */
  void lookStraight(void);



  ObstacleAvoidanceCarParts::Ultrasonic ultrasonic;

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginUltrasonic(int triggerPin, int echoPin);

  /*!
   * @brief Measure the distance
   */
  float getDistanceCM(void);



  ObstacleAvoidanceCarParts::Wheel leftWheel, rightWheel;

  /*!
   * @brief TODO
   *
   * @return true if successful
   */
  bool beginWheels(int enAPin, int in1Pin, int in2Pin, int in3Pin, int in4Pin, int enBPin);

  /*!
   * @brief Start the motors moving
   */
  void move(void);
  void move(int time);
  void move(int time, int speed);

  /*!
   * @brief Start the motors moving forwards
   */
  void moveForwards(void);
  void moveForwards(int time);
  void moveForwards(int time, int speed);

  /*!
   * @brief Start the motors moving backwards
   */
  void moveBackwards(void);
  void moveBackwards(int time);
  void moveBackwards(int time, int speed);

  /*!
   * @brief Start the motors turning left on the spot
   */
  void turnLeft(void);
  void turnLeft(int time);
  void turnLeft(int time, int speed);

  /*!
   * @brief Start the motors turning right on the spot
   */
  void turnRight(void);
  void turnRight(int time);
  void turnRight(int time, int speed);

  void setSpeed(int speed);
  void setTimeStep(int time);



private:

  int timeStep = 500;

  int wheelSpeed = 127;

};

#endif
