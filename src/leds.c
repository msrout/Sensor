#include <stdio.h>
#include "leds.h"
#include "../driver/gpio.h"

#define PIN_LED_G 1
#define PIN_LED_Y 2
#define PIN_LED_R 3

void leds_init(void)
{
    printf("LEDs initialized\n");
}

void leds_all_off(void)
{
    gpio_write(PIN_LED_G, 0);
    gpio_write(PIN_LED_Y, 0);
    gpio_write(PIN_LED_R, 0);
}

void leds_set(temp_state_t state)
{
    switch (state)
    {
        case TEMP_OK:
            //printf("LED: GREEN\n");
            gpio_write(PIN_LED_G, 1);
            break;
        case TEMP_WARN:
            //printf("LED: YELLOW\n");
            gpio_write(PIN_LED_Y, 1);
            break;
        case TEMP_CRIT:
            //printf("LED: RED\n");
            gpio_write(PIN_LED_R, 1);
            break;
    }
}