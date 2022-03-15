#include "reload.h"

int main(void) {
	fullscreen();
	srand(time(NULL));
	ruleset();
	hidecursor();
	start();
	save();
	stages();
	freeetc();
	return 0;
}