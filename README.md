# 🔧 Temperature-Controlled Motor & Servo Positioning via Potentiometer | ATmega32 Project

A practical embedded systems project that combines *automatic fan/motor activation based on temperature, and **servo motor control using a potentiometer*, all using an ATmega32 microcontroller.

---

## 🎯 Features

- Real-time temperature monitoring using an analog sensor (LM35).
- Turns *ON a motor* (fan or DC motor) when temperature ≥ 60°C.
- Uses RGB LEDs to indicate temperature level:
  - 🔴 Red for high temperature
  - 🟡 Yellow for medium
  - 🟢 Green for low
- Displays temperature on a 16x2 LCD.
- Controls *servo motor angle* using analog input from a potentiometer.
- PWM generated via *Timer1 in Fast PWM mode*.
- Developed fully in AVR C using custom drivers.

---

## 💻 Files Included

- main.c  –  Main program logic
- LCD_interface.h/.c  –  LCD control functions
- ADC_Interface.h/.c  –  ADC functions to read sensor and pot
- TIMER1_int.h/.c  –  Timer1 PWM for servo
- DIO_interface.h/.c  –  Digital I/O (LEDs, motor)
- BIT_MATH.h / STD_TYPES.h  –  Utilities and types
- *.hex  –  Compiled files (if available)
- *.DSN / Proteus video  –  Simulation files / video demo

---

## 🛠 Requirements

- ATmega32 microcontroller
- LM35 temperature sensor
- Servo motor
- DC motor or fan
- Potentiometer
- LCD 16x2 display
- 3 LEDs (Red, Yellow, Green)
- Breadboard, jumper wires, resistors
- Proteus 8/9 (for simulation)
- USBasp or any programmer (for hardware testing)

---

## 🚀 How It Works

## 1) 🌡 Temperature Detection

- ADC reads analog voltage from LM35 via Channel 0.
- Temperature is calculated and displayed on LCD.
- If temperature ≥ 60°C:
    → Turn ON Motor
    → Turn ON Red LED
- Else if 40°C ≤ temp < 60°C:
    → Turn ON Yellow LED
- Else:
    → Turn ON Green LED

## 2) 🎚 Servo Control

- ADC reads voltage from potentiometer via Channel 1.
- Value is converted to PWM duty cycle.
- Servo angle adjusts in real-time accordingly.

---

## 🎥 Simulation video available showing:

## 1) Motor activating based on temperature
  

https://github.com/user-attachments/assets/d43c41fe-5daf-4d24-b7d3-75c8ce3d5c0e


## 2) Real-time servo movement with potentiometer



https://github.com/user-attachments/assets/f6dd7f25-18f2-4510-98b1-5712f1c04ccd



---

## 🧠 Concepts Applied

- ADC (Analog-to-Digital Conversion)
- PWM generation using Timer1
- Sensor interfacing (LM35)
- Real-time output control (motor + servo)
- LCD interfacing
  
---

## 👩‍💻 Author

Fatma Elsaber
Embedded Systems Learner & Project Builder 👩‍🔧
Turning sensor data into smart hardware actions

---

## 📢 Note:

- This project was built as part of my hands-on training in embedded systems.
Feel free to explore or modify it for learning!

