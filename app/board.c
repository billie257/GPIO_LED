#include "stm32f4xx.h"
#include "led_desc.h"
#include "led.h"

// LED1: PF9
// LED2: PF10

static struct led_desc led1_desc = {GPIOF, GPIO_Pin_9, Bit_RESET, Bit_SET};
static struct led_desc led2_desc = {GPIOF, GPIO_Pin_10, Bit_RESET, Bit_SET};

led_desc_t led1 = &led1_desc;
led_desc_t led2 = &led2_desc;

void board_lowlevel_init(void)
{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);	
}
