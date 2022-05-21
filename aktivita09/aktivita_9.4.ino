#include <Wire.h>
#include <LiquidTWI2.h>
LiquidTWI2 lcd(0x20);

int fakt;
int predFakt;
int predchozi;
unsigned long vysledek;
unsigned long preVysledek;

void setup() {
  lcd.setMCPType(LTI_TYPE_MCP23008);
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
}

void loop() {
  fakt = map (analogRead(0), 0, 1023, 1, 12);
  vypocet (fakt);
  vypis(vysledek);
}

unsigned long vypocet(int fakt) {
  vysledek = 1;
  for (int i = 1; i <= fakt; i++ ) {
    vysledek *= i;
  }
  return vysledek;
}

void vypis(unsigned long vysledek) {
  if (preVysledek != vysledek) {
    lcd.clear();
    lcd.setCursor (0, 0);
    lcd.print(fakt);
    lcd.print("!= ");
    lcd.setCursor (0, 1);
    lcd.print(vysledek);
    preVysledek = vysledek;
  }
}
