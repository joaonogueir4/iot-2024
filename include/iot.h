#ifndef IOT_H
#define IOT_H

#include <Arduino.h>

// Funções para inicialização e operação do MQTT
void setup_wifi();
void reconnect();
//void publica_mqtt(const char* topic, const char* payload);
void callback(char* topic, byte* payload, unsigned int length);
void inicializa_mqtt();
void atualiza_mqtt();
void publica_mqtt(String topic, String msg);
#endif // IOT_H
