const byte total =8;
const byte LED[] = {8,9,10,11,12,13,14,15};
int i;
void setup()
{
  for (i=0;i<total;i++) 
  {
  pinMode(LED[i],OUTPUT);
  }
}
  
  
  
void loop()  
{
     for (i=0;i<total;i++) 
    {
      digitalWrite(LED[i], LOW);
    }
      delay(300);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(300);
    for (i=0;i<total;i++)
    {  
      digitalWrite(LED[i], LOW);
    }
    delay(300);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(300);
    for (i=total;i>=0;i--)
    {
      digitalWrite(LED[i],LOW);
      delay(300);
      digitalWrite(LED[i], HIGH);
      delay(300);
    }
  for (i=0;i<total;i++) 
    {
      digitalWrite(LED[i], LOW);
    }
      delay(300);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(300);
    for (i=0;i<total;i++)
    {  
      digitalWrite(LED[i], LOW);
    }
    delay(300);
    for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], HIGH);
    }
      delay(300);
  
  for (i=0;i<total;i++)
    {
      digitalWrite(LED[i], LOW);
      delay(300);
      digitalWrite(LED[i], HIGH);
      delay(300);
    }  
}
