const int BZUCAK = A1;
const int TLAC = 9;
int mezeraDlouha = 300;
int mezeraKratka = 100;


void setup() {
  pinMode(TLAC, INPUT);
  pinMode(BZUCAK, OUTPUT);
}

void loop() {
  if (digitalRead(TLAC) == 0) {
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraDlouha);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraDlouha);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraDlouha);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraDlouha);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraDlouha);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraDlouha);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraDlouha);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, HIGH);
    delay(mezeraKratka);
    digitalWrite(BZUCAK, LOW);
    delay(mezeraDlouha);
  };
}
