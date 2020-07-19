void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}