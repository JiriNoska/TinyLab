#include <LiquidTWI2.h>

int charNr = 97;
unsigned long aktualniCas;
unsigned long casStisku;
byte posledniPozice;
int text[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int pozice = 0;

const int ENC6 = 6;
const int ENC7 = 7;
byte predchoziStav;

int tecka = 200;
int carka = 500;
int mezera = 100;
int mezeraMeziSlovy = 1000;

int morse [26][4] = {
  {tecka, carka, 0, 0},            //a
  {carka, tecka, tecka, tecka},    //b
  {carka, tecka, carka, tecka},    //c
  {carka, tecka, tecka, 0},        //d
  {tecka, 0, 0, 0},                //e
  {tecka, tecka, carka, tecka},    //f
  {carka, carka, tecka, 0},        //g
  {tecka, tecka, tecka, tecka},    //h
  {tecka, tecka, 0, 0},            //i
  {tecka, carka, carka, carka},    //j
  {carka, tecka, carka, 0},        //k
  {tecka, carka, tecka, tecka},    //l
  {carka, carka, 0, 0},            //m
  {carka, tecka, 0, 0},            //n
  {carka, carka, carka, 0},        //o
  {tecka, carka, carka, tecka},    //p
  {carka, carka, tecka, carka},    //q
  {tecka, carka, tecka, 0},        //r
  {tecka, tecka, tecka, 0},        //s
  {carka, 0, 0, 0},                //t
  {tecka, tecka, carka, 0},        //u
  {tecka, tecka, tecka, carka},    //v
  {tecka, carka, carka, 0},        //w
  {carka, tecka, tecka, carka},    //x
  {carka, tecka, carka, carka},    //y
  {carka, carka, tecka, tecka},    //z
};

LiquidTWI2 lcd(0x20);

void setup() {
  pinMode (5, INPUT);
  pinMode (8, INPUT);
  pinMode (9, INPUT);
  pinMode (13, OUTPUT);
  pinMode (A1, OUTPUT);

  lcd.setMCPType(LTI_TYPE_MCP23008);
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH);
  lcd.clear();

  pinMode (ENC6, INPUT_PULLUP);
  pinMode (ENC7, INPUT_PULLUP);
  predchoziStav = digitalRead (ENC6);
  vypisAktPismeno();
}

void ton(int radka) {
  for (int i = 0; i < 4; i++)  {
    digitalWrite (A1, HIGH);
    digitalWrite (13, HIGH);
    delay(morse[radka][i]);
    digitalWrite (A1, LOW);
    digitalWrite (13, LOW);
    delay(mezera);
  }
  delay(mezeraMeziSlovy);
}

void enkoder () {
  if (predchoziStav != digitalRead (ENC6)) {
    predchoziStav = digitalRead (ENC6);
    if (digitalRead(ENC6) == HIGH) {
      if (digitalRead(ENC7) == LOW) {
        if (charNr < 122) {
          charNr++;
        } else {
          charNr = 97;
        }
        vypisAktPismeno();
      } else {
        if (charNr > 97) {
          charNr--;
        } else {
          charNr = 122;
        }
        vypisAktPismeno();
      }
    }
  }
}
void stisk() {
  if (aktualniCas - casStisku > 200) {
    if (analogRead(5) > 80 && analogRead(5) < 100) {
      text[pozice] = charNr;
      if (pozice < 15) {
        pozice++;
      } else {
        pozice = 0;
      }
    }
    if (digitalRead(9) == LOW) {
      memset(text, "" , sizeof(text));
      pozice = 0;
      lcd.clear();
    }
    if (digitalRead(8) == LOW) {
      poznejPismeno();
    }
    casStisku = millis();
  }
}

void vypisAktPismeno() {
  lcd.setCursor (pozice, 0);
  lcd.print (char(charNr));
  vypis();
}

void vypis() {
  for (int i = 0; i < 16; i++) {
    lcd.setCursor (i, 0);
    if (text[i] > 96 && text[i] < 123 ) {
      lcd.print (char(text[i]));
    }
  }
}

void poznejPismeno () {
  lcd.clear();
  vypis();
  for (int i = 0; i < 16; i++) {
    if ((text[i]) > 96 && (text[i]) < 123 ) {
      lcd.setCursor (i, 1);
      lcd.print("*");
      ton (text[i] - 97);
    }
  }
  lcd.clear();
}
void loop() {
  aktualniCas = millis();
  enkoder();
  stisk();
}
