#include <Arduino.h>
#include <Bounce2.h>
#include "entradas.h"
#include "saidas.h"

#define BOTAO_BOOT_PIN 0
#define BOTAO_EXTERNO_PIN 

Bounce botao_boot = Bounce();
Bounce botaoExterno;


void inicializa_entradas()
{
botao_boot.attach(BOTAO_BOOT_PIN, INPUT_PULLUP);
}

void atualiza_botoes()
{
    // Atualiza o estado do botão
    botao_boot.update();
}

bool botao_boot_pressionado()
 {
    return botao_boot.fell();
 }
 