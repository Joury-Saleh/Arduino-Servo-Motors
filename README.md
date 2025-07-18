# 4-Servo Motor Sweep and Hold Project – Arduino

This project demonstrates how to control four servo motors using an Arduino board. The servos perform a synchronized sweeping motion for exactly 2 seconds, then automatically hold their position at 90 degrees.

## Project Components

- 1 × Arduino Uno
- 4 × Servo motors 
- Breadboard + Jumper Wires
- USB cable for programming


## Execution Logic
```
1. Attach 4 servos to PWM pins (3, 5, 6, 9)
2. Start timing using millis()
3. While within 2 seconds:
   → Sweep all servos from 0° to 180° and back
   → Use millis() to exit early if needed
4. After 2 seconds:
   → All servos are set and held at 90°
```
##  Circuit Design

The following diagram shows how 4 servo motors are connected to the Arduino.

![Circuit Diagram](https://github.com/Joury-Saleh/Arduino-Servo-Motors/blob/main/Sync%20Servo%20Motors.png)

- Servo 1 → D3
- Servo 2 → D5
- Servo 3 → D6
- Servo 4 → D9
- All red wires to 5V
- All black/brown wires to GND

You can view and simulate the project here:  
[Open in Tinkercad](https://www.tinkercad.com/things/7f0ep6GCocc-sync-servo-motors?sharecode=wWZR7hOuchhKzRQj9VUy6ujsYl_sSPcQoPwDH1XkEVA)

