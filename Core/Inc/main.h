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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "z_displ_ILI9XXX.h"
#include "z_touch_XPT2046.h"
#include <stdbool.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
extern int count1;
extern bool state;
extern TIM_HandleTypeDef htim2;
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
#define ADC_Pin_Pin GPIO_PIN_0
#define ADC_Pin_GPIO_Port GPIOC
#define ADC_VR_ESC_Pin GPIO_PIN_1
#define ADC_VR_ESC_GPIO_Port GPIOC
#define JOY1_X_Pin GPIO_PIN_1
#define JOY1_X_GPIO_Port GPIOA
#define JOY1_Y_Pin GPIO_PIN_2
#define JOY1_Y_GPIO_Port GPIOA
#define JOY2_X_Pin GPIO_PIN_3
#define JOY2_X_GPIO_Port GPIOA
#define JOY2_Y_Pin GPIO_PIN_4
#define JOY2_Y_GPIO_Port GPIOA
#define DISPL_SCK_Pin GPIO_PIN_5
#define DISPL_SCK_GPIO_Port GPIOA
#define TOUCH_MISO_Pin GPIO_PIN_6
#define TOUCH_MISO_GPIO_Port GPIOA
#define DISPL_MOSI_Pin GPIO_PIN_7
#define DISPL_MOSI_GPIO_Port GPIOA
#define TOUCH_INT_Pin GPIO_PIN_4
#define TOUCH_INT_GPIO_Port GPIOC
#define TOUCH_INT_EXTI_IRQn EXTI4_IRQn
#define DISPL_RST_Pin GPIO_PIN_5
#define DISPL_RST_GPIO_Port GPIOC
#define DISPL_CS_Pin GPIO_PIN_0
#define DISPL_CS_GPIO_Port GPIOB
#define TOUCH_CS_Pin GPIO_PIN_1
#define TOUCH_CS_GPIO_Port GPIOB
#define DISPL_DC_Pin GPIO_PIN_2
#define DISPL_DC_GPIO_Port GPIOB
#define RF_SCK_Pin GPIO_PIN_10
#define RF_SCK_GPIO_Port GPIOB
#define RF_CSN_Pin GPIO_PIN_12
#define RF_CSN_GPIO_Port GPIOB
#define RF_CE_Pin GPIO_PIN_13
#define RF_CE_GPIO_Port GPIOB
#define RF_MISO_Pin GPIO_PIN_14
#define RF_MISO_GPIO_Port GPIOB
#define RF_MOSI_Pin GPIO_PIN_15
#define RF_MOSI_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_12
#define LED1_GPIO_Port GPIOD
#define LED2_Pin GPIO_PIN_13
#define LED2_GPIO_Port GPIOD
#define LED3_Pin GPIO_PIN_14
#define LED3_GPIO_Port GPIOD
#define LED4_Pin GPIO_PIN_15
#define LED4_GPIO_Port GPIOD
#define DISPL_LED_Pin GPIO_PIN_7
#define DISPL_LED_GPIO_Port GPIOC
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define SD_CLK_Pin GPIO_PIN_10
#define SD_CLK_GPIO_Port GPIOC
#define SD_MISO_Pin GPIO_PIN_11
#define SD_MISO_GPIO_Port GPIOC
#define SD_MOSI_Pin GPIO_PIN_12
#define SD_MOSI_GPIO_Port GPIOC
#define SD_CS_Pin GPIO_PIN_0
#define SD_CS_GPIO_Port GPIOD
#define Audio_PWM_Pin GPIO_PIN_6
#define Audio_PWM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
