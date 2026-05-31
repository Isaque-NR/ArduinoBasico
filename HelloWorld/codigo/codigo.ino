// Hello World do Mundo dos Microcontroladres
// Codigo Piscar Leds 
// definindo as constantes dos pinos referentes aos leds 
const int ledVermelho = 2;
const int ledVerde = 3; 

void setup() {
  pinMode(ledVermelho, OUTPUT); // definindo o pino como saida 
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600); // iniciando a comunicacao serial do arduino baud rate - 9600 bits/s
  Serial.print("Hello World!"); 
}

void loop() {
   
  digitalWrite(ledVermelho,HIGH); /// envia 5V 
  digitalWrite(ledVerde,LOW); // envia 0V
  delay(1000);
  digitalWrite(ledVermelho,LOW);
  digitalWrite(ledVerde,HIGH);
  delay(1000);
}
