const int LED1 = 13;

const int TLAC1 = 9;
const int TLAC2 = 8;

void setup() {
  pinMode(LED2, OUTPUT);
  pinMode(TLAC1, INPUT);
  pinMode(TLAC2, INPUT);
}

void loop() {
  if (digitalRead(TLAC1) == 0) {
    digitalWrite(LED1, HIGH);
  }
  if (digitalRead(TLAC2) == 0) {
    digitalWrite(LED1, LOW);
  }
}
