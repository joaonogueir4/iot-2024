#include <ESP32Servo.h>

#define SERVO_PIN 5
Servo servoMotor;

void inicializa_servos() {
    // Configura o pino do servo motor
    servoMotor.attach(SERVO_PIN, 500, 2500);
}

void posiciona_servo(int angulo) {
    servoMotor.write(angulo);
}
