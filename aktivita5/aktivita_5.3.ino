const int rele = A4;
const int led = 13;
const int pot = 0;
int potenciometr;

void setup() {
  Serial.begin(9600);
  pinMode (A4, OUTPUT);
  pinMode (13, OUTPUT);
  pinMode (0, INPUT);
}

void loop() {
  potenciometr = analogRead(pot);
  Serial.println(potenciometr);
  if (potenciometr > 700){
      digitalWrite(rele, HIGH);
      digitalWrite(led, HIGH);
    }else{
      digitalWrite(rele, LOW);
      digitalWrite(led, LOW);
      }
}
