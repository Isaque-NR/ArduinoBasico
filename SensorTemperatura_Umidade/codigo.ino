#include <Adafruit_Sensor.h>                       // Biblioteca DHT Sensor Adafruit 

#include <DHT.h>

#include <DHT_U.h>


// selecione um sensor, retirando o comentário - duas barras

#define DHTTYPE    DHT11                           // Sensor DHT11

//#define DHTTYPE      DHT22                       // Sensor DHT22 ou AM2302


#define DHTPIN 2                                   // Pino do Arduino conectado no Sensor(Data) 

DHT_Unified dht(DHTPIN, DHTTYPE);                  // configurando o Sensor DHT - pino e tipo

uint32_t delayMS;                                  // variável para atraso no tempo

const int LedVerde = 13;
const int LedVermelho = 12;

void setup()

{

  Serial.begin(9600);
  pinMode(LedVerde,OUTPUT);                      
  pinMode(LedVermelho,OUTPUT); 

  dht.begin();                                    // inicializa a função

  Serial.println("Usando o Sensor DHT");

  sensor_t sensor;

  dht.temperature().getSensor(&sensor);           // imprime os detalhes do Sensor de Temperatura

  Serial.println("------------------------------------");

  Serial.println("Temperatura");

  Serial.print  ("Sensor:       "); Serial.println(sensor.name);

  Serial.print  ("Valor max:    "); Serial.print(sensor.max_value); Serial.println(" *C");

  Serial.print  ("Valor min:    "); Serial.print(sensor.min_value); Serial.println(" *C");

  Serial.print  ("Resolucao:   "); Serial.print(sensor.resolution); Serial.println(" *C");

  Serial.println("------------------------------------");

  delayMS = sensor.min_delay / 1000;            // define o atraso entre as leituras

}


void loop()

{

  delay(delayMS);                               // atraso entre as medições

  sensors_event_t event;                        // inicializa o evento da Temperatura

  dht.temperature().getEvent(&event);           // faz a leitura da Temperatura

  if (isnan(event.temperature))                 // se algum erro na leitura

  {

    Serial.println("Erro na leitura da Temperatura!");

  }

  else                                          // senão

  {

    Serial.print("Temperatura: ");              // imprime a Temperatura

    Serial.print(event.temperature);

    Serial.println(" *C");

  }

  if ( float t = event.temperature >= 30.0){
   
   digitalWrite(LedVermelho, HIGH);
   digitalWrite(LedVerde, LOW);
  }else{
   digitalWrite(LedVermelho, LOW);
   digitalWrite(LedVerde, HIGH);
   
  }

}


