#include <stdbool.h>
#include "stm32f4xx.h"
#include "led.h"

void cpu_delay(void)
{
	uint32_t delay = 168*1000*100;
	for (uint32_t t = 0; t < delay; t++) { ; }
}

int main(void)
{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
		
		led_init();
	
		led_all_off();
	
		while(1)
		{
			for (uint8_t i = 1; i <= 2; i++)
			{
				led_on(i);
				cpu_delay();
				led_off(i);
			}			
		}
}
