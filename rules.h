#include "struct.h"
void rulerat(int num);
void rulebandit(int num);
void rulegoblin(int num);
void ruleskeleton(int num);
/*
void rulemon1(int id);
void rulemon2(int id);
*/
void rulesword(int num);
void ruleimp(int num);
void rulefamiliar();
void ruleset();
void modif();
void money();
void loot();
int roll(int amount, int dice, int mods);
void levels();
void warlock2();
void warlock3();
void proficiency();
void condition(int* attack);
void weapons(int z, int* damage, int* attack, char* damagetype);
int abilitydesc(int z, int* damage,int* attack, int* characteristic);
int spell(int*slot,int* attack, int z, int* damage, char* typeofdamage, int* characteristic);
void shortrest();
int amountofspells();
void profinskills();
void equips(int id);
void showequip();
/*int initiative(int monsters, char ch, char* control);
int hero1action(char* control, char ch);
int hero2action(char* control,char ch);
int mon1action(char*control,char ch);
int mon2action(char*control,char ch);
int fight(int** tracker,int monsters,char ch,char*control);
*/
void skills();
void characterlist();