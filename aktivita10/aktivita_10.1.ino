#include <LedControl.h>
#include <Wire.h>
#include <LiquidTWI2.h>

int number [4] = {0, 0, 0, 0};
int celeCislo;
String binPrevod = "0";
String hexPrevod = "0";
unsigned long aktualniCas;
unsigned long casStisku;

LiquidTWI2 lcd(0x20);
LedControl lc = LedControl(10, 12, 11, 1);

void setup() {
  pinMode (5, INPUT_PULLUP);
  pinMode (8, INPUT_PULLUP);
  pinMode (9, INPUT_PULLUP);
  lcd.setMCPType(LTI_TYPE_MCP23008);
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
  lcd.clear();
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
  vypis(binPrevod, hexPrevod);
}

void stisk() {
  if (aktualniCas - casStisku > 200 ) {
    if (digitalRead(9) == LOW) {
      if ( number[0] < 9) {
        number[0]++;
      } else {
        number[0] = 0;
      }
      prevod ();
    }
    if (digitalRead(8) == LOW) {
      if ( number[1] < 9) {
        number[1]++;
      } else {
        number[1] = 0;
      }
      prevod ();
    }
    if (analogRead (5) > 200 && analogRead (5) < 210 ) {
      if ( number[2] < 9) {
        number[2]++;
      } else {
        number[2] = 0;
      }
      prevod ();
    }
    if ( analogRead (5) > 505 && analogRead (5) < 520) {
      if ( number[3] < 9) {
        number[3]++;
      } else {
        number[3] = 0;
      }
      prevod ();
    }
    casStisku = millis();
  }
}

void prevod () {
  int celeCislo = number[0] * 1000 + number[1] * 100 + number[2] * 10 + number[3];
  String binPrevod = String (celeCislo, BIN);
  String hexPrevod = String (celeCislo, HEX);
  vypis(binPrevod, hexPrevod);
}

void vypis(String binPrevod, String hexPrevod) {
  lcd.clear();
  for (int i = 0; i < 4; i++)  {
    lc.setDigit (0, i, number[i], false);
  }
  int delkaBin = binPrevod.length();
  int delkaHex = hexPrevod.length();
  lcd.setCursor(16 - delkaBin, 0);
  lcd.print (binPrevod);
  lcd.setCursor(16 - delkaHex, 1);
  lcd.print (hexPrevod);
}

void loop() {
  aktualniCas = millis();
  stisk();
}
