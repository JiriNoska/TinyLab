const int LED = 13;            
int zpozdi = 12;
void setup() {                
  pinMode (LED, OUTPUT);
}

void loop() {
  digitalWrite (LED, HIGH);    
  delay(zpozdi);
  digitalWrite (LED, LOW);    
  delay(zpozdi);
}
