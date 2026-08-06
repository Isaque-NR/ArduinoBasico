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
  int valorPIR = digitalRead(sensorPIR); // lendo o valor que o sensor retorna 
  Serial.println(valorPIR); // pritando no monitor serial o valor do sensor 

  if (valorPIR == HIGH){ // se retornou 1, ou seja, HIGH o sensor detectou calor de movimento e tem algo se movendo
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    Serial.println("Ambiente com movimento");
  }
  else{ // senao retornou 0, ou seja, LOW o sensor não está detectando movimento
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    Serial.println("Ambiente sem movimento");
  }

  delay(1000);
}
