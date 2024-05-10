#ifndef LIMIT_SETTING_H
#define LIMIT_SETTING_H

typedef enum{
    LIMIT_SETTING_VOID = 0,
    LIMIT_SETTING_SET
}limit_set_rsp_e;

/*Public functions declarations*/
void limit_set_init();
limit_set_rsp_e limit_get_speed_mps(int * lim_speed);
limit_set_rsp_e limit_get_speed_kmh(int * lim_speed);

#endif
