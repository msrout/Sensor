#include <stdio.h>
#include <unistd.h>   // usleep

#include "system.h"
#include "config.h"
#include "app.h"
#include "../driver/timer.h"

int main(void)
{
    system_init();
    config_init();
    app_init();

    printf("PC demo started (100 us loop simulated)\n");

    while (1)
    {
        timer_tick();     // simulate timer interrupt
        app_task();       // main loop logic
        usleep(100);      // ~100 µs
    }

    return 0;
}