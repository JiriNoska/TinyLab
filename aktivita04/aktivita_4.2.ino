const int L1 = 13;
const int L2 = 12;
const int L3 = 11;
const int L4 = 10;

const int S1 = 9;
const int S2 = 8;
const int S = 5;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(5));

  if (digitalRead(S1) == LOW) {
    digitalWrite(L1, HIGH);
  } else {
    digitalWrite(L1, LOW);
  }
  if (digitalRead(S2) == LOW) {
    digitalWrite(L2, HIGH);
  } else {
    digitalWrite(L2, LOW);
  }

  if (analogRead(S) == 206) {
    digitalWrite(L3, HIGH);
  } else {
    digitalWrite(L3, LOW);
  }
  if (analogRead(S) == 510) {
    digitalWrite(L4, HIGH);
  } else {
    digitalWrite(L4, LOW);
  }
}
