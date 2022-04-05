#include "mechanic.h"
int main(void) {
	srand(time(NULL));
	mechanicsatstart();
	start();
	save();
	hero.progress = 7;
	stages();
	freeetc();
	return 0;
}