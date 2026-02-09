#include "i2c.h"

/*
 * - Just returns fixed values
 */

void i2c_init(void)
{
}

uint8_t i2c_read(uuint16_t reg_addr)
{

    /* Fake EEPROM contents */
    if (reg_addr == 0x0000)
        return 1;       // HW_REV_B

    return 0;
}

