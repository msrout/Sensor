#include "config.h"
#include "../driver/eeprom.h"

system_config_t g_config;

void config_init(void)
{
    g_config.hw_rev = eeprom_read_hw_rev();
}