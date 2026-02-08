#pragma once
#include "../src/config.h"

void eeprom_init(void);
hw_rev_t eeprom_read_hw_rev(void);