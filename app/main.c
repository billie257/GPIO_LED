#include "board.h"
#include "driver_timer.h"

int main(void)
{	  
		board_lowlevel_init();
		
	  led_init(led1);
	  led_init(led2);		
	
		while(1)
		{
			for (int i = 0; i < 3; i++)
			{
				led_on(led1);
				led_on(led2);
				cpu_delay(200 * 1000);
				led_off(led1);
				led_off(led2);
				cpu_delay(200 * 1000);
			}
			for (int i = 0; i < 3; i++)
			{
				led_on(led1);
				led_on(led2);
				cpu_delay(800 * 1000);
				led_off(led1);
				led_off(led2);
				cpu_delay(800 * 1000);
			}
			for (int i = 0; i < 3; i++)
			{
				led_on(led1);
				led_on(led2);
				cpu_delay(200 * 1000);
				led_off(led1);
				led_off(led2);
				cpu_delay(200 * 1000);
			}
			cpu_delay(1000 * 1000);
		}
}
