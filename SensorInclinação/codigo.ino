
int sensorInclinacao = 13; 
int buzzer = 6;

void setup(){

  pinMode(sensorInclinacao, INPUT); 
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int valorInclinacao = digitalRead(sensorInclinacao); // // Realiza a leitura digital do sensor (0 ou 1)
  Serial.println(valorInclinacao);

  if (valorInclinacao == HIGH) { // se 0 então a bolinha dentro do sensor fechou circuito mandando 0 
    digitalWrite(buzzer,HIGH); // liga buzzer teve inclinação
  } else { // senão, bolinha nao fechou circuito e manda 1 de sinal
    digitalWrite(buzzer,LOW);
  }

}
