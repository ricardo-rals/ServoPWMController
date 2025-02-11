#include "pwm_servo.h"

void pwm_setup(uint gpio, uint16_t pulse_width) {
    uint slice_num = pwm_gpio_to_slice_num(gpio);
    uint channel = pwm_gpio_to_channel(gpio);
    uint16_t level = (pulse_width * PWM_WRAP) / 20000;
    pwm_set_chan_level(slice_num, channel, level);
}

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