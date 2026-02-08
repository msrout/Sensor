#pragma once
#include <stdint.h>

void i2c_init(void);
uint8_t i2c_read(uint8_t dev_addr, uint16_t reg_addr);
void i2c_write(uint8_t dev_addr, uint16_t reg_addr, uint8_t data);