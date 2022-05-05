const int LEDL = 13;       
const int LEDP = 12;         

void setup() {                
  pinMode (LEDL, OUTPUT);
  pinMode (LEDP, OUTPUT);
}

void loop() {
  digitalWrite (LEDL, HIGH);    
  digitalWrite (LEDP, LOW);    
  delay(500);
  digitalWrite (LEDL, LOW);    
  digitalWrite (LEDP, HIGH);    
  delay(500);
}
