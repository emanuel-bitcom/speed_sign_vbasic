/*
 * ops243.c
 *
 *  Created on: Apr 2, 2024
 *      Author: dumit
 */
#include "ops243.h"
#include "usart.h"
#include "main.h"
#include "string.h"
#include "stdlib.h"
#include "gpio.h"

char OPS_RX_char='\0';
char OPS_RX_buffer[10]={0};
volatile char Rx_index = 0;
volatile char Rx_READY_FL = 0;

void ops_start_measurements(){
	HAL_GPIO_WritePin(RADAR_NRST_GPIO_Port, RADAR_NRST_Pin, GPIO_PIN_SET);
	memset(OPS_RX_buffer,0,10);
	Rx_index = 0;
	HAL_UART_Receive_IT(&huart2, &OPS_RX_buffer[Rx_index], 1);
}

float ops_get_measured_speed(){
	if(!Rx_READY_FL)
		return 0.0;

	/*executes when there is a valid speed
	 * in buffer */
	float ret_speed = 0.0;
	if(OPS_RX_buffer[0]=='-'){
		ret_speed = atof((const char*)&OPS_RX_buffer[1]);
		ret_speed = -ret_speed;
	}else{
		ret_speed = atof((const char*)&OPS_RX_buffer[0]);
	}
	Rx_READY_FL=0;
	/*reset buffer*/
	memset(OPS_RX_buffer, 0, 10);
	return ret_speed;
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  /* see if '\n' was received */
  if(OPS_RX_buffer[Rx_index]=='\n'){
	  OPS_RX_buffer[Rx_index]='\0';
	  Rx_index = -1;
	  Rx_READY_FL = 1;
  }else{
	  Rx_READY_FL = 0;
  }

  if(++Rx_index>10){
	  Rx_index = 0;
  }

  HAL_UART_Receive_IT(&huart2, &OPS_RX_buffer[Rx_index], 1);

}
