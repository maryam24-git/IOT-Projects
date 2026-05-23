# DC Motor Speed Control (PWM)

This task demonstrates how to control the speed of a DC motor using an **L293D Motor Driver** and **Pulse Width Modulation (PWM)** from an Arduino.

## Circuit Connections

| Component | Arduino Pin / Connection |
| :--- | :--- |
| **Motor Driver Input (PWM)** | D10 (PWM Pin) |
| **Motor Driver Output** | Connected to DC Motor |
| **External Power** | 9V Battery to Motor Driver |
| **Common Ground** | Arduino GND connected to Driver GND |



## How it Works

Since an Arduino pin cannot provide enough current to drive a motor directly, we use an **L293D Motor Driver**. The PWM signal generated on pin **D10** controls the "average voltage" sent to the motor, which directly regulates its RPM (Speed).

* **PWM 0:** Motor is OFF.
* **PWM 127:** Motor runs at approximately 50% speed.
* **PWM 255:** Motor runs at 100% speed.

