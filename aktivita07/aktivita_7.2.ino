const int ENC6 = 6;
const int ENC7 = 7;
byte predchoziStav;
int cislo = 0;

void setup() {
  pinMode (ENC6, INPUT_PULLUP);
  pinMode (ENC7, INPUT_PULLUP);
  predchoziStav = digitalRead (ENC6);
  Serial.begin(9600);
}

void loop() {
  if (predchoziStav != digitalRead (ENC6)) {
    predchoziStav = digitalRead (ENC6);
    if (digitalRead(ENC6) == HIGH) {
      if (digitalRead(ENC7) == LOW) {
        cislo = cislo + 1;
      } else {
        cislo = cislo - 1;
      }
    }
  }
  Serial.println(cislo);
}
