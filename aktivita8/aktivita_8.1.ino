const int cidlo = 3;
int hodnota;

void setup() {
  pinMode (cidlo, INPUT);  
}

void loop() {
  hodnota = analogRead(cidlo);
  Serial.println(hodnota);
}
