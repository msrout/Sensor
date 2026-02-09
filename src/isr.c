#include "isr.h"
#include "../driver/adc.h"

volatile uint16_t g_adc_raw;
volatile uint8_t  g_sample_ready;

void TIMER_ISR(void)
{
    g_adc_raw = adc_read();
    g_sample_ready = true;
}