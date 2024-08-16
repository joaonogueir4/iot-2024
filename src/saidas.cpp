#include <Arduino.h>
#include "saidas.h"

//Definição dos pinos dos leds
#define LedBuiltInPin 2
#define LedExterno 16
#define LED_PIN_2 17


//Variaveis de controle dos leds
bool LedBuiltInState = LOW;
bool LedExternoState = LOW;
bool ledPin2State = LOW;


//Inicializa as saídas digitais
void inicializa_saidas()
{
    pinMode(LedBuiltInPin, OUTPUT);
    pinMode(LedExterno, OUTPUT);
    pinMode(LED_PIN_2, OUTPUT);
}

//Atualiza as saídas digitais
void atualiza_saidas()
{
    digitalWrite(LedBuiltInPin, LedBuiltInState);
    digitalWrite(LedExterno, LedExternoState);
    digitalWrite(LED_PIN_2, ledPin2State);
}