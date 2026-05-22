# Experiment 01: Light Intensity Monitoring System

## 1. Executive Summary
This project implements a light-sensing module using a Photoresistor (LDR) to monitor ambient light levels. The objective is to establish an interface between a light-sensitive analog component and an Arduino Uno, enabling real-time data acquisition and monitoring of environmental illumination.

## 2. Technical Architecture
The system operates on the principle of the **Voltage Divider Rule (VDR)**. A fixed resistor (10kΩ) is placed in series with the LDR to create a variable voltage output, which is fed into the Arduino's Analog Input (Pin A0). The controller's internal 10-bit **Analog-to-Digital Converter (ADC)** then transforms this voltage into a digital scale of 0 to 1023.

## 3. Hardware Configuration
* **Microcontroller:** Arduino Uno (ATmega328P)
* **Sensor:** Photoresistor (LDR) 
* **Passive Components:** 10kΩ Resistor

## 4. Operational Workflow
1. **Calibration:** The LDR resistance fluctuates inversely with light intensity.
2. **Signal Conditioning:** The voltage divider circuit converts these resistance changes into measurable analog voltage.
3. **Data Processing:** The Arduino polls the A0 pin at a high sampling rate.
4. **Output:** The digitized readings are transmitted via UART protocol and visualized on the Serial Monitor.

## 5. Experimental Observations
* **Dark State:** Sensor output approaches the lower threshold (near 0).
* **Bright State:** Sensor output approaches the upper threshold (near 1023).
* **Sensitivity:** The resolution of the sensor is significantly influenced by the chosen value of the reference resistor in the voltage divider network.

## 6. Implementation Notes
- The firmware is written in C++. 
- The circuit was validated using the Autodesk Tinkercad simulation environment to ensure signal integrity and correct pin configuration before physical prototyping.
