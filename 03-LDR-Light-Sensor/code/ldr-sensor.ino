// LDR Light Sensor Project - Arduino
// LED turns ON when it is dark


int ldrPin = A0; // LDR connected to analog pin A0
int ledPin = 8; // LED connected to pin 8
int threshold = 500; // Adjust this value based on your environment


void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}


void loop() {
int ldrValue = analogRead(ldrPin);
Serial.println(ldrValue);


if (ldrValue < threshold) {
digitalWrite(ledPin, HIGH); // Turn LED ON when dark
} else {
digitalWrite(ledPin, LOW); // Turn LED OFF when bright
}


delay(200);
}