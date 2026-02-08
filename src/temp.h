#pragma once
#include <stdint.h>

typedef enum {
    TEMP_OK,
    TEMP_WARN,
    TEMP_CRIT
} temp_state_t;

int16_t temp_convert(uint16_t raw);
temp_state_t temp_evaluate(int16_t temp_x10);