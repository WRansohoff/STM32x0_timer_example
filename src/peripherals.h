#ifndef _VVC_PERIPHS_H
#define _VVC_PERIPHS_H

#include "global.h"

/* Timer Peripherals */
void stop_timer(TIM_TypeDef *TIMx);
void start_timer(TIM_TypeDef *TIMx, uint16_t ms);

#endif
