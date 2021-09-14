/*!
 * @file parts/Ultrasonic.h
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
  bool begin(uint8_t triggerPin, uint8_t echoPin);

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

  uint8_t triggerPin;
  uint8_t echoPin;

};

} // /namespace

#endif
