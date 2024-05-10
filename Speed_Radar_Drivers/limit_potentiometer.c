/*
 * limit_potentiometer.c
 *
 *  Created on: May 10, 2024
 *      Author: dumit
 */
#include "limit_potentiometer.h"
#include "adc.h"

int lim_pot_init_reading(){
 /*
  * Nothing to do in init for polling mode
  */
}

// returns limit speed (multiple of 10 speed
// minimum returned speed is 10km/h
uint16_t lim_speeds[] = { 10,  20,  30,  40,  50,
						  60,  70,  80,  90, 100,
						 110, 120, 130, 140, 150};
#define N_LIM_SPEEDS    15
#define MAX_ADC_READING 4095
//returns 0 on success
//returns <>0 on error
int lim_pot_get_speed(int *speed_p){
	HAL_ADC_Start(&hadc2);
	HAL_ADC_PollForConversion(&hadc2, 100);
	uint16_t ad_res=0;
	ad_res = HAL_ADC_GetValue(&hadc2);
	printf("AD result: %d \r\n", ad_res);
	uint8_t lim_v_index = (uint32_t)ad_res*(uint32_t)N_LIM_SPEEDS/(uint32_t)MAX_ADC_READING;

	int ret_err=0;
	//safety guards
	if(lim_v_index<0){
		lim_v_index = 0;
		ret_err=1;
	}
	if(lim_v_index>14){
		lim_v_index = 14;
		ret_err=1;
	}
	*speed_p = lim_speeds[lim_v_index];
	return ret_err;
}

