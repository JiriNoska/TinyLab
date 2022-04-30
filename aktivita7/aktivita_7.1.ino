const int FOTO = 2;
int hodnotaFoto;

void setup() {
  pinMode (FOTO, INPUT);
  Serial.begin(9600);
}

void loop() {
  hodnotaFoto = analogRead(FOTO);
  Serial.println(hodnotaFoto);
}
