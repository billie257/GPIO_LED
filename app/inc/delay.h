#ifndef __DELAY_H__
#define __DELAY_H__


static void delay(unsigned int ticks)
{
    ticks *= 1000 * 1000u;
    while (ticks-- > 0) {
        __asm("nop");
    }
}

#endif /* __DELAY_H__ */

