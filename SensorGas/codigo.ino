
int sensorGas = A0;
int buzzer = 6;

void setup() {
  pinMode(sensorGas, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorGas = analogRead(sensorGas);   // Realiza a leitura analógica do sensor (0 a 1023)
  Serial.println(valorGas);   // Exibe o valor lido no Monitor Serial
 
  if (valorGas < 500) { // Verifica se a concentração de gás ultrapassou o limite definido
    digitalWrite(buzzer, LOW);
  } else { // senão, concentração de gás acima do limite
    Serial.println("Perigo! Detectando muito gás");
    digitalWrite(buzzer, HIGH); // liga buzzer

  }

  delay(1000);
}
