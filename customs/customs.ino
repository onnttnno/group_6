void setup()
{
  pinMode (3,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (2,INPUT);
  pinMode (4,INPUT);
}
void Forward()
{
  analogWrite(3,LOW);
  digitalWrite(5,HIGH);
  analogWrite(6,HIGH);
  digitalWrite(9,LOW);
}
void W()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
}
void loop()
{
  Forward();
  delay(1000);
  W();
  delay(1000);
  
  }

