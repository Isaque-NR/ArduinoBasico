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
  int valorSolo = analogRead(sensorSolo);
  Serial.println(valorSolo);

  if (valorSolo < 500) {
    Serial.println("Solo seco - Irrigacao necessaria!");
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);

  } else {
    Serial.println("Solo umido - Nao precisa irrigar");
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);

  }

  delay(1000);
}