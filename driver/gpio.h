#pragma once
#include <stdint.h>

void gpio_init(void);
void gpio_write(uint8_t pin, uint8_t value);