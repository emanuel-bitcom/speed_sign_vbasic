#include "radar.h"
#include "ops243.h"

/*Public functions definitions*/
void radar_init(){
	ops_start_measurements();

}

radar_rsp_e radar_get_speed_mps(int * speed){
     return RADAR_SPEED_VOID;
}

radar_rsp_e radar_get_speed_kmh(int * speed){
	float speed_float = ops_get_measured_speed();
	if(speed_float<=0.1&&speed_float>=-0.1){
		*speed = 0;
		return RADAR_SPEED_VOID;
	}
	/*if speed is ok*/
	*speed = (int)(speed_float*3.6);
	return RADAR_SPEED_OK;
}
