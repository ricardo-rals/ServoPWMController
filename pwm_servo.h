#ifndef PWM_SERVO_H
#define PWM_SERVO_H

#include "pico/stdlib.h"
#include "hardware/pwm.h"

// Definição dos pinos utilizados
#define SERVO_PIN  22  // Pino ao qual o servo motor está conectado
#define PWM_FREQ   50  // Frequência do PWM (50Hz, comum para servos)
#define PWM_WRAP   20000  // Valor máximo do contador do PWM (período do sinal)

// Protótipos das funções

void init_pwm(uint gpio);

#endif 