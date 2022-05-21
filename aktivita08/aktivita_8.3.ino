#include <LedControl.h>

const byte TLAC = 5;
const byte RESET = 9;
const byte ENC6 = 6;
const byte ENC7 = 7;
const byte BZUCAK = A1;
int posledniStav;
int cas = 0;

LedControl lc = LedControl (10, 12, 11, 1);
void setup() {
  lc.shutdown (0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
  pinMode (ENC6, INPUT_PULLUP);
  pinMode (ENC7, INPUT_PULLUP);
  pinMode (TLAC, INPUT);
  Serial.begin(9600);
  posledniStav = digitalRead(ENC6);
}

void loop() {
  if (posledniStav != digitalRead(ENC6)) {
    posledniStav = digitalRead(ENC6);
    if (digitalRead(ENC6) == HIGH) {
      if (digitalRead(ENC7) == LOW) {
        if (cas <= 3585) {
          if (cas < 300) {
            cas = cas + 5;
          } else {
            cas = cas + 15;
          }
        }
      } else {
        if (cas >= 5 ) {
          cas = cas - 5;
        }
      }
    }
  }
  if (digitalRead(RESET) == LOW) {
    cas = 0;
  }
  if (analogRead (TLAC) > 85 && analogRead (TLAC) < 95)
  {
    do {
      if (cas > 0 ) {
        cas = cas - 1;
        delay(1000);

        if (cas < 6) {
          tone(BZUCAK, 440, 200);
        }
      }
      lc.setDigit (0, 0, (cas / 60) % 100  / 10, false);
      lc.setDigit (0, 1, (cas / 60) % 100  % 10, true);
      lc.setDigit (0, 2, cas % 60 / 10, false);
      lc.setDigit (0, 3, cas % 60 % 10 , false);
    }
    while (cas > 0);
  }
  lc.setDigit (0, 0, (cas / 60) % 100  / 10, false);
  lc.setDigit (0, 1, (cas / 60) % 100  % 10, true);
  lc.setDigit (0, 2, cas % 60 / 10, false);
  lc.setDigit (0, 3, cas % 60 % 10 , false);
}
