Arduino Temperature Sensing Project
This project demonstrates how to interface a TMP36 temperature sensor with an Arduino Uno to measure and display ambient temperature in real-time.

Circuit Connections
TMP36 Pin               Arduino Pin
Left Pin (Power)            5V 
Middle Pin (Vout)           A0 
Right Pin (GND)             GND

Mathematical Approach
The temperature is calculated using the following formulas:

Voltage Conversion: voltage = (analogRead(A0) * 5.0) / 1024.0

Temperature Formula: temperatureC = (voltage - 0.5) * 100
