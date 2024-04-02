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
void delay(unsigned int interval_ms);

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SEG1_A_Pin GPIO_PIN_4
#define SEG1_A_GPIO_Port GPIOA
#define SEG1_B_Pin GPIO_PIN_5
#define SEG1_B_GPIO_Port GPIOA
#define SEG1_C_Pin GPIO_PIN_6
#define SEG1_C_GPIO_Port GPIOA
#define SEG1_D_Pin GPIO_PIN_7
#define SEG1_D_GPIO_Port GPIOA
#define SEG2_A_Pin GPIO_PIN_0
#define SEG2_A_GPIO_Port GPIOB
#define SEG2_B_Pin GPIO_PIN_1
#define SEG2_B_GPIO_Port GPIOB
#define SEG2_C_Pin GPIO_PIN_2
#define SEG2_C_GPIO_Port GPIOB
#define SEG2_G_Pin GPIO_PIN_12
#define SEG2_G_GPIO_Port GPIOB
#define SEG2_F_Pin GPIO_PIN_13
#define SEG2_F_GPIO_Port GPIOB
#define SEG2_E_Pin GPIO_PIN_14
#define SEG2_E_GPIO_Port GPIOB
#define SEG2_D_Pin GPIO_PIN_15
#define SEG2_D_GPIO_Port GPIOB
#define SEG1_G_Pin GPIO_PIN_8
#define SEG1_G_GPIO_Port GPIOA
#define SEG1_F_Pin GPIO_PIN_9
#define SEG1_F_GPIO_Port GPIOA
#define SEG1_E_Pin GPIO_PIN_10
#define SEG1_E_GPIO_Port GPIOA
#define SEG3_UNU_Pin GPIO_PIN_15
#define SEG3_UNU_GPIO_Port GPIOA
#define SMILING_RED_GND_Pin GPIO_PIN_3
#define SMILING_RED_GND_GPIO_Port GPIOB
#define SMILING_GREEN_GND_Pin GPIO_PIN_4
#define SMILING_GREEN_GND_GPIO_Port GPIOB
#define RADAR_NRST_Pin GPIO_PIN_5
#define RADAR_NRST_GPIO_Port GPIOB
#define RADAR_INTR_Pin GPIO_PIN_6
#define RADAR_INTR_GPIO_Port GPIOB
#define SMILING_FACE_12V_Pin GPIO_PIN_7
#define SMILING_FACE_12V_GPIO_Port GPIOB
#define SEG_RED_Pin GPIO_PIN_8
#define SEG_RED_GPIO_Port GPIOB
#define SEG_GREEN_Pin GPIO_PIN_9
#define SEG_GREEN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
