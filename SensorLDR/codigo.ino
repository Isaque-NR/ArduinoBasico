int led = 3; 
int sensorLDR = 8;

void setup(){
  pinMode(sensorLDR, INPUT); 
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int valorLDR = digitalRead(sensorLDR); // lendo o valor que o sensor nos retorna
  Serial.println(valorLDR); // printa no monitor serial o valor do sensor

  if (valorLDR == HIGH){ // se o sensor retornou 1, ou seja, HIGH tem baixa luminosidade entao liga a luz 
    digitalWrite(led, HIGH); 
    Serial.println("Ambiente escuro. Luzes ligadas.");
  }
  else{ // senao o sensor retornou o, ou seja, LOW tem alta luminosidade entao desliga a luz 
    digitalWrite(led, LOW);
    Serial.println("Ambiente claro. Luzes desligadas.");
  }

  delay(1000);
}
