#include <SoftwareSerial.h>
#define rxPin 18
#define txPin 18
SoftwareSerial MySerial = SoftwareSerial(rxPin,txPin);

void setup()
{
  digitalWrite(txPin,HIGH);
  delay(1000);
  pinMode(txPin,OUTPUT);
  MySerial.begin(9600);
  delay(1000);
}
void loop ()
{
  MySerial.write(0xFE);
  MySerial.write(0x80);
  MySerial.print("Ritthirong");
  MySerial.write(0xFE);
  MySerial.write(0xC0);
  MySerial.print("5710742163");
  while(1);
}
