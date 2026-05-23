# Potentiometer as Variable Input

This experiment demonstrates how to use a **potentiometer** as a **voltage divider** to provide a variable analog input to the Arduino Uno.

## Circuit Connections

| Potentiometer Pin | Arduino Pin |
| :--- | :--- |
| **Terminal 1** | 5V |
| **Wiper (Middle Pin)** | A0 |
| **Terminal 2** | GND |

## How it Works

The potentiometer acts as a variable resistor. By rotating the knob, the internal resistance between the wiper and the outer terminals changes. This creates a voltage divider circuit:

* The voltage at the middle pin (wiper) varies between **0V and 5V**.
* The Arduino’s Analog-to-Digital Converter (ADC) reads this voltage and converts it into a digital value ranging from **0 to 1023**.

