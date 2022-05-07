const int ENC6 = 6;
const int ENC7 = 7;
int predchozi;
int cislo = 0;

void setup() {
  pinMode(ENC6, INPUT_PULLUP);
  pinMode(ENC7, INPUT_PULLUP);
  Serial.begin(9600);
  predchozi = digitalRead(ENC6);
}

void loop() {
  if (predchozi != digitalRead(ENC6)) {
    predchozi = digitalRead(ENC6);
    if (digitalRead(6) == 1) {
      if (digitalRead(ENC7) == 0) {
        cislo ++;
      }
      if (digitalRead(ENC7) == 1) {
        cislo --;
      }
    }
  }
  Serial.println(cislo);
}
