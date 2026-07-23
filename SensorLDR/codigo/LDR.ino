int led = 9; 
int sensorLDR = A0;

void setup(){
  pinMode(sensorLDR, INPUT); 
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int valorLDR = analogRead(sensorLDR);
  Serial.println(valorLDR);

  if (valorLDR > 500){
    digitalWrite(led, HIGH); 
    Serial.println("Ambiente escuro. Luzes ligadas.");
  }
  else{
    digitalWrite(led, LOW);
    Serial.println("Ambiente claro. Luzes desligadas.");
  }

  delay(1000);
}
