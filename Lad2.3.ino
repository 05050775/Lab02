const byte startPin = 8;
const byte endPin = 15;
void setup() 
{
     for (byte i = startPin; i<= endPin; i++) 
    {
        pinMode(i, OUTPUT);
        pinMode(6,INPUT);
    }
}
void loop()
{
    byte i;

   boolean val = digitalRead(6);
   if(val)
   {
 
  
    for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
  delay(1000);
    for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
   delay(1000);
  for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
  delay(1000);
  for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
   delay(1000);
  //亮滅兩次
  
  
    for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
         delay (100);
         digitalWrite(i,HIGH);
         delay (100);
    }//右到左
  
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
      delay(1000);
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
      delay(1000);
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
    }
      delay(1000);
      for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, HIGH);
    }
      delay(1000);
  //亮滅兩次
  
  
    for (i=endPin; i>= startPin; i--) 
    {
         digitalWrite(i, LOW);
         delay (100);
         digitalWrite(i, HIGH);
         delay (100);
    }//左到右
   }
   else
   {
     for (i=endPin; i>= startPin; i--) 
    {
         digitalWrite(i, LOW);
         delay (100);
         digitalWrite(i, HIGH);
         delay (100);
    }//左到右
     for (i=startPin; i<= endPin; i++) 
    {
         digitalWrite(i, LOW);
         delay (100);
         digitalWrite(i,HIGH);
         delay (100);
    }//右到左
   }
}
