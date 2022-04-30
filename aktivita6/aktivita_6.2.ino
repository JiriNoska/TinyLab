const int BZUCAK = A1;
const int TLAC1 = 9;
const int TLAC2 = 8;

void setup() {
  pinMode(BZUCAK, OUTPUT);
  pinMode(TLAC1, INPUT);
  pinMode(TLAC2, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(TLAC1) == 0){
      tone(BZUCAK,440);
    } 
  if (digitalRead(TLAC2) == 0){
      noTone(BZUCAK);
    }
}
