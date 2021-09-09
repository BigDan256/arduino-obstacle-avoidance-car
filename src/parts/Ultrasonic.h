/*!
 * @file parts/Ultrasonic.h
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

#ifndef ULTRASONIC_H
#define ULTRASONIC_H

namespace ObstacleAvoidanceCarParts {

class Ultrasonic {

public:

  Ultrasonic() {};

  /*!
   * @brief Initialize the Infra-red remote receiver
   *
   * @param triggerPin  Connected analog pin
   * @param echoPin     Connected analog pin
   * 
   * @return true if successful
   */
  bool begin(int triggerPin, int echoPin);

  /*!
   * @brief Read the ultrasonic distance in us
   */
  unsigned long readDistanceRaw(void);

  /*!
   * @brief Read the ultrasonic distance in cm
   */
  float readDistanceCM(void);

  /*!
   * @brief Read the ultrasonic distance in mm
   */
  float readDistanceMM(void);

private:

  int triggerPin;
  int echoPin;

};

} // /namespace

#endif
