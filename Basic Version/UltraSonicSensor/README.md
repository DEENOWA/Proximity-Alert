# Basic Proximity Alert

## Project Overview
This project implements a simple proximity alert system using an ultrasonic sensor to measure distance and trigger a red LED when an object is within 20 cm. The system outputs distance measurements to the Serial Monitor for monitoring.

## Components and Features
- **Components**:
  - HC-SR04 Ultrasonic Sensor
  - Red LED
  - Arduino Board (e.g., Uno)
  - Resistor (220–330 ohms for LED)
- **Features**:
  - Measures distance using an ultrasonic sensor.
  - Activates a red LED when an object is within 20 cm.
  - Displays duration and distance in the Serial Monitor.

## Hardware Requirements
- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- Red LED
- 220–330 ohm resistor
- Jumper wires
- Breadboard (optional)

## Setup Instructions
1. **Wiring**:
   - Connect HC-SR04:
     - VCC to Arduino 5V
     - GND to Arduino GND
     - Trig to Pin 2
     - Echo to Pin 4
   - Connect Red LED:
     - Anode (longer leg) to Pin 3 via a 220–330 ohm resistor
     - Cathode (shorter leg) to Arduino GND
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Copy the `proximity_alert.ino` code into the Arduino IDE.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
2. The system will:
   - Measure the distance to an object every second.
   - Print duration (in microseconds) and distance (in cm) to the Serial Monitor.
   - Turn on the red LED if the distance is ≤ 20 cm; otherwise, turn it off.
3. Place objects in front of the sensor to test the alert system.
