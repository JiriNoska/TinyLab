const int RELE = A4;
const int TLAC = 9;

void setup() {
  pinMode (RELE, OUTPUT);
  pinMode (TLAC, INPUT);
}

void loop() {
  if (digitalRead(TLAC) == 0) {
    digitalWrite(RELE, HIGH);
  } else {
    digitalWrite(RELE, LOW);
  }
}
