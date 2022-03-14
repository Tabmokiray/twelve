#include "reload.h"

int main(void) {
	srand(time(NULL));
	ruleset();
	hidecursor();
	start();
	save();
	stages();
	free(eldritchblast.description);
	return 0;
}