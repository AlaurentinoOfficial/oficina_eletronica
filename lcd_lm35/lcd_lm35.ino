#include <LiquidCrystal.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

#define ml35Pin A0
float value = 0.0;

void setup() {
  lcd.begin(16,2);
  
  Serial.begin(9600);
  delay(10);

  Serial.println("Ola, mundo!");
}

void loop() {
  lcd.clear();

  value = ( 5.0 * analogRead(ml35Pin) * 100.0) / 1024.0;

  lcd.setCursor(0,0);
  lcd.print("Temperatura");

  lcd.setCursor(0,1);
  lcd.print(value); lcd.print(" "); lcd.print((char)223); lcd.print("C");

  delay(1500);
}
