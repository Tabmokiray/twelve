#include "mechanic.h"
int main(void) {
	srand(time(NULL));
	mechanicsatstart();
	start();
	save();
	hero.xp = 900;
	hero.progress = 8;
	stages();
	freeetc();
	return 0;
}