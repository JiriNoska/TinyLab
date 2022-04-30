const int cidlo = 3;

void setup() {
  pinMode(cidlo, INPUT); 
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(cidlo) / 1024.00 * 500.00);
}
