#include <stdbool.h>
#include "stm32f4xx.h"

// LED1: PF9
// LED2: PF10

#define LED1_PORT GPIOF
#define LED1_PIN  GPIO_Pin_9
#define LED2_PORT GPIOF
#define LED2_PIN  GPIO_Pin_10

void led_init(void)
{
		GPIO_InitTypeDef  GPIO_InitStructure;
		GPIO_StructInit(&GPIO_InitStructure);	
		
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
		GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
		GPIO_InitStructure.GPIO_Speed = GPIO_High_Speed;
		GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	
		GPIO_InitStructure.GPIO_Pin = LED1_PIN;
		GPIO_Init(LED1_PORT, &GPIO_InitStructure);
	
		GPIO_InitStructure.GPIO_Pin = LED2_PIN;
		GPIO_Init(LED2_PORT, &GPIO_InitStructure);
}

void led_set(uint8_t idx, bool onoff)
{
	  switch (idx)
		{
			case 1:
				GPIO_WriteBit(LED1_PORT, LED1_PIN, onoff ? Bit_RESET : Bit_SET);
				break;
			case 2:
				GPIO_WriteBit(LED2_PORT, LED2_PIN, onoff ? Bit_RESET : Bit_SET);
				break;
			default:
				break;
		}
}

void led_on(uint8_t idx)
{
		led_set(idx, true);
}

void led_off(uint8_t idx)
{
		led_set(idx, false);
}

void led_all_off(void)
{
		led_off(1);
		led_off(2);
}
