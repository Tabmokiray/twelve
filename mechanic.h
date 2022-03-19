#include "bestiary.h"
#define INPUT_FILE_NAME "input"
#define ERR_OPEN_FILE "ERROR:couldn't open file '%s'\nEXIT WITH ERROR CODE 1\n"
void fullscreen();
void freeetc();
void clearchat();
int actions(char* control);
void charactercreator();
char statgenerator(int* points);
void start();
void loadsave();
void createsave();
void save();
void hidecursor();
void gotoxy(int column, int row);
void mechanicsatstart();
void cleanstdin();