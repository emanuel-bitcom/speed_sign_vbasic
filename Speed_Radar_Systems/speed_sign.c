#include "speed_sign.h"
#include "serial.h"
#include "radar.h"
#include "display.h"
#include "limit_setting.h"

/*Public function definitions*/
void speed_sign_init(){
	display_init();
	radar_init();
}

int speeds[]={20, 30, 50, 70, 100, 120};
int speed_index=0;
static volatile int limit_speed = 0;
void speed_sign_loop(){
    int current_speed_kmh = 0;
    /*Read Speed from radar*/
    radar_rsp_e radar_resp = radar_get_speed_kmh(&current_speed_kmh);
//    radar_rsp_e radar_resp=RADAR_SPEED_OK;
//    current_speed_kmh=speeds[speed_index++];
//    if(speed_index>5)
//    	speed_index=0;

    //Read limit speed from settings module
    //this must be performed once every 10 interations
    limit_set_rsp_e lim_rsp = limit_get_speed_kmh(&limit_speed);

    if(lim_rsp == LIMIT_SETTING_SET){
    	//perform display of limit speed
    	speed_type_e speed_type_limit = SPEED_GOOD;
    	display_speed(limit_speed, speed_type_limit);
    	display_wait_timeout(SPEED_ON_TIMEOUT_MS);
    	return;
    }
    if(radar_resp==RADAR_SPEED_VOID){
        /*on void speed just continue reading*/
        return;
    }else if(radar_resp == RADAR_SPEED_OK){
        /*get absolute value of speed*/
    	char negative_spd_flag=0;
    	if(current_speed_kmh<0){
    		negative_spd_flag = 1;
    		current_speed_kmh = -current_speed_kmh;
    	}else{
    		current_speed_kmh = current_speed_kmh;
    	}
    	//display only positive speeds
        if(negative_spd_flag){
        	return;
        }
        unsigned int current_speed_kmh_u = (unsigned int)current_speed_kmh;
        speed_type_e speed_type_bad_good = SPEED_GOOD;
        if(current_speed_kmh_u > limit_speed)
            speed_type_bad_good = SPEED_BAD;

        //test for minimum speed detected
        if(current_speed_kmh_u<MINIMUM_SPEED_DETECTED){
        	return;
        }

        display_speed(current_speed_kmh_u, speed_type_bad_good);
        /*Blocking call*/
        display_wait_timeout(SPEED_ON_TIMEOUT_MS);
    }
}
