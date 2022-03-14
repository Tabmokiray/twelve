
#include "bestiary.h"
#define INPUT_FILE_NAME "input"
#define OUTPUT_FILE_NAME "input"
#define ERR_OPEN_FILE "ERROR:couldn't open file '%s'\nEXIT WITH ERROR CODE 1\n"
void intro();
void picture();
void stage0();
void stage1();
int amountofspells();
void stages();
void clearchat();
void actions(char* control);
void charactercreator();
char statgenerator(int* points);
void start();
void save();
void characterlist();
void hidecursor();
void gotoxy(int column, int row);