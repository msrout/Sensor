#include "adc.h"

void adc_init(void) {}

uint16_t adc_read(void)
{
    static uint16_t value = 400;

    value += 5;
    if (value > 1100)
        value = 300;

    return value;
}