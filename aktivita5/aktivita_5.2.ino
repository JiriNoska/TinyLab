const int rele = A4;
const int tlacZapni = 9;
const int tlacVypni = 8;

void setup() {
  pinMode (rele, OUTPUT);
  pinMode (tlacZapni, INPUT);
  pinMode (tlacVypni, INPUT);
}

void loop() {
  if (digitalRead(tlacZapni) == 0) {
    digitalWrite(rele, HIGH);
  }
   if (digitalRead(tlacVypni) == 0) {
    digitalWrite(rele, LOW);
  }
}
