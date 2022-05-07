#include <LedControl.h>

LedControl lc = LedControl(10, 12, 11, 1);

const int POT = 0;

int potenciometr;
int pozice1;
int pozice2;
int pozice3;
int pozice4;

void setup() {
  pinMode(POT, INPUT);

  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
}

void loop() {
  potenciometr = analogRead(0);
  pozice1 = potenciometr / 1000;
  pozice2 = potenciometr % 1000 / 100;
  pozice3 = potenciometr % 100 / 10;
  pozice4 = potenciometr  % 10;

  lc.setDigit (0, 0, pozice1, false);
  lc.setDigit (0, 1, pozice2, false);
  lc.setDigit (0, 2, pozice3, false);
  lc.setDigit (0, 3, pozice4, false);

  delay(150);
}
