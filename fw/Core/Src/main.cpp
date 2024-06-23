#include "main.h"
#include "cmsis_os.h"

#include "MetalDetector.hpp"

extern "C" {
  extern int main_cube(void);

  void StartDefaultTask(void *argument)
  {
    // {
    //   const osThreadAttr_t defaultTask_attributes = {
    //     .name = "mainTask",
    //     .stack_size = 256 * 4,
    //     .priority = (osPriority_t) osPriorityNormal1,
    //   };
    //   osThreadId_t id = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);
    // }

    void volatile * volatile keep_foo;
    keep_foo = &ext_dac_dma_buf;
    keep_foo = &adc1_dma_buf;
    keep_foo = &adc2_dma_buf;
    keep_foo = &adc3_dma_buf;
    keep_foo = &int_dac1_dma_buf;
    keep_foo = &int_dac2_dma_buf;
    keep_foo = &usart3_tx_dma_buf;
    keep_foo = &usart3_rx_dma_buf;
    keep_foo = &ext_dac_dma_flash_buf;

    for(;;)
    {
      HAL_DMAEx_ConfigMuxSync
      HAL_StatusTypeDef ret = HAL_SPI_Transmit_DMA(hspi2, &ext_dac_dma_buf, 6400*sizeof(ext_dac_dma_buf[0]));

      osDelay(pdMS_TO_TICKS(500));
    }
  }
}

int main(void)
{
  main_cube();
}
