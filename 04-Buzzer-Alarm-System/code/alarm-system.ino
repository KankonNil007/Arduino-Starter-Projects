// Buzzer Alarm Project - Arduino
// Press button → buzzer sounds


int buttonPin = 7; // Button connected to pin 7
int buzzerPin = 8; // Buzzer connected to pin 8


void setup() {
pinMode(buttonPin, INPUT_PULLUP); // Internal pull-up resistor
pinMode(buzzerPin, OUTPUT);
}


void loop() {
int buttonState = digitalRead(buttonPin);


if (buttonState == LOW) { // Button pressed
digitalWrite(buzzerPin, HIGH);
} else {
digitalWrite(buzzerPin, LOW);
}

}