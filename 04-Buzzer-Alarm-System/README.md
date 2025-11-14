# Buzzer Alarm — Arduino Project

## Overview

This project uses a push button to activate a buzzer alarm. When the button is pressed, the buzzer turns on. When the button is released, the buzzer turns off.

This introduces the concept of **digital inputs** and **INPUT_PULLUP**, which eliminates the need for an external resistor.

## Components Used

* Arduino Uno
* 1 × Buzzer (active type)
* 1 × Push button
* Breadboard
* Jumper wires

## Circuit Diagram / Wiring

**Button Wiring (using internal pull-up):**

* One leg of button → Pin 7
* Other leg of button → GND

**Buzzer:**

* Pin 8 → positive terminal of buzzer
* Negative terminal → GND

(Place your circuit image in `circuit_diagram/`.)

## How It Works

1. The button is read using `INPUT_PULLUP` (default state HIGH).
2. Pressing the button connects pin 7 to ground → buttonState becomes LOW.
3. Arduino turns the buzzer ON when the button is pressed.

## Notes

* `INPUT_PULLUP` avoids needing a 10kΩ resistor.
* If using a passive buzzer, you can generate tones using `tone()`.

## How to Run

1. Open `buzzer_alarm.ino` in Arduino IDE.
2. Upload to your Arduino.
3. Press the button — the buzzer should sound.

## Extensions / Upgrades

* Use `tone()` to create siren effects.
* Add an LED indicator.
* Add a sensor (LDR, ultrasonic) to activate the alarm.

## License

This project is open-source and free to modify.

---