// C++ code
int led1=13;
int led2=11;
int led3=9;
void setup()
 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led2, HIGH);
  delay(1050); // Wait for 1000 millisecond(s)
  digitalWrite(led2, LOW);
  delay(1050); // Wait for 1000 millisecond(s)
  digitalWrite(led3, HIGH);
  delay(1100); // Wait for 1000 millisecond(s)
  digitalWrite(led3, LOW);
  delay(1100); // Wait for 1000 millisecond(s)
}