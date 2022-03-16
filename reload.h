
#include "bestiary.h"
#define INPUT_FILE_NAME "input"
#define ERR_OPEN_FILE "ERROR:couldn't open file '%s'\nEXIT WITH ERROR CODE 1\n"
void fullscreen();
void freeetc();
int abilitydesc(int z,int*damage,int* characteristic);
void room0();
void room1();
void room2();
void room3();
void shortrest();
void intro();
void picture();
int stage0();
int stage1();
int stage2();
int amountofspells();
void stages();
void clearchat();
int actions(char* control);
void charactercreator();
void weapons(int z, int* damage,int*attack,char* damagetype);
void condition(int*attack);
char statgenerator(int* points);
void start();
void loadsave();
void createsave();
void save();
void characterlist();
void hidecursor();
void gotoxy(int column, int row);