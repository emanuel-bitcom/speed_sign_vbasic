/*
 * segs_driver.h
 *
 *  Created on: Apr 2, 2024
 *      Author: dumit
 */

#ifndef SEGS_DRIVER_H_
#define SEGS_DRIVER_H_
#include "main.h"

void display_seg_on_segment(uint8_t nr_seg, char digit);
void display_seg_on_one(uint8_t nr_seg, char digit);
void display_seg_red_on();
void display_seg_green_on();
void display_seg_power_off();

#endif /* SEGS_DRIVER_H_ */
