#include "reload.h"

int main(void) {
	srand(time(NULL));
	ruleset();
	hidecursor();
	save();
	stages();
	free(eldritchblast.description);
	return 0;
}