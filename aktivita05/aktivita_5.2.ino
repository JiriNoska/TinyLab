const int S1 = 9;
const int S2 = 8;
const int BZUCAK = A1;

void setup() {
  pinMode (S1, INPUT);
  pinMode (S2, INPUT);
  pinMode (BZUCAK, OUTPUT);
}

void loop() {
  if (digitalRead(S1) == LOW) {
    digitalWrite(BZUCAK, HIGH);
  }
  if (digitalRead(S2) == LOW) {
    digitalWrite(BZUCAK, LOW);
  }
}
