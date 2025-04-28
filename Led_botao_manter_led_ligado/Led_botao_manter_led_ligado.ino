#define ledPin 13
#define botaoPin 7
bool botaoestado = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(botaoPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  botaoestado = digitalRead(botaoPin);
  if (botaoestado) {
    digitalWrite(ledPin, !digitalRead(ledPin));
  }
  delay(300);
}
