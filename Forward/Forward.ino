void setup()
{
  pinMode (3,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
}
void Forward()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
}
void Backward()
{
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
}
void loop()
{
  Forward();
  delay(1000);
  Backward();
  delay (1000);
}
