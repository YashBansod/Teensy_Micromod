const int ledPin = LED_BUILTIN;

// the setup() method runs once, when the sketch starts.
void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop() methor runs over and over again, as long as the board has power.
void loop() {
  digitalWrite(ledPin, HIGH);     // set the LED on
  delay(500);                     // wait for 500 millisecond
  digitalWrite(ledPin, LOW);      // set the LED off
  delay(500);                     // wait for 500 millisecond
}
