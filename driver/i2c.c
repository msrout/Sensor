#include "i2c.h"

/*
 * - Just returns fixed values
 */

void i2c_init(void)
{
}

uint8_t i2c_read(uint8_t dev_addr, uint16_t reg_addr)
{
    (void)dev_addr;

    /* Fake EEPROM contents */
    if (reg_addr == 0x0000)
        return 1;       // HW_REV_B

    return 0;
}

void i2c_write(uint8_t dev_addr, uint16_t reg_addr, uint8_t data)
{
    (void)dev_addr;
    (void)reg_addr;
    (void)data;
}