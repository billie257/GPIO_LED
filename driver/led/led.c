#include <stdbool.h>
#include <stdlib.h>
#include "led_desc.h"
#include "led.h"

void led_init(led_desc_t led)
{
	if (led == NULL)
		return;
	RCC_AHB1PeriphClockCmd(led->clk, ENABLE);
	
	GPIO_InitTypeDef  GPIO_InitStructure;
	GPIO_StructInit(&GPIO_InitStructure);	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;	
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_Pin = led->pin;
	GPIO_Init(led->port, &GPIO_InitStructure);	
	GPIO_WriteBit(led->port, led->pin, led->off_bit);
}

void led_set(led_desc_t led, bool onoff)
{
	if (led == NULL)
		return;
	GPIO_WriteBit(led->port, led->pin, onoff ? led->on_bit : led->off_bit);	 
}

void led_on(led_desc_t led)
{
	if (led == NULL)
		return;
	GPIO_WriteBit(led->port, led->pin, led->on_bit);	
}

void led_off(led_desc_t led)
{
	if (led == NULL)
		return;
	GPIO_WriteBit(led->port, led->pin, led->off_bit);	
}
