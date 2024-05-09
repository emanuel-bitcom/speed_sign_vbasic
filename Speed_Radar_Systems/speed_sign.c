#include "speed_sign.h"
#include "serial.h"
#include "radar.h"
#include "display.h"

/*Public function definitions*/
void speed_sign_init(){
	display_init();
	radar_init();
}

int speeds[]={20, 30, 50, 70, 100, 120};
int speed_index=0;
void speed_sign_loop(){
    int current_speed_kmh = 0;
    /*Read Speed from radar*/
    radar_rsp_e radar_resp = radar_get_speed_kmh(&current_speed_kmh);
//    radar_rsp_e radar_resp=RADAR_SPEED_OK;
//    current_speed_kmh=speeds[speed_index++];
//    if(speed_index>5)
//    	speed_index=0;

    if(radar_resp==RADAR_SPEED_VOID){
        /*on void speed just continue reading*/
        return;
    }else if(radar_resp == RADAR_SPEED_OK){
        /*get absolute value of speed*/
        current_speed_kmh=current_speed_kmh<0?(-current_speed_kmh):current_speed_kmh;
        unsigned int current_speed_kmh_u = (unsigned int)current_speed_kmh;
        speed_type_e speed_type_bad_good = SPEED_GOOD;
        if(current_speed_kmh_u >= LIMIT_SPEED_KMH)
            speed_type_bad_good = SPEED_BAD;

        display_speed(current_speed_kmh_u, speed_type_bad_good);
        /*Blocking call*/
        display_wait_timeout(SPEED_ON_TIMEOUT_MS);
    }
}
