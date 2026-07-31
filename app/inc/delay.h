#ifndef __DELAY_H__
#define __DELAY_H__

#include <stdint.h>

static void delay(volatile uint32_t ticks)
{
    ticks *= 10;
    while (ticks--)
    {
        __asm("nop");
    }
}

#endif /* __DELAY_H__ */
