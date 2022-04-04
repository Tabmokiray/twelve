#include "mechanic.h"
int main(void) {
	srand(time(NULL));
	mechanicsatstart();
	start();
	save();
	hero.tekhits = 100;
	hero.hits = 100;
	hero.modDex = 100;
	hero.xp = 900;
	stages();
	freeetc();
	return 0;
}