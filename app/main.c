#include "board.h"

#define PERIOD 100

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
	
		int led1_duty = 0.2*PERIOD, led1_inc = 1;
		int led2_duty = 0.8*PERIOD, led2_inc = 1;	
	
		while(1)
		{	
				for (int t = 0; t < 100; t++)
				{
					for (int i = 0; i < PERIOD; i++)
					{			
							if (i < led1_duty)  led_on(led1); else led_off(led1);
							if (i < led2_duty)  led_on(led2); else led_off(led2);						
					}			
				}	
				led1_duty += led1_inc; 
				led2_duty += led2_inc; 			
				
				if (led1_duty >= PERIOD || led1_duty <= 0) led1_inc = -led1_inc;
				if (led2_duty >= PERIOD || led2_duty <= 0) led2_inc = -led2_inc;
		}
		
}
