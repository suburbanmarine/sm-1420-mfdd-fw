#include "cmsis_os.h"

extern "C" {
  extern int main_cube(void);

  void StartDefaultTask(void *argument)
  {
    {
      const osThreadAttr_t defaultTask_attributes = {
        .name = "mainTask",
        .stack_size = 256 * 4,
        .priority = (osPriority_t) osPriorityNormal1,
      };
      osThreadId_t id = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);
    }

    for(;;)
    {
      osDelay(pdMS_TO_TICKS(10));
    }
  }
}

#include <cstdint>

alignas(32) __attribute__((section(".user_ahb_sram_d2"))) uint16_t ext_dac_dma_buf[1024]; // AKA SPI2 TX buf
alignas(32) __attribute__((section(".user_ahb_sram_d1"))) volatile uint16_t adc1_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_sram_d1"))) volatile uint16_t adc2_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_sram_d1"))) volatile uint16_t adc3_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_sram_d2"))) uint8_t int_dac1_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_sram_d2"))) uint8_t int_dac2_dma_buf[1024];

alignas(32) __attribute__((section(".user_ahb_sram_d3"))) uint8_t usart3_tx_dma_buf[256];
alignas(32) __attribute__((section(".user_ahb_sram_d3"))) volatile uint8_t  usart3_rx_dma_buf[256];

int main(void)
{
  main_cube();
}
