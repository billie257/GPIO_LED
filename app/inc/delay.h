#ifndef __DELAY_H__
#define __DELAY_H__

static void delay(void)
{
    for (unsigned int i = 0; i < 1000; i++)
    {
        for (unsigned int j = 0; j < 1000; j++)
        {
           __asm("nop");
           __asm("nop");
           __asm("nop");
           __asm("nop");
        }       
    }
}

#endif /* __DELAY_H__ */
