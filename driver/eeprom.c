#include "eeprom.h"
#include "i2c.h"

#define EEPROM_DEV_ADDR  0x50
#define EEPROM_HW_REV    0x0000

void eeprom_init(void)
{
    i2c_init();
}

hw_rev_t eeprom_read_hw_rev(void)
{
    uint8_t val = i2c_read(EEPROM_DEV_ADDR, EEPROM_HW_REV);
    return (val == 1) ? HW_REV_B : HW_REV_A;
}
