int led = 3; 
int sensorLDR = 8;

void setup(){
  pinMode(sensorLDR, INPUT); 
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int valorLDR = digitalRead(sensorLDR);
  Serial.println(valorLDR);

  if (valorLDR == HIGH){
    digitalWrite(led, HIGH); 
    Serial.println("Ambiente escuro. Luzes ligadas.");
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("Ambiente claro. Luzes desligadas.");
  }

  delay(1000);
}
