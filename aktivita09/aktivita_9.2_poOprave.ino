#include <Wire.h>
#include <LiquidTWI2.h>
LiquidTWI2 lcd(0x20);

const int S = 9;
const int R = 8;
int randn;
int cinitel1;
int cinitel2;
int vysledek;
int zpozdi = 5000;

void setup() {
  lcd.setMCPType(LTI_TYPE_MCP23008);
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
  lcd.setCursor(0, 0);
  lcd.print ("Stiskni tlacitko.");
  pinMode(S, INPUT);
  pinMode(R, INPUT);
}

void loop() {
  if (digitalRead(S) == LOW) {
    while (digitalRead(S) == LOW)
    cin1();
    cin2();
    soucinCisel(cinitel1, cinitel2);
    vypis(cinitel1, cinitel2, vysledek);
  }
}

int cin1 () {
  nahCislo();
  cinitel1 = randn;
  return cinitel1;
}

int cin2 () {
  nahCislo();
  cinitel2 = randn;
  return cinitel2;
}

int soucinCisel (int cinitel1, int cinitel2) {
  vysledek = cinitel1 * cinitel2;
  return vysledek;
}

int nahCislo() {
  randn = random (0, 11);
  return randn;
}

void vypis (int cinitel1, int cinitel2, int vysledek ) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print ("Mala nasobilka");
  lcd.setCursor(0, 1);
  lcd.print (cinitel1);
  lcd.print ("*");
  lcd.print (cinitel2);
  lcd.print ("=");
  delay(zpozdi);
  lcd.print (vysledek);
}
