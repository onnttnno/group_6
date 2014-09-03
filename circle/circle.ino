void setup()
{
  pinMode (3,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (2,INPUT);
  pinMode (4,INPUT);
}
void Forward(int Lspeed,int Rspeed)
{
  analogWrite(3,Lspeed);
  digitalWrite(5,LOW);
  analogWrite(6,Rspeed);
  digitalWrite(9,LOW);
}
void Motor_Stop()
{
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}
void loop()
{
  Forward(80,255);
  if(digitalRead(4)==0)
  {
    Motor_Stop();
    while(1);
  }
}
