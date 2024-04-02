#include "main.h"
#include "display.h"
#include "display_face.h"
#include "display_segs.h"


/* Public functions definitions */
void display_init(){
	display_face_clear();
	display_segs_clear();
}

void display_speed(unsigned int speed, speed_type_e speed_type){
    if(speed_type == SPEED_GOOD){
        display_segs_set_color(SEGS_COLOR_GREEN);
        display_segs_set_speed(speed);
        display_face_smile();
    }else if(speed_type == SPEED_BAD){
        display_segs_set_color(SEGS_COLOR_RED);
        display_segs_set_speed(speed);
        display_face_sad();
    }
}

/* 
   It is a blocking call 
   Waits for timeout to expire, then clears the display   
*/
void display_wait_timeout(unsigned int timeout_ms){
    delay(timeout_ms);

    /*Clear the display*/
    display_segs_clear();
    display_face_clear();
}
