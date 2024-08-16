
//Inicializa as saídas digitais
void inicializa_saidas();

//Atualiza as saídas digitais
void atualiza_saidas();

#include "DHTesp.h"  // Inclusão para usar o sensor DHT
#include <ESP32Servo.h> 

extern DHTesp dht;
extern Servo servo;


//Variavel que controla o LED da placa
extern bool LedBuiltInState;

//Varial que controla o LED externo
extern bool LedExternoState;

#include <Wire.h>
#include <Adafruit_SSD1306.h>

extern Adafruit_SSD1306 display;