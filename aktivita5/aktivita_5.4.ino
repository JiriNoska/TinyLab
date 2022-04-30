const int rele = A4;
const int pot = 0;
int potenciometr;

void setup() {
  pinMode (pot, INPUT);
  pinMode (rele, OUTPUT);

}

void loop() {
  potenciometr = analogRead(pot);
  if (potenciometr < 200) {
    digitalWrite(rele, HIGH);
    delay (potenciometr);
  } else if (potenciometr > 800) {
    digitalWrite(rele, LOW);
    delay (potenciometr);
  } else {
    digitalWrite(rele, HIGH);
    delay (potenciometr);
    digitalWrite(rele, LOW);
    delay (potenciometr);
    }
}
