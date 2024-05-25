int i = 0;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(11,255);
  analogWrite(10,0);
  analogWrite(9,0);
  delay(1000); //wait for 1 second
  
  analogWrite(11,153);
  analogWrite(10,153);
  analogWrite(9,255);
  delay(1000); //wait for 1 second
}