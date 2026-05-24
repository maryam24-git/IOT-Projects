# Multi-Sensor Data Acquisition Node

This project demonstrates the architecture of an IoT sensor node using an Arduino Uno. The project focuses on acquiring, processing, and displaying environmental data from various sensors.

## Project Overview
The objective of this project is to interface multiple sensors with a microcontroller, process the acquired data, and display it via the Serial Monitor.

## Components Used
- **Arduino Uno** (Microcontroller)
- **TMP36 Temperature Sensors** (Used as an alternative for LM35 temperature sensing)
- **Photoresistor (LDR)** (For light intensity measurement)
- **Ultrasonic Sensor (HC-SR04)** (For distance measurement)
- **Potentiometer** (Used as an emulator for Humidity sensing)
- **10kΩ Resistor** (For LDR voltage divider)

## Simulation & Component Alternatives
Due to component library limitations in the **Tinkercad** simulation environment, the following alternatives were utilized:

1.  **LM35 Alternative:** Used **TMP36**, which operates on the same analog voltage-to-temperature principle.
2.   A **Potentiometer** was employed to simulate humidity readings.
    * **Why a Potentiometer?** Since a dedicated humidity sensor is not present in the Tinkercad library, the potentiometer acts as an emulator. By mapping the analog input range (0–1023) to a percentage range (0–100%), it simulates humidity fluctuations effectively, allowing for successful data processing logic demonstration.

## Circuit Connections
- **Temp Sensor 1:** Connected to **A0**
- **LDR:** Connected to **A1** (with 10kΩ pull-down resistor)
- **Humidity (Potentiometer):** Connected to **A3**
- **Ultrasonic Sensor:** Trig to **D3**, Echo to **D4**

---
*Created for Embedded Systems Lab - Sensor Node Architecture*
