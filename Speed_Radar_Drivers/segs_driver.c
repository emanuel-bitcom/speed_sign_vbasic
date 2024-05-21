/*
 * segs_driver.c
 *
 *  Created on: Apr 2, 2024
 *      Author: dumit
 */
#include "segs_driver.h"
#include "main.h"
#include "gpio.h"

#define LEVEL_HIGH 1
#define LEVEL_LOW 0

void display_seg_red_on(){
	HAL_GPIO_WritePin(SEG_RED_GPIO_Port, SEG_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG_GREEN_GPIO_Port, SEG_GREEN_Pin, GPIO_PIN_RESET);
}

void display_seg_green_on(){
	HAL_GPIO_WritePin(SEG_RED_GPIO_Port, SEG_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SEG_GREEN_GPIO_Port, SEG_GREEN_Pin, GPIO_PIN_SET);
}

void display_seg_power_off(){
	HAL_GPIO_WritePin(SEG_RED_GPIO_Port, SEG_RED_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(SEG_GREEN_GPIO_Port, SEG_GREEN_Pin, GPIO_PIN_SET);
}

void display_seg_on_segment(uint8_t nr_seg, char digit){
	switch(digit){
	case 0:
		if(nr_seg==1)
	  	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH); //A
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH); //B
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH); //D
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_HIGH); //E
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_HIGH); //F
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_LOW); //G
	  	  }
		else if(nr_seg==2)
		  {
	  	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_LOW);
		  };
	  	break;

	case 1:
		if(nr_seg==1)
	  	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_LOW);
	  	  }
		else if(nr_seg==2)
	  		{
	  		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_LOW);
	  		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
	  		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
	  		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_LOW);
	  		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
	  		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_LOW);
	  		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_LOW);
	  		};
	  	break;
	case 2:
		if(nr_seg==1)
	  	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_HIGH);
	  	  }
		else if(nr_seg==2)
		  	{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
		  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
		  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_LOW);
		  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_HIGH);
		  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_HIGH);
		  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_LOW);
		  	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_HIGH);
		  	};
	  	 break;
	case 3:
		if(nr_seg==1)
	  	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_LOW);
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_HIGH);
	  	  }
		else if(nr_seg==2)
			{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_HIGH);
			};
	  	break;
	case 4:
		if(nr_seg==1)
	  	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_LOW); //A
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH); //B
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_LOW); //D
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_LOW); //E
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_HIGH); //F
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_HIGH); //G
	  	  }
		else if(nr_seg==2)
			{
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_HIGH);
			};
	  	break;
	case 5:
		if(nr_seg==1)
		{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH); //A
	  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_LOW); //B
	  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
	  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH); //D
	  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_LOW); //E
	  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_HIGH); //F
	  	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_HIGH); //G
	  	}
		else if(nr_seg==2)
		{
	    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_HIGH);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_HIGH);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_HIGH);
		};
	  	  break;
	case 6:
		if(nr_seg==1)
	  	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH); //A
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_LOW); //B
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH); //D
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_HIGH); //E
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_HIGH); //F
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_HIGH); //G
	  	  }
		else if(nr_seg==2)
		  {
		   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
		   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_LOW);
		   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
		   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_HIGH);
		   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_HIGH);
		   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_HIGH);
		   HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_HIGH);
		  };
	  	  break;
	case 7:
		if(nr_seg==1)
		{
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH); //A
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH); //B
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_LOW); //D
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_LOW); //E
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_LOW); //F
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_LOW); //G
		}
		else if(nr_seg==2)
		  {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_LOW);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_LOW);
		  };
	  	  break;
	case 8:
		if(nr_seg==1)
		{
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH); //A
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH); //B
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH); //D
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_HIGH); //E
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_HIGH); //F
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_HIGH); //G
		}
		else if(nr_seg==2)
		  {
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_HIGH);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_HIGH);
		  };
	  	  break;
	case 9:
		if(nr_seg==1)
		{
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_HIGH); //A
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_HIGH); //B
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH); //D
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_LOW); //E
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_HIGH); //F
	  	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_HIGH); //G
		}
		else if(nr_seg==2)
		{
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_HIGH);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_HIGH);
		};
	  	  break;
	case 'c':
		if(nr_seg==1)
		{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_LOW); //A
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_LOW); //B
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_LOW); //C
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_LOW); //D
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_LOW); //E
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_LOW); //F
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_LOW); //G
		}
		else if(nr_seg==2)
		{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_LOW);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_LOW);
		};
	    break;
	 default:
		 if(nr_seg==1)
		 {
		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, LEVEL_LOW); //A
		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, LEVEL_LOW); //B
		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, LEVEL_HIGH); //C
		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, LEVEL_HIGH); //D
		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, LEVEL_HIGH); //E
		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, LEVEL_LOW); //F
		 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, LEVEL_LOW); //G
		 }
		 else if(nr_seg==2)
		 {
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, LEVEL_HIGH);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, LEVEL_HIGH);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, LEVEL_LOW);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, LEVEL_LOW);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, LEVEL_LOW);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, LEVEL_HIGH);
		 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, LEVEL_LOW);
		 };
		 break;
	}
}

void display_seg_on_one(uint8_t nr_seg, char digit){
	if(nr_seg!=3){
		return;
	}
	switch(digit){
	case 1:
		HAL_GPIO_WritePin(SEG3_UNU_GPIO_Port, SEG3_UNU_Pin, LEVEL_HIGH);
		break;
	case 'c':
	default:
		HAL_GPIO_WritePin(SEG3_UNU_GPIO_Port, SEG3_UNU_Pin, LEVEL_LOW);
		break;
	}
}

