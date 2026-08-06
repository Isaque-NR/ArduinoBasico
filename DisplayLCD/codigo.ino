#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String linha1 = "Welcome to my";
String linha2 = "profile";

void setup() {

  lcd.init();
  lcd.backlight();

  // Primeira linha
  lcd.setCursor(0, 0);

  for(int i = 0; i < linha1.length(); i++) {

    lcd.print(linha1[i]);
    delay(120);

  }

  // Segunda linha
  lcd.setCursor(0, 1);

  for(int i = 0; i < linha2.length(); i++) {

    lcd.print(linha2[i]);
    delay(120);

  }

}

void loop() {

}