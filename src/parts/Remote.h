/*!
 * @file parts/Remote.h
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

#ifndef REMOTE_H
#define REMOTE_H

namespace ObstacleAvoidanceCarParts {

class Remote {

public:

  Remote() {};

  /*!
   * @brief Initialize the Infra-red remote receiver
   *
   * @param signalPin The Arduino pin number, where a demodulating IR receiver
   *                  is connected.
   * 
   * @return true if successful
   */
  bool begin(int signalPin);

  /*!
   * @brief Fetch a key from the remote buffer
   *
   * @return the last key pressed
   */
  int getKey(void);

private:

  int signalPin;

};

} // /namespace

#endif
