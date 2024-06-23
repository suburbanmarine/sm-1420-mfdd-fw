/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AN_VOLT_FB_Pin GPIO_PIN_3
#define AN_VOLT_FB_GPIO_Port GPIOC
#define AN_GAIN_Pin GPIO_PIN_4
#define AN_GAIN_GPIO_Port GPIOA
#define AN_CURR_FB_Pin GPIO_PIN_6
#define AN_CURR_FB_GPIO_Port GPIOA
#define AN_CURR_REF_Pin GPIO_PIN_7
#define AN_CURR_REF_GPIO_Port GPIOA
#define AN_RX_P_Pin GPIO_PIN_4
#define AN_RX_P_GPIO_Port GPIOC
#define AN_RX_N_Pin GPIO_PIN_5
#define AN_RX_N_GPIO_Port GPIOC
#define AN_TRIMPOT_Pin GPIO_PIN_0
#define AN_TRIMPOT_GPIO_Port GPIOB
#define AN_RX_REF_Pin GPIO_PIN_1
#define AN_RX_REF_GPIO_Port GPIOB
#define EXT_DAC_nSYNC_Pin GPIO_PIN_14
#define EXT_DAC_nSYNC_GPIO_Port GPIOB
#define EN_TRANSDUCER_Pin GPIO_PIN_10
#define EN_TRANSDUCER_GPIO_Port GPIOD
#define USB_VBUS_DET_Pin GPIO_PIN_11
#define USB_VBUS_DET_GPIO_Port GPIOD
#define EN_HEADPHONE_Pin GPIO_PIN_13
#define EN_HEADPHONE_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
