# Push Button Interface

This project demonstrates how to interface a push button with an Arduino Uno using a pull-down resistor to read digital input signals accurately.

## Circuit Configuration
* **Components:** 1x Push Button, 1x 10kΩ Resistor, Arduino Uno.
* **Logic:** The 10kΩ pull-down resistor ensures the input pin remains at a stable `LOW` (0) state when the button is not pressed, preventing "floating" signal issues.

### Wiring Details
| Component | Arduino Pin / Rail |
| :--- | :--- |
| Push Button Terminal 1 | +5V Rail |
| Push Button Terminal 2 | Pin 2 & Resistor Leg |
| Resistor (10kΩ) | GND Rail |

## Results
The circuit's performance was verified using the Arduino Serial Monitor with the following outcomes:

Button Released: Serial Monitor displays 0.

Button Pressed: Serial Monitor displays 1.
