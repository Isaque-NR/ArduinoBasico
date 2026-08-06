#include <Servo.h> // importando a biblioteca do servo motor 

int sensorInfra = 6; 
Servo servoMotor; // criando objeto Servo

void setup(){

  pinMode(sensorInfra, INPUT);
  servoMotor.attach(13); // associando meu objeto a porta 13 
  Serial.begin(9600);

}

void loop() {

  int valorInfra = digitalRead(sensorInfra); // lendo o valor digital que o sensor retorna
  Serial.print(valorInfra); // imprimindo o valor do sensor no monitor serial

  if (valorInfra == LOW) { // quando o sensor detectar um objeto, ele vai retornar 0 ou seja LOW

    Serial.println("Objeto Detectado.");
    servoMotor.write(0); // movimenta o serco motor para 0 graus, ou seja, fecha a porta
  } else { // senao, ou seja, detectou algo envia 1 

    Serial.println("Sem Objetos Detectados.");
    servoMotor.write(180); // movimenta o servo motor para 180 graus, ou seja, abre a porta
  }

}
