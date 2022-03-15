#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <limits.h>
struct stats {
	char name[20];
	int gold;
	int silver;
	int copper;
	int level;
	int xp;
	int proficiency;
	int Strength;
	int modStr;
	int Dexterity;
	int modDex;
	int Constitution;
	int modConst;
	int Intellect;
	int modInt;
	int Wisdom;
	int modWis;
	int Charisma;
	int modCha;
	int tekhits;
	int hits;
	int armorclass;
	int armormod;
	char classname[20];
	int class;
	int spellcaster;
	int hitdice;
	char racename[20];
	int race;
	int progress;
	char spelllist[20];
	char ablist[20];
	int spelldc;
	int mode;
};
struct stats hero, Frankstat, Goblinstat, Banditstat;
struct race {
	int race;
	int str;
	int dex;
	int con;
	int intl;
	int wis;
	int cha;
	int darkvision;
	int speed;
	char language[20];
	int size;
};
struct race human;
struct class {
	int spellcaster;
	int hitdice;
	int class;
	int archetype;
	char archetypename[20];
};
struct class warlock, fighter;
struct npc {
	int armorclass;
	char name[20];
	int hits;
	int level;
	int proficiency;
	int modStr;
	int modDex;
	int modCon;
	int modInt;
	int modWis;
	int modCha;
	int condition;
};
struct npc Frank, Goblin, Bandit, monster;
struct action {
	char action1[20];
	char action2[20];
	int damage1;
	int damage2;
	int accur1;
	int accur2;
};
struct action Frankaction, Goblinaction, Banditaction, monsteraction;
struct armor {
	int shield;

	int platearmor;
	int splintarmor;
	int chainmail;
	int ringmailarmor;

	int halfplatearmor;
	int breastplate;
	int scalemailarmor;
	int chainshirt;
	int hidearmor;

	int studdedleather;
	int leatherarmor;
	int paddedarmor;
};
struct armor armor;
struct weapon {
	int damage;
	char name[20];
};
struct weapon dagger;
struct spell {
	char id;
	char name[20];
	int level;
	int amount;
	int damage;
	char typeofdamage[20];
	char* description;
	int mode;
};
struct spell eldritchblast,darkonesblessing,feyancestry;
struct text {
	char* text1;
	char* text2;
};
struct text intr,columns;