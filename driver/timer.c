#include "timer.h"
#include "../src/isr.h"

void timer_init(void) {}

void timer_tick(void)
{
    TIMER_ISR();
}