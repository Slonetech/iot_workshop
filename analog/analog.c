#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"

#define POT 26

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
