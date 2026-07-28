#include <Servo.h> // importando a biblioteca do servo motor 

int sensorInfra = 6; 
Servo servoMotor; // criando objeto Servo

void setup(){

  pinMode(sensorInfra, INPUT);
  servoMotor.attach(13); // associando meu objeto a porta 13 
  Serial.begin(9600);

}

void loop() {

  int valorInfra = digitalRead(sensorInfra);

  if (valorInfra == LOW) {

    Serial.println("Objeto Detectado.");
    servoMotor.write(0);
  } else {

    Serial.println("Sem Objetos Detectados.");
    servoMotor.write(180);
  }

}
