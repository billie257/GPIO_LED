#include "main.h"

int main(void)
{		
	led_init(led1);
	led_init(led2);		

	while(1)
	{
		led_on(led1);
		led_on(led2);
		delay();

		led_off(led1);
		led_off(led2);
		delay();
	}
}
