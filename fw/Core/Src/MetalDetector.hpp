#pragma once

#include <cstdint>

extern uint16_t ext_dac_dma_buf[6400]; // AKA SPI2 TX buf
extern volatile uint16_t adc1_dma_buf[16000];
extern volatile uint16_t adc2_dma_buf[16000];
extern volatile uint16_t adc3_dma_buf[16000];
extern uint8_t int_dac1_dma_buf[6400];
extern uint8_t int_dac2_dma_buf[6400];

extern uint8_t usart3_tx_dma_buf[256];
extern volatile uint8_t usart3_rx_dma_buf[256];

extern uint16_t ext_dac_dma_flash_buf[1024]; // AKA SPI2 TX buf
