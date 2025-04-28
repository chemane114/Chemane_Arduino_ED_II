#define ledPin 13
#define botaoPin 7
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(botaoPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool botaoestado = digitalRead(botaoPin);
  if (botaoestado==true) {
    digitalWrite(ledPin, HIGH);    
  }
  else{
    digitalWrite(ledPin, LOW);
    }
}
