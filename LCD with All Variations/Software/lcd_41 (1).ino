// C++ code
//
int seconds=0;
#include<Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0);

void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Hello");
  
  lcd.setCursor(0,1);
  lcd.print("Guys");
 
}

void loop(){
  
}
  
