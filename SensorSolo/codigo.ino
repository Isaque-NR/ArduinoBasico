int sensorSolo = A0;
int ledVerde = 13;
int ledVermelho = 12;

void setup() {
  pinMode(sensorSolo, INPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorSolo = analogRead(sensorSolo); // lendo o valor analogico que o sensor de solo nos retorna
  Serial.println(valorSolo); // printando esse valor no serial monitor

  if (valorSolo < 500) { // Valor de baixa umidade no solo
    Serial.println("Solo seco - Irrigacao necessaria!");
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);

  } else { // senao, ou seja, tem um valor com boa umidade
    Serial.println("Solo umido - Nao precisa irrigar");
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);

  }

  delay(1000);
}
