
int sensorGas = A0;
int buzzer = 6;

void setup() {
  pinMode(sensorGas, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorGas = analogRead(sensorGas);
  Serial.println(valorGas);

  if (valorGas < 500) {
    digitalWrite(buzzer, LOW);
  } else {
    Serial.println("Perigo! Detectando muito gás");
    digitalWrite(buzzer, HIGH);

  }

  delay(1000);
}