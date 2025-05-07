#define ledpin1 13
#define ledpin2 12

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  char c = Serial.read();
  switch (c) {
    case 'A':
    digitalWrite(ledpin1, HIGH);
    break;
    case 'B':
    digitalWrite(ledpin1, LOW);
    break;
    case 'C':
    digitalWrite(ledpin2, HIGH);
    break;
    case 'D':
    digitalWrite(ledpin2, LOW);
    break;
    case 'Z':
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    break;
  }

}
