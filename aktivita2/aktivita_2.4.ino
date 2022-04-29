const int L1 = 13;
const int L2 = 12;
const int L3 = 11;
const int L4 = 10;

void setup() {
  pinMode (L1, OUTPUT);
  pinMode (L2, OUTPUT);
  pinMode (L3, OUTPUT);
  pinMode (L4, OUTPUT);
}

void loop() {
  digitalWrite (L1, HIGH);
  digitalWrite (L2, LOW);
  digitalWrite (L3, LOW);
  digitalWrite (L4, LOW);
  delay(200);
  digitalWrite (L1, LOW);
  digitalWrite (L2, HIGH);
  digitalWrite (L3, LOW);
  digitalWrite (L4, LOW);
  delay(200);
  digitalWrite (L1, LOW);
  digitalWrite (L2, LOW);
  digitalWrite (L3, HIGH);
  digitalWrite (L4, LOW);
  delay(200);
  digitalWrite (L1, LOW);
  digitalWrite (L2, LOW);
  digitalWrite (L3, LOW);
  digitalWrite (L4, HIGH);
  delay(200);
}
