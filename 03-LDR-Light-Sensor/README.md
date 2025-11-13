# LDR Light Sensor — Arduino Project

## Overview

This project uses an LDR (Light Dependent Resistor) to detect light intensity. When the environment becomes dark, the LED automatically turns ON. When it's bright, the LED turns OFF.

This is your first **analog sensor project** after learning digital outputs.

## Components Used

* Arduino Uno
* 1 × LDR (Light Dependent Resistor)
* 1 × 10kΩ resistor (for voltage divider)
* 1 × LED
* 1 × 220Ω resistor
* Breadboard
* Jumper wires

## Circuit Diagram / Wiring

**Voltage Divider Setup:**

* One leg of LDR → 5V
* Other leg of LDR → A0 and 10kΩ resistor
* Other leg of 10kΩ resistor → GND

**LED:**

* Pin 8 → 220Ω resistor → LED (long leg)
* LED short leg → GND

(Place your circuit image or screenshot in `circuit_diagram/`.)

## How It Works

1. LDR + 10kΩ resistor form a voltage divider.
2. Arduino reads the voltage on A0 (0–1023).
3. Low light → low analog value → LED ON.
4. High light → high analog value → LED OFF.

## How to Run

1. Open `ldr_light_sensor.ino` in Arduino IDE.
2. Upload to your Arduino.
3. Open Serial Monitor to see LDR values.
4. Adjust the `threshold` variable as needed.

## Tips for Calibration

* Shine flashlight on LDR → note value.
* Cover LDR (darkness) → note value.
* Choose threshold between the two readings.

## License

This project is open-source. Modify and use freely.

---