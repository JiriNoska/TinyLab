const int RELE = A4;
const int POT = 0;

void setup() {
  pinMode(RELE, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop() {
int potenciometr = analogRead(POT);
  analogWrite(RELE, potenciometr );
  Serial.println(potenciometr);
}
