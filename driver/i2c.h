#pragma once
#include <stdint.h>

void i2c_init(void);
uint8_t i2c_read(uint16_t reg_addr);