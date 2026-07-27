int trig = 7;   
int echo = 6;  
int ledVerde = 13;    
int ledBranco = 12;  
int ledLaranja = 11;  
int ledVermelho = 10;   

void setup() {
  pinMode(trig, OUTPUT );   // TRIGGER envia sinal SAIDA
  pinMode(echo, INPUT);   // ECHO recebe sinal ENTRADA
  pinMode(ledVerde, OUTPUT); 
  pinMode(ledVermelho,OUTPUT ); 
  pinMode(ledBranco,OUTPUT ); 
  pinMode(ledLaranja,OUTPUT ); 
  Serial.begin(9600);      
}

void loop() {

  // Envia um pulso de som pelo sensor
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  // Mede o tempo que o som demorou para ir e voltar
  long tempo = pulseIn(echo, HIGH); // pulseIn espera o pino sair de LOW para HIGH, temporiza o pino sair de HIGH para LOW e para de temporizar 

  // Transformando o tempo em distância:
  // O som vai e volta, por isso dividimos
  // Use o número 58 para converter em centímetros
  long distancia = tempo / 58;

Serial.println(distancia);   // Mostra a distância no monitor serial

if (distancia < 10) {
  // Muito perto
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledBranco, LOW);
  digitalWrite(ledLaranja, LOW);
  digitalWrite(ledVerde, LOW);

  Serial.println("Objeto muito perto");

} else if (distancia < 15) {
  // Perto
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledBranco, LOW);
  digitalWrite(ledLaranja, HIGH);
  digitalWrite(ledVerde, LOW);

  Serial.println("Objeto perto");

} else if (distancia < 20) {
  // Distância média
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledBranco, HIGH);
  digitalWrite(ledLaranja, LOW);
  digitalWrite(ledVerde, LOW);

  Serial.println("Objeto a media distancia");

} else {
  // Longe
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledBranco, LOW);
  digitalWrite(ledLaranja, LOW);
  digitalWrite(ledVerde, HIGH);

  Serial.println("Objeto distante.");
}
  delay(1000); // Pequena pausa para evitar leituras muito rápidas
}

