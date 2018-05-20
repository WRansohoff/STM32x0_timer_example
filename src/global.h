#ifndef _VVC_GLOBAL_H
#define _VVC_GLOBAL_H

#include <stdio.h>

// Core includes.
#ifdef VVC_F0
  #include "stm32f0xx.h"
#elif VVC_L0
  #include "stm32l0xx.h"
#endif

// ----------------------
// Global variables and defines.
#define LED_PIN (3)
// (Core system clock speed; initial value depends on the chip.)
volatile uint32_t core_clock_hz;

#endif
