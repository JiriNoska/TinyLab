const int RELE = A4;
const int FOTO = 2;
const int POT = 0;
int potenciometr;
int hodnotaFoto;

void setup() {
  pinMode(RELE, OUTPUT);
  pinMode(FOTO, INPUT);
  pinMode(POT, INPUT);
}

void loop() {
  hodnotaFoto = analogRead(FOTO);
  potenciometr = analogRead(POT);

  if (hodnotaFoto > potenciometr) {
    digitalWrite(RELE, HIGH);
  } else {
    digitalWrite(RELE, LOW);
  }
}
