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

  enum Key {
    KEY_UP    = 0x46,
    KEY_DOWN  = 0x15,
    KEY_LEFT  = 0x44,
    KEY_RIGHT = 0x43,
    KEY_OK    = 0x40,
    KEY_0     = 0x52,
    KEY_1     = 0x16,
    KEY_2     = 0x19,
    KEY_3     = 0x0D,
    KEY_4     = 0x0C,
    KEY_5     = 0x18,
    KEY_6     = 0x5E,
    KEY_7     = 0x08,
    KEY_8     = 0x1C,
    KEY_9     = 0x5A,
    KEY_STAR  = 0x42,
    KEY_HASH  = 0x4A
  };

  /*!
   * @brief Fetch a key from the remote buffer
   *
   * @return the last key pressed
   */
  enum Key getKey(void);

private:

};

} // /namespace

#endif
