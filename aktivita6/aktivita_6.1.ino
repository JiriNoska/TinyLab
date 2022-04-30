const int BZUCAK = A1;
const int TLAC = 9;

void setup() {
  pinMode(BZUCAK, OUTPUT);
  pinMode(TLAC, INPUT);
}

void loop() {
  if (digitalRead(TLAC) == 0) {
    digitalWrite(BZUCAK, HIGH);
  } else {
    digitalWrite(BZUCAK, LOW);
  }
}
