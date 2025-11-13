# Traffic Light System — Arduino Project

## Overview

This project simulates a simple traffic light controller using three LEDs (Red, Yellow, Green). It demonstrates sequential control of outputs and basic timing with the Arduino.

## Components Used

* Arduino Uno (or compatible)
* 1 × Red LED
* 1 × Yellow LED
* 1 × Green LED
* 3 × 220Ω resistors
* Breadboard
* Jumper wires

## Circuit Diagram / Wiring

**Connections:**

* Pin 8 → 220Ω resistor → Red LED (long leg)
* Pin 9 → 220Ω resistor → Yellow LED (long leg)
* Pin 10 → 220Ω resistor → Green LED (long leg)
* All LED short legs → GND

(Place your circuit image or screenshot from Fritzing / Tinkercad in `circuit_diagram/`.)

## Code

The Arduino sketch is available at `code/traffic_light.ino`.

## How It Works

1. Each LED is connected to a digital output pin configured as OUTPUT.
2. The loop cycles through green → yellow → red with delays representing traffic timings.
3. Replace `delay()` values to change timings or extend logic to multiple intersections.

## How to Run

1. Open `traffic_light.ino` in the Arduino IDE.
2. Select the correct board and serial port.
3. Upload the sketch to the Arduino.
4. Observe the LED sequence: Green (5s) → Yellow (2s) → Red (5s).

## Variations and Extensions

* Add pedestrian button input to change state.
* Use `millis()` instead of `delay()` for non-blocking control.
* Control via Bluetooth or use multiple lights for an intersection.

## License

This project is open-source. Use and modify freely (add a LICENSE file such as MIT if you want explicit terms).

---
