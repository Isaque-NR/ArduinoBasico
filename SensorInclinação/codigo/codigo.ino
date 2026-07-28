int sensorInclinacao = 13; 
int buzzer = 6;

void setup(){

  pinMode(sensorInclinacao, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int valorInclinacao = digitalRead(sensorInclinacao);

  if (valorInclinacao == HIGH) {
    digitalWrite(buzzer,HIGH);
  } else {
    digitalWrite(buzzer,LOW);
  }

}
