#include "system.h"
#include "../driver/gpio.h"
#include "../driver/adc.h"
#include "../driver/timer.h"
#include "../driver/eeprom.h"
#include "../driver/i2c.h"

void system_init(void)
{
    gpio_init();
    adc_init();
    timer_init();
    i2c_init();
    eeprom_init();
}