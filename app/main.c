#include "main.h"

#define PERIOD 1000


void led_breath(uint32_t duty)
{
	if (duty > 0)
	{
		led_on(led1);
		led_on(led2);
		delay(duty);
	}
	if (duty < PERIOD)
	{
		led_off(led1);
		led_off(led2);
		delay(PERIOD - duty);
	}
}

int main(void)
{
	led_init(led1);
	led_init(led2);

	while(1)
	{			
		for (int d = 0; d < PERIOD; d+=10)
		{			
			for (int t = 0; t < 10; t++)
			{
				led_breath(d);
			}
		}	
		for (int d = PERIOD; d >= 0; d-=10)
		{
			for (int t = 0; t < 10; t++)
			{
				led_breath(d);
			}
		}			
	}
}
