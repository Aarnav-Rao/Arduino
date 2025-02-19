// C++ code
const int pushPin=4;
int buzzer=13;
int temp=0;
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(pushPin,INPUT);
 
}

void loop()
{
  temp=digitalRead(pushPin);
  if(temp==HIGH)
  {
    digitalWrite(buzzer, HIGH);
    delay(10); // Wait for 1000 millisecond(s)
  }
  else
  {
    digitalWrite(buzzer, LOW);
    delay(10); // Wait for 1000 millisecond(s)
}
}