const int LED = 13;
const int POT = 0;

void setup() {
  pinMode(POT, INPUT);
  pinMode(LED, INPUT);
}
void loop() {
  Serial.println(analogRead(POT));
  if (analogRead(POT) < 250) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
