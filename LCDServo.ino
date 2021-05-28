#include<Servo.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);


float pot=A0;
float vel;
Servo servo1;

void setup()
{
 Serial.begin(9600);
 lcd.begin(16,2);
 servo1.attach(9);
}

void loop()
{
  vel=analogRead(pot);
  vel=map(vel,170,852,0,180);
  servo1.write(vel);
  lcd.setCursor(4,0);
  lcd.print("Rotacion");
  lcd.setCursor(1,1);
  lcd.print("Grados: ");
  lcd.print(vel);
  /*if(vel<0||vel>180)
  {
    lcd.print("Fuera de rango");
  }
  else
  {
    lcd.print("Grados: ");
    lcd.print(vel);
  }
  */
}
