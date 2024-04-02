#include "display_face.h"
#include <face_driver.h>

/*Public functions definitions*/
void display_face_smile(){
	face_smile_on();
}


void display_face_sad(){
	face_sad_on();
}

void display_face_clear(){
	face_off();
}
