#include "temp.h"
#include "config.h"

int16_t temp_convert(uint16_t raw)
{
    if (g_config.hw_rev == HW_REV_A)
        return raw * 10;   // 1°C per digit
    else
        return raw;        // 0.1°C per digit
}

temp_state_t temp_evaluate(int16_t temp_x10)
{
    if (temp_x10 >= 1050 || temp_x10 < 50)
        return TEMP_CRIT;
    else if (temp_x10 >= 850)
        return TEMP_WARN;
    else
        return TEMP_OK;
}