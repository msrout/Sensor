#pragma once

typedef enum {
    HW_REV_A = 0,
    HW_REV_B = 1
} hw_rev_t;

typedef struct {
    hw_rev_t hw_rev;
} system_config_t;

extern system_config_t g_config;

void config_init(void);