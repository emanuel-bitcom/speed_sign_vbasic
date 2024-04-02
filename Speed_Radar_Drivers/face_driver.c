/*
 * face_driver.c
 *
 *  Created on: Apr 2, 2024
 *      Author: dumit
 */
#include "face_driver.h"
#include "gpio.h"
#include "main.h"

void face_smile_on(){
	/*GNDs*/
	HAL_GPIO_WritePin(SMILING_GREEN_GND_GPIO_Port, SMILING_GREEN_GND_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SMILING_RED_GND_GPIO_Port, SMILING_RED_GND_Pin, GPIO_PIN_RESET);
	/*12V on*/
	HAL_GPIO_WritePin(SMILING_FACE_12V_GPIO_Port, SMILING_FACE_12V_Pin, GPIO_PIN_RESET);
}

void face_sad_on(){
	/*GNDs*/
	HAL_GPIO_WritePin(SMILING_GREEN_GND_GPIO_Port, SMILING_GREEN_GND_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SMILING_RED_GND_GPIO_Port, SMILING_RED_GND_Pin, GPIO_PIN_SET);
	/*12V on*/
	HAL_GPIO_WritePin(SMILING_FACE_12V_GPIO_Port, SMILING_FACE_12V_Pin, GPIO_PIN_RESET);
}

void face_off(){
	/*GNDs off*/
	HAL_GPIO_WritePin(SMILING_GREEN_GND_GPIO_Port, SMILING_GREEN_GND_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SMILING_RED_GND_GPIO_Port, SMILING_RED_GND_Pin, GPIO_PIN_RESET);
	/*12V off*/
	HAL_GPIO_WritePin(SMILING_FACE_12V_GPIO_Port, SMILING_FACE_12V_Pin, GPIO_PIN_SET);
}

