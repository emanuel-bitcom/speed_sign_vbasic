#ifndef SPEED_SIGN_H
#define SPEED_SIGN_H

#define LIMIT_SPEED_KMH 50
#define MINIMUM_SPEED_DETECTED 2   //minimum speed to avoid interference with environment (in km/h)

#define SPEED_ON_TIMEOUT_MS 500    //time to display certain speed

void speed_sign_init();
void speed_sign_loop();

#endif
