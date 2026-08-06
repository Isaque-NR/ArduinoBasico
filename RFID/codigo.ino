#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
   Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
 rfid.PCD_DumpVersionToSerial(); 
 Serial.println("Aproxime o Cartão");
}
void loop() {
  // Verifica se tem cartão
  if (!rfid.PICC_IsNewCardPresent()) {
    return;
  }

  // Lê o cartão
  if (!rfid.PICC_ReadCardSerial()) {
    return;
  }

  Serial.print("UID: ");
  
  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
  }

  Serial.println();
}