#include "app.h"
#include "isr.h"
#include "temp.h"
#include "leds.h"

void app_init(void)
{
    leds_init();
}

void app_task(void)
{
    if (g_sample_ready)
    {
        g_sample_ready = false;

        int16_t temp_x10 = temp_convert(g_adc_raw);
        temp_state_t state = temp_evaluate(temp_x10);

        leds_set(state);
    }
}