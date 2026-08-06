#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Endereço I2C (0x27), 16 colunas e 2 linhas

// Mensagens que serão exibidas no display
String linha1 = "Welcome to my";
String linha2 = "profile";

void setup() {

  lcd.init(); // incializa o display LCD
  lcd.backlight(); // liga as luzes de fundo do display

  // seta o cursor na primeira linha
  lcd.setCursor(0, 0);

  for(int i = 0; i < linha1.length(); i++) { // percorre pra digitar caractere por caractere

    lcd.print(linha1[i]);
    delay(120); // delay pra simular o efeito de digitação

  }

  // seta o cursor na segunda linha
  lcd.setCursor(0, 1);

  for(int i = 0; i < linha2.length(); i++) {

    lcd.print(linha2[i]);
    delay(120);

  }

}

void loop() {

}