const int FOTO = 2;
const int L1 = 13;
const int L2 = 12;
const int L3 = 11;
const int L4 = 10;

int hodnotaFoto;

void setup() {
  pinMode (FOTO, INPUT);
  pinMode (L1, OUTPUT);
  pinMode (L2, OUTPUT);
  pinMode (L3, OUTPUT);
  pinMode (L4, OUTPUT);
  }

void loop() {
  hodnotaFoto = analogRead(FOTO);
 if (hodnotaFoto < 50){
    digitalWrite (L1, HIGH);
    digitalWrite (L2, HIGH);
    digitalWrite (L3, HIGH);
    digitalWrite (L4, HIGH);
  }
   if (hodnotaFoto < 250){
    digitalWrite (L1, HIGH);
    digitalWrite (L2, HIGH);
    digitalWrite (L3, HIGH);
    digitalWrite (L4, LOW);
  }
    if (hodnotaFoto < 450){
    digitalWrite (L1, HIGH);
    digitalWrite (L2, HIGH);
    digitalWrite (L3, LOW);
    digitalWrite (L4, LOW);
  }
      if (hodnotaFoto < 650){
    digitalWrite (L1, HIGH);
    digitalWrite (L2, LOW);
    digitalWrite (L3, LOW);
    digitalWrite (L4, LOW);
  }
   if (hodnotaFoto > 650){
    digitalWrite (L1, LOW);
    digitalWrite (L2, LOW);
    digitalWrite (L3, LOW);
    digitalWrite (L4, LOW);
  }
}
