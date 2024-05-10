/*
 * limit_setting.c
 *
 *  Created on: May 10, 2024
 *      Author: dumit
 */
#include "limit_setting.h"
#include "limit_potentiometer.h"

static volatile int current_limit_speed;
static volatile int last_limit_speed;
/*Public functions definitions*/
void limit_set_init(){
	current_limit_speed = 10;
	last_limit_speed = 10;
}

limit_set_rsp_e limit_get_speed_mps(int * lim_speed){

}

limit_set_rsp_e limit_get_speed_kmh(int * lim_speed){
	int pot_err = lim_pot_get_speed(&current_limit_speed);
//	printf("Lim Speed: %d \r\n", current_limit_speed);
	//on error return
	if(pot_err){
		*lim_speed = 0;
		return LIMIT_SETTING_VOID;
	}
	if(current_limit_speed != last_limit_speed){
		//limit speed must be set
		last_limit_speed = current_limit_speed;
		*lim_speed = current_limit_speed;
		return LIMIT_SETTING_SET;
	}
	//put current speed in lim_speed_pointer
	*lim_speed = current_limit_speed;
	return LIMIT_SETTING_VOID;

}

