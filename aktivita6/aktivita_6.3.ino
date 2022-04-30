const int BZUCAK = A1;
const int POT = 0;

int Potenciometer;

void setup() {
  pinMode(BZUCAK, OUTPUT);
  pinMode(POT, INPUT);
}

void loop() {
  Potenciometer = analogRead(POT);
  tone(BZUCAK,Potenciometer);
}
