# Sensor-Based Accident Prevention System for Hilly Areas (Final Year Project 4-1)
A smart safety system designed to prevent head-on collisions at blind turns and sharp curves in mountainous regions.

## Project Overview
Hilly terrains often feature dangerous blind spots where drivers cannot see oncoming vehicles. This project uses two sets of ultrasonic sensors placed at opposite ends of a curve to detect incoming vehicles. If a vehicle is detected on one side, an immediate warning (LED and Buzzer) is triggered on the opposite side to alert the other driver.

## Key Features
- **Dual-Sensor Monitoring:** Monitors traffic from both directions simultaneously.
- **Cross-Alert System:** Automatically alerts Side B if a vehicle enters Side A.
- **Visual & Audible Warnings:** Uses high-brightness LEDs and high-decibel Buzzers.
- **Real-Time Detection:** Rapid response time for high-speed mountain traffic.

## Hardware Configuration
- **Microcontroller:** Arduino UNO
- **Sensors:** 2x HC-SR04 Ultrasonic Sensors
- **Output:** 2x LEDs, 2x Buzzers
- **Power:** 9V DC Input

## Software
- **Language:** Embedded C
- **File:** `Accident_Prevention.c`

## How to Run
1. Connect the hardware components as per the code pins.
2. Open `Accident_Prevention.c` in the Arduino IDE or any C editor.
3. Upload the code to your Arduino UNO.

## Author
Ruksana Begum Shaik
