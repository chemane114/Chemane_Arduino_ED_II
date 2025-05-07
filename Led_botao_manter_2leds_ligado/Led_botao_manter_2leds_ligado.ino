#define ledPin1 13
#define ledPin2 12
#define botaoPin 7
bool botaoestado = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(botaoPin, INPUT);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  botaoestado = digitalRead(botaoPin);
  if (!botaoestado) {
    digitalWrite(ledPin1, !digitalRead(ledPin1));
    digitalWrite(ledPin2, !digitalRead(ledPin2));
  }
  delay(300);
}
