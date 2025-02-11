#include "pwm_servo.h"

void init_pwm(uint gpio) {
    gpio_set_function(gpio, GPIO_FUNC_PWM);
    uint slice_num = pwm_gpio_to_slice_num(gpio);
    pwm_set_wrap(slice_num, PWM_WRAP);
    pwm_set_clkdiv(slice_num, 125.0f);  // Define o divisor do clock para ajustar a frequência
    pwm_set_enabled(slice_num, true);
}

void set_servo_angle(uint gpio, uint16_t pulse_width) {
    pwm_setup(gpio, pulse_width);
}