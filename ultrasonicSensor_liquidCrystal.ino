#include<Wire.h>
#include<LiquidCrystal_I2C.h>

byte echo = 9;
byte trigger = 10;
int duration;
int distance_cm;
int distance_inch;

LiquidCrystal_I2C lcd(0x3F,16,2);

void setup()  {
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  Serial.begin(9600);  
  lcd.init();
  lcd.backlight(); 
}

void loop()  {
  
  digitalWrite(trigger, LOW);
  delay(2);
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);

  duration = pulseIn(echo, HIGH);
  distance_cm = (duration * 0.033) / 2;
  distance_inch = (duration * 0.0123) / 2;

  lcd.setCursor(0,0);
  lcd.print("distance ");
  lcd.print(distance_cm);
  lcd.print("  cm  ");
  delay(100);
  lcd.setCursor(0,1);
  lcd.print("distance ");
  lcd.print(distance_inch);
  lcd.print("  inch  ");
  delay(100);
 
}
