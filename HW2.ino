const byte startPin =15;
const byte endPin = 8;

void setup()
{
   for (byte i = startPin; i>= endPin; i--) 
    {
    pinMode(i, OUTPUT);
  }
}
void loop()
{
  byte i;
  
    for (i=startPin;i>=endPin;i--) 
    {
    digitalWrite(i,HIGH);
  }
  
  for(i=startPin;i>=endPin;i--)
    {  
      digitalWrite(i,LOW);
    delay(100);
      digitalWrite(i,HIGH);
      delay(100);
    }
    for(i=endPin;i<=startPin;i++)
    {  
      digitalWrite(i,LOW);
    delay(100);
      digitalWrite(i,HIGH);
      delay(100);
    } 
} 
