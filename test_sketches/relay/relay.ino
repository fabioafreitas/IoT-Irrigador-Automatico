void setup() {
  // put your setup code here, to run once:
pinMode(D8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D8, HIGH);
  delay(2000);
  digitalWrite(D8, LOW);
  delay(2000);
}
