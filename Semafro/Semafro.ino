#define verm 13
#define ama 12 
#define verde 11

void setup() {
  // put your setup code here, to run once:
  pinMode(verm, OUTPUT);
  pinMode(ama, OUTPUT);
  pinMode(verde, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(verm, HIGH);
  delay(5000);
  digitalWrite(verm, LOW);
  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(verde, LOW);
  digitalWrite(ama, HIGH);
  delay(2000);
  digitalWrite(ama, LOW);
}
