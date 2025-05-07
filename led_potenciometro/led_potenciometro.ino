 void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(115200);



}

void loop() {
  // put your main code here, to run repeatedly:
  int pot=analogRead(A1);
  int per=map(pot, 0, 1023, 0, 100);
  Serial.println(per);
  if (per>50){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }

}
