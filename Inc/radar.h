#ifndef RADAR_H
#define RADAR_H

typedef enum{
    RADAR_SPEED_VOID = 0,
    RADAR_SPEED_OK
}radar_rsp_e;

/*Public functions declarations*/
void radar_init();
radar_rsp_e radar_get_speed_mps(int * speed);
radar_rsp_e radar_get_speed_kmh(int * speed);

#endif
