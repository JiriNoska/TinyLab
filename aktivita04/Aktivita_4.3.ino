const int LED = 13;
const int TLAC = 9;
int zapnuto = 0;
int stisk = 0;

void setup() {
  pinMode(9, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (digitalRead(TLAC) == LOW) {
    stisk = 1;
  }
  if (stisk == 1 && digitalRead(TLAC) == HIGH) {
    stisk = 0;
    if (zapnuto == 1) {
      zapnuto = 0;
    } else if (zapnuto == 0) {
      zapnuto = 1;
    }
  }

  if (zapnuto == 1 ) {
    digitalWrite (LED, HIGH);
  } else {
    digitalWrite (LED, LOW);
  }
}
