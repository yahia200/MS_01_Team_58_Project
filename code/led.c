#include "led.h"

void init()
{
    gpio_init(R);
    gpio_init(G);
    gpio_init(B);
    gpio_set_dir(R, GPIO_OUT);
    gpio_set_dir(G, GPIO_OUT);
    gpio_set_dir(B, GPIO_OUT);
    stdio_init_all();
}

void set_color(int r, int g, int b)
{
    gpio_put(R, r);
    gpio_put(G, g);
    gpio_put(B, b);
}