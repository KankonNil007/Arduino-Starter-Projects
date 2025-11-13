void setup() {
  pinMode(8, OUTPUT);   // Set pin 8 as output
}

void loop() {
  digitalWrite(8, HIGH);  // LED ON
  delay(1000);            // Wait 1 second
  digitalWrite(8, LOW);   // LED OFF
  delay(1000);            // Wait 1 second
}