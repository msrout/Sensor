#include <stdio.h>
#include "leds.h"

void leds_init(void)
{
    printf("LEDs initialized\n");
}

void leds_set(temp_state_t state)
{
    switch (state)
    {
        case TEMP_OK:
            printf("LED: GREEN\n");
            break;
        case TEMP_WARN:
            printf("LED: YELLOW\n");
            break;
        case TEMP_CRIT:
            printf("LED: RED\n");
            break;
    }
}