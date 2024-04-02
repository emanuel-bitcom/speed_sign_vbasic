#ifndef DISPLAY_SEGS_H
#define DISPLAY_SEGS_H

/*Public types*/
typedef enum{
    SEGS_COLOR_GREEN = 0,
    SEGS_COLOR_RED = 1
}segs_color_e;

/*Public functions declarations*/
void display_segs_set_color(segs_color_e segs_color);
void display_segs_set_speed(unsigned int speed);
void display_segs_clear();

#endif