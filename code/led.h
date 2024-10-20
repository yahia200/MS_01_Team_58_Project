#include <stdio.h>
#include "pico/stdlib.h"

#if !defined(R) || !defined(G) || !defined(B)
#define R 0
#define G 1
#define B 2
#endif

void init();
void set_color(int r, int g, int b);