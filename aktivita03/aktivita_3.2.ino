const int POT = 0;
void setup() {
pinMode (POT, INPUT);
Serial.begin(9600);
}

void loop() {
Serial.println(analogRead(POT));
}
