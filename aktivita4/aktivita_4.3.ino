const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;
const int LED4 = 10;

const int TLAC1 = 9;
const int TLAC2 = 8;
const int TLAC = 5;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(TLAC1, INPUT);
  pinMode(TLAC2, INPUT);
  pinMode(TLAC, INPUT);
}

void loop() {
  if (digitalRead(TLAC1) == 0) {
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);
  }
  if (digitalRead(TLAC2) == 0) {
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);
  }
  if (analogRead(TLAC) == 206) {
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED3, LOW);
  }
  if (analogRead(TLAC) == 510) {
    digitalWrite(LED4, HIGH);
  } else {
    digitalWrite(LED4, LOW);
  }
}
