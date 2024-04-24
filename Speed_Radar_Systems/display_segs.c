#include "display_segs.h"
#include "segs_driver.h"

/*Public functions definitions*/
void display_segs_set_color(segs_color_e segs_color){
	if(segs_color==SEGS_COLOR_GREEN){
		display_seg_red_on();
	}else if(segs_color == SEGS_COLOR_RED){
		display_seg_green_on();
	}
}

void display_segs_set_speed(unsigned int speed){
    if(speed>=100){
    	display_seg_on_one(3, 1);
    }
    if(speed>=10){
    	display_seg_on_segment(1, (speed/10)%10);
    }
    display_seg_on_segment(2, speed%10);
}

void display_segs_clear(){
	/*clears speed*/
	display_seg_on_segment(1, 'c');
	display_seg_on_segment(2, 'c');
	display_seg_on_one(3, 'c');
	display_seg_power_off();
    
}
