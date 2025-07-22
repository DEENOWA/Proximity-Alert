# Improved Proximity Alert

## Project Overview
This advanced version of the proximity alert system integrates an LCD display, a servo motor, and enhanced buzzer feedback. The ultrasonic sensor, mounted on a servo, scans 0–180 degrees, displaying distance-based alerts on the LCD and providing visual (LEDs) and auditory (buzzer) feedback.

## Components and Features
- **Components**:
  - HC-SR04 Ultrasonic Sensor
  - Red, Yellow, Green LEDs
  - Buzzer
  - Servo Motor (e.g., SG90)
  - I2C LCD Display (16x2, address 0x27)
  - Arduino Board (e.g., Uno)
  - Resistors (220–330 ohms for each LED)
- **Features**:
  - Measures distance using an ultrasonic sensor.
  - Servo motor sweeps sensor 0–180 degrees for scanning.
  - Visual feedback:
    - Red LED for distance ≤ 20 cm.
    - Yellow LED for 20 cm < distance ≤ 50 cm.
    - Green LED for distance > 50 cm.
  - LCD displays:
    - "DANGER!!!!" for ≤ 20 cm.
    - "Warning! Too Close!" for 20–50 cm.
    - "Safe" for > 50 cm.
  - Auditory feedback:
    - Continuous 2000 Hz tone for ≤ 20 cm.
    - Pulsed 5000 Hz tone for 20–50 cm.
  - Displays duration and distance in the Serial Monitor.

## Improvements Over Previous Versions
- Added I2C LCD display for real-time text alerts.
- Enhanced buzzer feedback with different tones:
  - Continuous tone (2000 Hz) for critical proximity (≤ 20 cm).
  - Pulsed tone (5000 Hz, 200 ms duration) for warning range (20–50 cm).
- Improved distance calculation precision (0.0343 cm/µs constant).
- Optimized pin assignments for better compatibility.

## Hardware Requirements
- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- Red, Yellow, Green LEDs
- Buzzer (active or passive)
- Servo Motor (e.g., SG90)
- I2C LCD Display (16x2, address 0x27)
- 220–330 ohm resistors (3)
- Jumper wires
- Breadboard (optional)

## Setup Instructions
1. **Wiring**:
   - Connect HC-SR04:
     - VCC to Arduino 5V
     - GND to Arduino GND
     - Trig to Pin 3
     - Echo to Pin 4
   - Connect LEDs:
     - Red LED anode to Pin 8 via resistor, cathode to GND
     - Yellow LED anode to Pin 7 via resistor, cathode to GND
     - Green LED anode to Pin 6 via resistor, cathode to GND
   - Connect Buzzer:
     - Positive to Pin 5
     - Negative to GND
   - Connect Servo:
     - Signal to Pin 2
     - VCC to Arduino 5V
     - GND to Arduino GND
   - Connect I2C LCD:
     - SDA to Arduino SDA Pin/A4
     - SCL to Arduino SCL Pin/A5
     - VCC to Arduino 5V
     - GND to Arduino GND
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Install the `Servo` and `LiquidCrystal_I2C` libraries via Arduino IDE: Sketch > Include Library > Manage Libraries > Search for "Servo" and "LiquidCrystal I2C".
   - Copy the `proximity_alert_improved.ino` code into the Arduino IDE.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
2. The system will:
   - Sweep the servo from 0 to 180 degrees and back, measuring distance.
   - Print duration (in microseconds) and distance (in cm) to the Serial Monitor.
   - Display alerts on the LCD:
     - "DANGER!!!!" for ≤ 20 cm.
     - "Warning! Too Close!" for 20–50 cm.
     - "Safe" for > 50 cm.
   - Activate LEDs and buzzer:
     - Red LED and continuous tone for ≤ 20 cm.
     - Yellow LED and pulsed tone for 20–50 cm.
     - Green LED for > 50 cm.
3. Test by placing objects in the sensor’s scanning range.
