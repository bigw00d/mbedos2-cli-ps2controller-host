#include "mbed.h"

DigitalOut led(LED1);

int main()
{
    printf("hello, Mbed.\n");
    while (1) {
        led = !led;
        wait(0.5);
    }
}
