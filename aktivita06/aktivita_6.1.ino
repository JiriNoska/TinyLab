const int L1 = 13;
const int L2 = 12;
const int L3 = 11;
const int L4 = 10;
const int FOTO = 2;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(FOTO, INPUT);
}

void loop() {
  if (analogRead(FOTO) >= 800) {
    digitalWrite(L1, LOW);
  }
  if (analogRead(FOTO) < 800) {
    digitalWrite(L1, HIGH);
  } else {
    digitalWrite(L1, LOW);
  }
  if (analogRead(FOTO) < 600) {
    digitalWrite(L2, HIGH);
  } else {
    digitalWrite(L2, LOW);
  }
  if (analogRead(FOTO) < 400) {
    digitalWrite(L3, HIGH);
  } else {
    digitalWrite(L3, LOW);
  }
  if (analogRead(FOTO) < 200) {
    digitalWrite(L4, HIGH);
  } else {
    digitalWrite(L4, LOW);
  }
}
