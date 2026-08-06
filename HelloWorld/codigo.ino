// Pinos onde os LEDs estão conectados
const int ledVerde = 3;
const int ledVermelho = 2;

void setup() {

  // Configura os pinos dos LEDs como saídas digitais
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

}

void loop() {

  // Acende o LED verde e apaga o vermelho
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho, LOW);

  // Aguarda 1 segundo
  delay(1000);

  // Apaga o LED verde e acende o vermelho
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho, HIGH);

  // Aguarda mais 1 segundo
  delay(1000);

}
