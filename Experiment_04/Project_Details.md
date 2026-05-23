# LED Dimming (PWM)

This task demonstrates how to control the brightness of an LED using **Pulse Width Modulation (PWM)** by varying the duty cycle through an Arduino pin.

## Circuit Connections

| Component | Arduino Pin |
| :--- | :--- |
| **LED Anode** | D9 (PWM Pin) |
| **LED Cathode** | GND |
| **Resistor** | Connected in series with LED Anode |



## How it Works

The Arduino uses PWM to simulate analog output. By changing the duty cycle from **0 to 255** using the `analogWrite()` function, we can control the amount of voltage reaching the LED.

* **Duty Cycle 0:** LED is OFF (0V).
* **Duty Cycle 127:** LED is at 50% brightness (~2.5V).
* **Duty Cycle 255:** LED is at full brightness (5V).
