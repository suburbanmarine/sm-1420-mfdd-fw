#include "MetalDetector.hpp"

alignas(32) __attribute__((section(".user_ahb_d2_sram2"))) uint16_t ext_dac_dma_buf[1024]; // AKA SPI2 TX buf
alignas(32) __attribute__((section(".user_ahb_d2_sram1"))) volatile uint16_t adc1_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_d2_sram1"))) volatile uint16_t adc2_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_d2_sram1"))) volatile uint16_t adc3_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_d2_sram2"))) uint8_t int_dac1_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_d2_sram2"))) uint8_t int_dac2_dma_buf[1024];
alignas(32) __attribute__((section(".user_ahb_d2_sram3"))) uint8_t usart3_tx_dma_buf[256];
alignas(32) __attribute__((section(".user_ahb_d2_sram3"))) volatile uint8_t usart3_rx_dma_buf[256];

alignas(32) __attribute__((section(".user_axi_flash2"))) uint16_t ext_dac_dma_flash_buf[1024];
