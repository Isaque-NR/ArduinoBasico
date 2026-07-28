int ledVermelho = 3;
int ledVerde = 2;
int sensorPIR = 8;



void setup(){
  pinMode(sensorPIR, INPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int valorPIR = digitalRead(sensorPIR);
  Serial.println(valorPIR);

  if (valorPIR == HIGH){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    Serial.println("Ambiente com movimento");
  }
  else{
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    Serial.println("Ambiente sem movimento");
  }

  delay(1000);
}
