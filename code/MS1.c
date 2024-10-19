
#include "led.h"




int main()
{
    init();

    for (;;)
    {
        set_color(0, 0, 0);
        sleep_ms(5000);

        set_color(1, 0, 0);
        sleep_ms(1000);

        set_color(0, 1, 0);
        sleep_ms(1000);

        set_color(0, 0, 1);
        sleep_ms(1000);

        set_color(1, 1, 1);
        sleep_ms(2000);
    }
}