// C++ code
const int pushPin=4;
int temp=0;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pushPin,INPUT);
 
}

void loop()
{
  temp=digitalRead(pushPin);
  if(temp==HIGH)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(10); // Wait for 1000 millisecond(s)
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    delay(10); // Wait for 1000 millisecond(s)
}
}