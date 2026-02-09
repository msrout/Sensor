#pragma once
#include <stdint.h>
#include <stdbool.h>

extern volatile uint16_t g_adc_raw;
extern volatile uint8_t bool  g_sample_ready;

void TIMER_ISR(void);