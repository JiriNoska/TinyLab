const int CIDLO = 3;
float teplota;
float teplotaFahrenheit;
float teplotaKelvin;

void setup() {
  pinMode(CIDLO, INPUT);
  Serial.begin(9600);
}

void loop() {
  teplota = analogRead(CIDLO) / 1024.00 * 500.00;
  teplotaFahrenheit = (1.8 * teplota) + 32;
  teplotaKelvin = teplota + 273.15;
  Serial.println("Teplota");
  Serial.println("***********************************");
  Serial.print("stupně Celsia = ");
  Serial.print(teplota);
  Serial.println("°C");
  Serial.print("stupně Fahrenheita = ");
  Serial.print(teplotaFahrenheit);
  Serial.println("°F");
  Serial.print("Kelvin = ");
  Serial.print(teplotaKelvin);
  Serial.println("K");
  Serial.println("***********************************");
  delay(1000);
}
