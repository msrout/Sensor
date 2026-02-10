#include "gpio.h"
#include <stdio.h>

void gpio_init(void) {}
void gpio_write(uint8_t pin, uint8_t value)
{
    printf("[GPIO] pin %d -> %s\n", pin, value ? "ON" : "OFF");
}