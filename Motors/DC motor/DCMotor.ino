int m1=13, m2=12, en=9;
int pot=A0, st=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(en, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  st=analogRead(pot)/4;
  analogWrite(en, st);
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);

}
