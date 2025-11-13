# LED Blink — Arduino Project

## Overview

This is the simplest Arduino project that demonstrates digital output control by blinking an LED on and off at a fixed interval.

## Components Used

* Arduino Uno
* 1 × LED
* 1 × 220Ω resistor
* Jumper wires
* Breadboard (optional)

## Circuit Diagram

**Connections:**

* Pin 8 → 220Ω resistor → LED positive (long leg)
* LED negative (short leg) → GND

(Add your circuit image in `circuit_diagram/` folder)

## Code

The full Arduino code is available in `code/led_blink.ino`.

## How It Works

1. Pin 8 is configured as an output.
2. The LED turns on for 400 miliseconds.
3. The LED turns off for 400 miliseconds.
4. This loop repeats indefinitely.

## How to Run

1. Open `led_blink.ino` in Arduino IDE.
2. Select your Arduino board and port.
3. Upload the code.
4. Watch the LED blink!

## License

This project is open-source. You may modify and use it freely.
