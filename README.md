
# Arduino Obstacle Avoidance Car

A small library targetting the cheap obstacle avoidance car kit. I wrote this to help my son get into programming with it.


## ObstacleAvoidanceCar API Reference

#### bool begin()

Returns true on success.

#### bool beginRemote(int signalPin)

| Parameter   | Type  | Description                |
| :---------- | :---- | :----------------------------------------------- |
| `signalPin` | `int` | **Required**. The digital pin that the IR Sensor |
|             |       | module signal pin is connected to.               |

Returns true on success.

#### int getRemoteKey()

Returns the next pressed remote key 

#### bool beginServo(int pulsePin)

| Parameter  | Type  | Description                |
| :--------- | :---- | :------------------------------------------------- |
| `pulsePin` | `int` | **Required**. The digital pin that the Servo pulse |
|            |       | module pulse pin is connected to.                  |

Returns true on success.

#### lookLeft()

#### lookRight()

#### lookStraight()

#### bool beginUltrasonic(int triggerPin, int echoPin)

| Parameter    | Type  | Description                |
| :----------- | :---- | :------------------------------------------------ |
| `triggerPin` | `int` | **Required**. The digital pin that the Ultrasonic |
|              |       | module trigger pin is connected to.               |
| `echoPin`    | `int` | **Required**. The digital pin that the Ultrasonic |
|              |       | module echo pin is connected to.                  |

Returns true on success.

#### float getDistanceCM()

#### bool beginWheels(int enAPin, int in1Pin, int in2Pin, int in3Pin, int in4Pin, int enBPin)

| Parameter | Type  | Description                |
| :-------- | :---- | :--------------------------------------------------- |
| `enAPin`  | `int` | **Required**. The digital pin that the Motor Control |
|           |       | module enA pin is connected to.                      |
| `in1Pin`  | `int` | **Required**. The digital pin that the Motor Control |
|           |       | module in1 pin is connected to.                      |
| `in2Pin`  | `int` | **Required**. The digital pin that the Motor Control |
|           |       | module in2 pin is connected to.                      |
| `in3Pin`  | `int` | **Required**. The digital pin that the Motor Control |
|           |       | module in3 pin is connected to.                      |
| `in4Pin`  | `int` | **Required**. The digital pin that the Motor Control |
|           |       | module in4 pin is connected to.                      |
| `enBPin`  | `int` | **Required**. The digital pin that the Motor Control |
|           |       | module enB pin is connected to.                      |

Returns true on success.

#### move(*[int time[, int speed]]*)

#### moveForwards(*[int time[, int speed]]*)

Start the wheels moving forwards.

#### moveBackwards(*[int time[, int speed]]*)

Start the motors moving backwards.

#### turnLeft(*[int time[, int speed]]*)

Start the motors turning left on the spot.

#### turnRight(*[int time[, int speed]]*)

Start the motors turning right on the spot

#### setSpeed(int speed)

#### setTimeStep(int time)

Stop the motors moving

#### Other properties of ObstacleAvoidanceCar

| Property     | Type         | Description             |
| :----------- | :----------- | :---------------------- |
| `remote`     | `Remote`     | Infrared Remote Control |
| `servo`      | `Servo`      | Servo motor             |
| `ultrasonic` | `Ultrasonic` | Ultrasonic sensor       |
| `leftWheel`  | `Wheel`      | Left Wheel              |
| `rightWheel` | `Wheel`      | Right Wheel             |

## Authors

- [@bigdan256](https://www.github.com/bigdan256)

  
## Installation

Copy the project to your "%USERPROFILE%\Documents\Arduino\Libraries" folder.

Alternative, install through library manager.

Examples will then appear under File->Examples->ObstacleAvoidanceCar menu in your Arduino IDE.

You can also add references to your sketch via Sketch->Include Library.
