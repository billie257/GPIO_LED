#ifndef __BOARD_H__
#define __BOARD_H__

#include "led.h"

void board_lowlevel_init(void);

extern led_desc_t led1;
extern led_desc_t led2;

#endif /* __BOARD_H__ */
