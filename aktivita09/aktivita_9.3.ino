void setup() {

  while(!Serial)
    Serial.begin(9600);
  for (int i = 1; i <= 10; i++){
    Serial.print ("Malá násobilka čísla ");
    Serial.println (i);
    for (int j = 0; j <= 10; j ++){
      Serial.print (i * j);
      Serial.print ("   ");
      }
      Serial.println();
    }
}

void loop() {}
