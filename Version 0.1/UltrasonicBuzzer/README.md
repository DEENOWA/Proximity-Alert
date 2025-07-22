# Proximity Alert Version 0.1

## Project Overview
This version enhances the basic proximity alert system by adding multi-colored LEDs (red, yellow, green) and a buzzer to indicate different distance ranges. It uses an ultrasonic sensor to measure distance and provides visual and auditory feedback.

## Components and Features
- **Components**:
  - HC-SR04 Ultrasonic Sensor
  - Red, Yellow, Green LEDs
  - Buzzer
  - Arduino Board (e.g., Uno)
  - Resistors (220–330 ohms for each LED)
- **Features**:
  - Measures distance using an ultrasonic sensor.
  - Visual feedback:
    - Red LED for distance ≤ 20 cm.
    - Yellow LED for 20 cm < distance ≤ 50 cm.
    - Green LED for distance > 50 cm.
  - Auditory feedback: Buzzer activates for distance ≤ 20 cm.
  - Displays duration and distance in the Serial Monitor.

## Hardware Requirements
- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- Red, Yellow, Green LEDs
- Buzzer (active or passive)
- 220–330 ohm resistors (3)
- Jumper wires
- Breadboard (optional)

## Setup Instructions
1. **Wiring**:
   - Connect HC-SR04:
     - VCC to Arduino 5V
     - GND to Arduino GND
     - Trig to Pin 5
     - Echo to Pin 6
   - Connect LEDs:
     - Red LED anode to Pin 9 via resistor, cathode to GND
     - Yellow LED anode to Pin 10 via resistor, cathode to GND
     - Green LED anode to Pin 11 via resistor, cathode to GND
   - Connect Buzzer:
     - Positive to Pin 3
     - Negative to GND
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Copy the `proximity_alert_v0_1.ino` code into the Arduino IDE.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
2. The system will:
   - Measure distance every second.
   - Print duration (in microseconds) and distance (in cm) to the Serial Monitor.
   - Activate LEDs based on distance:
     - Red LED and buzzer for ≤ 20 cm.
     - Yellow LED for 20–50 cm.
     - Green LED for > 50 cm.
3. Test by moving objects in front of the sensor.
