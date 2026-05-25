#include "board.h"

void cpu_delay(void)
{
	uint32_t delay = 168*1000*100;
	for (uint32_t t = 0; t < delay; t++) { ; }
}

int main(void)
{
		board_lowlevel_init();
		
		led_init(led1);
		led_init(led2);
	
		while(1)
		{			
				led_on(led1);
				cpu_delay();
				led_off(led1);
			  led_on(led2);
				cpu_delay();
				led_off(led2);						
		}
}
