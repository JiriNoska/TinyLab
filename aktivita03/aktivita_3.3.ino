const int L1 = 13;
const int L2 = 12;
const int L3 = 11;
const int L4 = 10;
const int POT = 0;
int potenciometr;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop() {
  potenciometr = analogRead(POT);
  Serial.println(potenciometr);
    digitalWrite(L1, HIGH);
  if (potenciometr > 256) {
    digitalWrite(L2, HIGH);
  } else {
    digitalWrite(L2, LOW);
  }
  if (potenciometr > 512) {
    digitalWrite(L3, HIGH);
  } else {
    digitalWrite(L3, LOW);
  }
  if (potenciometr > 768) {
    digitalWrite(L1, HIGH);
    digitalWrite(L2, HIGH);
    digitalWrite(L3, HIGH);
    digitalWrite(L4, HIGH);
    delay(200);
    digitalWrite(L1, LOW);
    digitalWrite(L2, LOW);
    digitalWrite(L3, LOW);
    digitalWrite(L4, LOW);
    delay(200);
  }
}
