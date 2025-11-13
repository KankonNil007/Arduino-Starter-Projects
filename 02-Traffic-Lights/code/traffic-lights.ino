int redLED = 8;
int yellowLED = 9;
int greenLED = 10;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Green light
  digitalWrite(greenLED, HIGH);
  delay(5000); // 5 seconds
  digitalWrite(greenLED, LOW);

  // Yellow light
  digitalWrite(yellowLED, HIGH);
  delay(2000); // 2 seconds
  digitalWrite(yellowLED, LOW);

  // Red light
  digitalWrite(redLED, HIGH);
  delay(5000); // 5 seconds
  digitalWrite(redLED, LOW);
}
