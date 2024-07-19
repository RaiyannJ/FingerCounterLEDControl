const int ledPins[] = {2, 3, 4, 5, 6}; // Array of LED pins

void setup() {
  Serial.begin(9600); // Start serial communication
  // Initialize the LED pins as outputs
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available() > 0) {
    int total = Serial.parseInt(); // Read the total number of LEDs to turn on
    for (int i = 0; i < 5; i++) {
      if (i < total) {
        digitalWrite(ledPins[i], HIGH);
      } else {
        digitalWrite(ledPins[i], LOW);
      }
    }
  }
}
