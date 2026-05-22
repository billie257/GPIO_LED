#include "stm32f4xx.h"

// LED1: PF9
// LED2: PF10

#define LED1_PORT GPIOF
#define LED1_PIN  GPIO_Pin_9
#define LED2_PORT GPIOF
#define LED2_PIN  GPIO_Pin_10

void cpu_delay(void)
{
	uint32_t delay = 168*1000*100;
	for (uint32_t t = 0; t < delay; t++);
}

int main(void)
{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
		
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
	
		while(1)
		{
			GPIO_SetBits(LED1_PORT, LED1_PIN);
			GPIO_SetBits(LED2_PORT, LED2_PIN);
			cpu_delay();
			GPIO_ResetBits(LED1_PORT, LED1_PIN);
			GPIO_ResetBits(LED2_PORT, LED2_PIN);
			cpu_delay();
		}
}
