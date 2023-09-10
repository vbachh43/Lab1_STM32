/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_Pin GPIO_PIN_1
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_2
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_Pin GPIO_PIN_3
#define LED_GREEN_GPIO_Port GPIOA
#define LED_REDA5_Pin GPIO_PIN_5
#define LED_REDA5_GPIO_Port GPIOA
#define LED_YELLOWA6_Pin GPIO_PIN_6
#define LED_YELLOWA6_GPIO_Port GPIOA
#define LED_GREENA7_Pin GPIO_PIN_7
#define LED_GREENA7_GPIO_Port GPIOA
#define Red_a_Pin GPIO_PIN_0
#define Red_a_GPIO_Port GPIOB
#define Red_b_Pin GPIO_PIN_1
#define Red_b_GPIO_Port GPIOB
#define Red_c_Pin GPIO_PIN_2
#define Red_c_GPIO_Port GPIOB
#define Green_b_Pin GPIO_PIN_10
#define Green_b_GPIO_Port GPIOB
#define Green_c_Pin GPIO_PIN_11
#define Green_c_GPIO_Port GPIOB
#define Green_d_Pin GPIO_PIN_12
#define Green_d_GPIO_Port GPIOB
#define Green_e_Pin GPIO_PIN_13
#define Green_e_GPIO_Port GPIOB
#define Green_f_Pin GPIO_PIN_14
#define Green_f_GPIO_Port GPIOB
#define Green_g_Pin GPIO_PIN_15
#define Green_g_GPIO_Port GPIOB
#define Yellow_f_Pin GPIO_PIN_14
#define Yellow_f_GPIO_Port GPIOA
#define Yellow_g_Pin GPIO_PIN_15
#define Yellow_g_GPIO_Port GPIOA
#define Red_d_Pin GPIO_PIN_3
#define Red_d_GPIO_Port GPIOB
#define Red_e_Pin GPIO_PIN_4
#define Red_e_GPIO_Port GPIOB
#define Red_f_Pin GPIO_PIN_5
#define Red_f_GPIO_Port GPIOB
#define Red_g_Pin GPIO_PIN_6
#define Red_g_GPIO_Port GPIOB
#define Green_a_Pin GPIO_PIN_9
#define Green_a_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
