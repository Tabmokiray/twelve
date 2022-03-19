#include "mechanic.h"
int main(void) {
	PlaySound(TEXT("Dark.wav"), NULL, SND_LOOP | SND_ASYNC);
	mechanicsatstart();
	start();
	save();
	stages();
	freeetc();
	return 0;
}