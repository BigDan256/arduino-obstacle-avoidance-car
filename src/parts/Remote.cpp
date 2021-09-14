/*!
 * @file parts/Remote.cpp
 *
 * @mainpage Obstacle Avoidance Car Library
 *
 * @section author Author
 *
 * Written by Daniel Gault for my son.
 *
 * @section license License
 *
 * proprietary
 */

#include "Remote.h"

#include <IRremote.h>

namespace ObstacleAvoidanceCarParts {

bool Remote::begin(int signalPin) {
  IrReceiver.begin(signalPin, ENABLE_LED_FEEDBACK, USE_DEFAULT_FEEDBACK_LED_PIN);
}

int Remote::getKey(void) {
    if (IrReceiver.decode()) {
        IrReceiver.resume();
        return IrReceiver.decodedIRData.command;
    }
    return 0;
}

} // /namespace
