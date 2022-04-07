#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <MMSystem.h>
#include <time.h>
#pragma comment(lib, "winmm.lib")
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
	int archetype;
	char spellcaster[20];
	int spellac;
	int hitdice;
	int amounthitdice;
	char racename[20];
	int race;
	int progress;
	char spelllist[20];
	char ablist[20];
	int spelldc;
	int mode;
	char weaponlist[20];
	int temphits;
	int crit;
	int weapons;
	char itemlist[20];
	int items;
	char archetypename[20];
	int spellslots1;
	int spellslots2;

	int saveStr;
	int prsaveStr;
	int saveDex;
	int prsaveDex;
	int saveCon;
	int prsaveCon;
	int saveInt;
	int prsaveInt;
	int saveWis;
	int prsaveWis;
	int saveCha;
	int prsaveCha;
	int acrobatic;
	int pracrobatic;
	int animalhandling;
	int pranimalhandling;
	int arcana;
	int prarcana;
	int athletics;
	int prathletics;
	int deception;
	int prdeception;
	int history;
	int prhistory;
	int insight;
	int prinsight;
	int intimidation;
	int prinimidation;
	int investigation;
	int prinvestigation;
	int medicine;
	int prmedicine;
	int nature;
	int prnature;
	int perception;
	int prperception;
	int performance;
	int prperformance;
	int persuassion;
	int prpersusassion;
	int religion;
	int prreligion;
	int sleightofhand;
	int prsleightofhand;
	int stealth;
	int prstealth;
	int survival;
	int prsurvival;
	char equiplist[20];
	char equphead[20];
	char equipchest[20];
	char equipbracers[20];
	char equiplefthand[20];
	char equipcape[20];
	char equipfeet[20];
	char equiprings[20];
	int condition;
	int advantage;
};
struct stats hero, familiarstat, Goblinstat, Banditstat, Ratstat, Skeletonstat, Swordstat, Dragonstat, Impstat, Koboldstat;
struct lists {
	char pactbladeweaponlist[20];
};
struct lists list;
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
	int subrace;
};
struct race human, dwarf;
struct class {
	int spellcaster;
	int hitdice;
	int class;
	int archetype;
	char eldritchinvocations[20];
	char pactboon;
};
struct class warlock;
struct invocations {
	char id;
	char name[20];
	char* description;
};
struct invocations agonizingblast, armorofshadows, beguilinginfluence;
struct pacts {
	char name[20];
	char* description;
	char id;
};
struct pacts blade, chain, tome;
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
struct npc Goblin, Bandit, monster, monster2, Rat, Skeleton, Sword, Dragon, Imp, familiar, Kobold;
struct action {
	char action1[20];
	char action2[20];
	int damage1;
	int damage2;
	int accur1;
	int accur2;
};
struct action Goblinaction, Banditaction, monsteraction, monster2action, Rataction, Skeletonaction, Swordaction, Dragonaction, Impaction, familiaraction, Koboldaction;
struct arm {
	int startarmor;
	int type;
	int cost;
	char name[20];
	char id;
};
struct arm shield, platearmor, splintarmor, chainmail, ringmailarmor, halfplatearmor, breastplate, scalemailarmor, chainshirt, hidearmor, studdedleather, leatherarmor, paddedarmor;
struct weapon {
	int finnese;
	int damage;
	char name[20];
	char damagetype[20];
	char id;
	int mods;
	int amount;
	int cost;
};
struct weapon dagger, quarterstaff, magicalshortsword, lightcrossbow;
struct spell {
	char id;
	char name[20];
	int level;
	int amount;
	int damage;
	char typeofdamage[20];
	char* description;
	int mode;
	int mods;
};
struct spell eldritchblast, magearmor, faeriefire, shillelagh, sacredflame, poisonspray, darkonesblessing, feyancestry, summonblade, findfamiliar, imp;
struct text {
	char* text1;
	char* text2;
	char* text3;
};
struct text intr, columns, magicsword, shopman, reddragon, meep;
struct maps {
	char* map;
};
struct maps sunlesscitadel;
struct item {
	char id;
	char name[20];
	int damage;
	char typeofdamage[20];
	char* description;
	int amount;
	int mods;
	int cost;
};
struct item healingpotion;
struct plot {
	int killed;
};
struct plot meepokobold, statue, robberydragon, secretdoor, trysecret, key;