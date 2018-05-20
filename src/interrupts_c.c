#include "interrupts_c.h"

// C-language hardware interrupt method definitions.
void TIM2_IRQ_handler(void) {
  // Handle a timer 'update' interrupt event
  if (TIM2->SR & TIM_SR_UIF) {
    TIM2->SR &= ~(TIM_SR_UIF);
    GPIOB->ODR ^= (1 << LED_PIN);
  }
}
