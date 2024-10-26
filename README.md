# Health Monitoring and ECG Visualization System

This project combines Arduino and Python to monitor multiple health parameters (heart rate, SpO₂, temperature, humidity, and jaundice detection through an RGB color sensor) and visualize ECG signals. The system also acts as a **simple incubator program** by monitoring and regulating temperature and humidity levels, which can be critical for neonatal health monitoring. The Arduino gathers data from various sensors and sends it over a serial connection, while the Python PyQt-based GUI displays an animated ECG signal based on the data.

## Table of Contents

- [Health Monitoring and ECG Visualization System](#health-monitoring-and-ecg-visualization-system)
  - [Table of Contents](#table-of-contents)
  - [Project Overview](#project-overview)
  - [Features](#features)
  - [Sensors and Pin Connections](#sensors-and-pin-connections)
  - [Getting Started](#getting-started)
  - [Arduino Code](#arduino-code)
  - [Python GUI](#python-gui)
  - [How to Run](#how-to-run)
  - [Notes](#notes)

## Project Overview

This system is designed to monitor health parameters that are crucial in environments like neonatal incubators. It consists of:
- **Arduino** to read data from sensors (heart rate, SpO₂, temperature, humidity, and color) and send it to the computer.
- **Python with PyQt** to visualize ECG signals in real time using the PyQtGraph library.

## Features

- **Heart Rate (BPM) and SpO₂ Monitoring:** Using the MAX30100 sensor.
- **Temperature and Humidity Monitoring:** Using the DHT11 sensor.
- **Jaundice Detection:** Through RGB color values obtained from the color sensor.
- **Temperature Control (Incubator Functionality):** Using a relay for basic temperature regulation.
- **Real-time ECG Signal Visualization:** Animated ECG plot based on BPM data.

## Mobile Application 

![Mobile Application](Mobile%20Application.png)


## Sensors and Pin Connections

1. **MAX30100 Pulse Oximeter (Heart Rate and SpO₂)**
   - Connects via I2C to Arduino's `SDA` and `SCL` pins.
   
2. **DHT11 Temperature and Humidity Sensor**
   - `DHTPIN` → Pin 4 on Arduino.

3. **TCS3200 RGB Color Sensor (Jaundice Detection)**
   - `S0` → Pin 9
   - `S1` → Pin 10
   - `S2` → Pin 11
   - `S3` → Pin 12
   - `OUT` → Pin 13

4. **Relay Control (Temperature Regulation)**
   - `RELAYPIN` → Pin 7

5. **Buzzer (Optional)**
   - `BUZZERPIN` → Pin 8

## Getting Started

1. **Hardware Setup**
   - Connect all sensors to the Arduino as specified above.
   - Ensure that the Arduino is powered and connected to the computer via USB.

2. **Software Setup**
   - Install the Arduino IDE and required libraries (DHT, MAX30100).
   - Install Python 3, PyQt6, PyQtGraph, and `pyserial` for serial communication.

## Arduino Code

1. **Install Required Libraries**
   - Open the Arduino IDE.
   - Go to **Sketch > Include Library > Manage Libraries...** and install the following:
     - **DHT sensor library** by Adafruit
     - **MAX30100 Pulse Oximeter Library**

2. **Upload the Code**
   - Upload the Arduino code to your Arduino board.
   - This code reads data from all sensors and sends it to the serial port every few seconds.

## Python GUI

1. **Install Python Packages**
   - Run the following command to install required Python packages:
     ```bash
     pip install pyqt6 pyqtgraph pyserial numpy
     ```

2. **Run the Python Script**
   - Run the Python script (`ECGPlotter.py`) to start the ECG visualizer GUI.

## How to Run

1. **Start Arduino Data Collection**
   - Ensure your Arduino is connected and the code is running, streaming data to the serial port.

2. **Run the Python ECG Visualizer**
   - Open a terminal and run:
     ```bash
     python ECGPlotter.py
     ```
   - The GUI will display an animated ECG signal based on the BPM data from the Arduino.

3. **Visualize Data**
   - The GUI will display the heart rate and simulate an ECG signal based on BPM values.
   - Check the Serial Monitor on Arduino IDE or the console output for temperature, humidity, SpO₂, and jaundice detection status.

## Notes

- Ensure that the serial port in `ECGPlotter.py` matches the port your Arduino is connected to (e.g., `COM6` on Windows).
- Make sure to close the serial connection properly before rerunning the script to avoid connection issues.

---

This project provides a foundation for a simple incubator system, monitoring key health parameters and offering basic temperature regulation functionality, making it a valuable tool for health and environment monitoring.
