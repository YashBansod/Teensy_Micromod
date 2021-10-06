
int nre_pin = 2;
int de_pin = 3;
String incomingString;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(nre_pin, OUTPUT);
  pinMode(de_pin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
}

void loop() {
  digitalWrite(de_pin, LOW);
  digitalWrite(nre_pin, LOW);

  while(Serial1.available() == 0);
  digitalWrite(LED_BUILTIN, HIGH);
  while (Serial1.available() > 0) {
    incomingString = Serial1.readString();
  }
  Serial.print("Received: ");
  Serial.print(incomingString);
  delay(10);

  digitalWrite(nre_pin, HIGH);
  digitalWrite(de_pin, HIGH);
  digitalWrite(LED_BUILTIN, LOW);

  Serial1.println("Yellow");
  delay(10);
  
}
