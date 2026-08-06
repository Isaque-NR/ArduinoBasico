#include <SPI.h>
#include <MFRC522.h>

// pinos usados pelo RFID 
#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN); // criando o objeto rfid para controlá-lo 

void setup() {
 Serial.begin(9600);
 SPI.begin(); // inicializa comunicação SPI
 rfid.PCD_Init(); // inicializa a comunicação SPI
 rfid.PCD_DumpVersionToSerial(); // Exibe informações do módulo RFID no Monitor Serial 
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
  
  for (byte i = 0; i < rfid.uid.size; i++) {   // Percorre todos os bytes que compõem o UID
    Serial.print(rfid.uid.uidByte[i], HEX);  // Exibe cada byte em formato hexadecimal
    Serial.print(" ");
  }

  Serial.println();
}