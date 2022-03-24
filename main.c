#include "mechanic.h"
int main(void) {
	srand(time(NULL));
	mechanicsatstart();
	start();
	save();
	stages();
	freeetc();
	return 0;
}