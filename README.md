# Proximity Alert System

## Project Overview
The Proximity Alert System is an Arduino-based project that uses an ultrasonic sensor to detect objects and provide alerts based on distance. This repository contains multiple versions of the system, progressing from a basic LED-based alert to an advanced system with servo scanning, multi-colored LEDs, a buzzer, and an LCD display. Each version is stored in its respective subfolder with detailed documentation.

## Repository Structure
- **basic_version/**: Simple proximity alert with a single LED indicator.
- **version_0.1/**: Adds multi-colored LEDs and a buzzer for tiered alerts.
- **version_0.2/**: Incorporates a servo motor for sensor scanning.
- **improved_version/**: Includes an LCD display and enhanced buzzer feedback.
- **docs/**: (Optional) For schematics or additional documentation.
- **LICENSE**: MIT License for the project.

## Getting Started
1. Clone or download this repository.
2. Navigate to the desired version’s subfolder.
3. Follow the `README.md` in each subfolder for specific setup and usage instructions.

## General Hardware Requirements
- Arduino Uno (or compatible board)
- HC-SR04 Ultrasonic Sensor
- LEDs, Buzzer, Servo Motor, and I2C LCD (depending on the version)
- Jumper wires, resistors, and breadboard

## General Setup
- Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
- Install required libraries (e.g., `Servo`, `LiquidCrystal_I2C`) as specified in each version’s README.
- Follow wiring and upload instructions in the respective README files.

## Usage
- Each version measures distance using an ultrasonic sensor and provides visual/auditory feedback.
- Refer to the specific README in each subfolder for detailed usage instructions.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing
Feel free to fork this repository, make improvements, and submit pull requests. Suggestions for new features or bug fixes are welcome!
