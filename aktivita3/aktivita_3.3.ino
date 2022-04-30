const int LED = 13;
const int POT = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(POT));
  if (analogRead(POT) > 800) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

} 
