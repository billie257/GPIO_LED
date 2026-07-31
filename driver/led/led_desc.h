#ifndef __LED_DESC_H__
#define __LED_DESC_H__

#include "stm32f4xx.h"

struct led_desc
{
    uint32_t clk;	
	GPIO_TypeDef* port;
	uint16_t pin;
	BitAction on_bit;
	BitAction off_bit;
};

#endif /*__LED_DESC_H__ */
