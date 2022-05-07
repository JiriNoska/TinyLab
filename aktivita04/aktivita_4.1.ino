const int S1 = 9;
const int S2 = 8;
const int S = 5;

void setup() {
  Serial.begin(9600);
  pinMode (S1, INPUT);
  pinMode (S2, INPUT);
  pinMode (S, INPUT);
}

void loop() {
  Serial.println(digitalRead(S1));
  Serial.println(digitalRead(S2));
  Serial.println(analogRead(S));
  delay(500);
}
