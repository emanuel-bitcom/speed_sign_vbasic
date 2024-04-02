#ifndef DISPLAY_H
#define DISPLAY_H

typedef enum{
    SPEED_GOOD=0,
    SPEED_BAD,
}speed_type_e;

/* Public functions declarations */
void display_init();
void display_speed(unsigned int speed, speed_type_e speed_type);
void display_wait_timeout(unsigned int timeout_ms);


#endif
