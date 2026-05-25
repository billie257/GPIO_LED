#include "board.h"

#define PERIOD 1000

void cpu_delay(void)
{
	uint32_t delay = 168*1000*100;
	for (uint32_t t = 0; t < delay; t++) { ; }
}

void led_breath(int duty, int time)
{
	for (int t = 0; t < time; t++)
	{
		led_on(led1);
		led_on(led2);
		for (int i = 0; i < duty; i++);
		led_off(led1);
		led_off(led2);
		for (int i = duty; i < PERIOD; i++);
	}
}

int main(void)
{
		board_lowlevel_init();
		
		led_init(led1);
		led_init(led2);
	
		while(1)
		{			
			for (int d = 0; d < PERIOD; d++)
			{			
					led_breath(d, 50);
			}	
			for (int d = PERIOD; d > 0; d--)
			{
					led_breath(d, 50);
			}			
		}
}
