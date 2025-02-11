#include <stdio.h>
#include "pico/stdlib.h"
#include "pwm_servo.h"

int main() {
    stdio_init_all();

    // Inicializa o PWM para o servo
    init_pwm(SERVO_PIN);

    while (1) {
        // Posição 180 graus
        set_servo_angle(SERVO_PIN, 2400);
        sleep_ms(5000);

        set_servo_angle(SERVO_PIN, 1470);
        sleep_ms(5000);
    }
}