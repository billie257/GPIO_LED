#include "delay.h"
#include "led_desc.h"
#include "led.h"

static struct led_desc led1_desc = 
{
	RCC_AHB1Periph_GPIOF,
	GPIOF,
	GPIO_Pin_9,
	Bit_SET,
	Bit_RESET
};

static struct led_desc led2_desc = {
	RCC_AHB1Periph_GPIOF,
	GPIOF,
	GPIO_Pin_10,
	Bit_SET,
	Bit_RESET
};

const led_desc_t led1 = &led1_desc;
const led_desc_t led2 = &led2_desc;

