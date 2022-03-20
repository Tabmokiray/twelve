#include "rules.h"
void rulerat() {
	monster.modStr = Rat.modStr;
	monster.modDex = Rat.modDex;
	monster.modCon = Rat.modCon;
	monster.modInt = Rat.modInt;
	monster.modWis = Rat.modWis;
	monster.modCha = Rat.modCha;
	monster.armorclass = Rat.armorclass;
	monster.hits = Rat.hits;
	monsteraction.accur1 = Rataction.accur1;
	monsteraction.damage1 = Rataction.damage1;
	monsteraction.accur2 = Rataction.accur2;
	monsteraction.damage2 = Rataction.damage2;
	strcpy_s(monster.name, 10, Rat.name);
	monster.proficiency = Rat.proficiency;
	monster.level = Rat.level;
}
void rulebandit() {
	monster.modStr = Bandit.modStr;
	monster.modDex = Bandit.modDex;
	monster.modCon = Bandit.modCon;
	monster.modInt = Bandit.modInt;
	monster.modWis = Bandit.modWis;
	monster.modCha = Bandit.modCha;
	monster.armorclass = Bandit.armorclass;
	monster.hits = Bandit.hits;
	monsteraction.accur1 = Banditaction.accur1;
	monsteraction.damage1 = Banditaction.damage1;
	monsteraction.accur2 = Banditaction.accur2;
	monsteraction.damage2 = Banditaction.damage2;
	strcpy_s(monster.name, 7, Bandit.name);
	monster.proficiency = Bandit.proficiency;
	monster.level = Bandit.level;
}
void rulegoblin() {
	monster.modStr = Goblin.modStr;
	monster.modDex = Goblin.modDex;
	monster.modCon = Goblin.modCon;
	monster.modInt = Goblin.modInt;
	monster.modWis = Goblin.modWis;
	monster.modCha = Goblin.modCha;
	monster.armorclass = Goblin.armorclass;
	monster.hits = Goblin.hits;
	monsteraction.accur1 = Goblinaction.accur1;
	monsteraction.damage1 = Goblinaction.damage1;
	monsteraction.accur2 = Goblinaction.accur2;
	monsteraction.damage2 = Goblinaction.damage2;
	strcpy_s(monster.name, 7, Goblin.name);
	monster.proficiency = Goblin.proficiency;
	monster.level = Goblin.level;
}
void ruleskeleton() {
	monster.modStr = Skeleton.modStr;
	monster.modDex = Skeleton.modDex;
	monster.modCon = Skeleton.modCon;
	monster.modInt = Skeleton.modInt;
	monster.modWis = Skeleton.modWis;
	monster.modCha = Skeleton.modCha;
	monster.armorclass = Skeleton.armorclass;
	monster.hits = Skeleton.hits;
	monsteraction.accur1 = Skeletonaction.accur1;
	monsteraction.damage1 = Skeletonaction.damage1;
	monsteraction.accur2 = Skeletonaction.accur2;
	monsteraction.damage2 = Skeletonaction.damage2;
	strcpy_s(monster.name, 9, Skeleton.name);
	monster.proficiency = Skeleton.proficiency;
	monster.level = Skeleton.level;

}
void rulesword() {
	monster.modStr = Sword.modStr;
	monster.modDex = Sword.modDex;
	monster.modCon = Sword.modCon;
	monster.modInt = Sword.modInt;
	monster.modWis = Sword.modWis;
	monster.modCha = Sword.modCha;
	monster.armorclass = Sword.armorclass;
	monster.hits = Sword.hits;
	monsteraction.accur1 = Swordaction.accur1;
	monsteraction.damage1 = Swordaction.damage1;
	monsteraction.accur2 = Swordaction.accur2;
	monsteraction.damage2 = Swordaction.damage2;
	strcpy_s(monster.name, 20, Sword.name);
	monster.proficiency = Sword.proficiency;
	monster.level = Sword.level;

}
void ruleset() {
	int d4 = 4;
	int d6 = 6;
	int d8 = 8;
	int d10 = 10;
	int d12 = 12;
	int d20 = 20;

	monster.condition = 0;

	hero.hitdice = 0;
	hero.race = 0;
	hero.amounthitdice = hero.level;
	hero.crit = 0;
	hero.weapons = 2;
	hero.archetype = 0;

	warlock.class = 1;
	fighter.class = 2;

	human.race = 1;
	human.str = 1;
	human.dex = 1;
	human.con = 1;
	human.intl = 1;
	human.wis = 1;
	human.cha = 1;
	human.race = 1;

	dwarf.con = 2;
	dwarf.race = 2;

	healingpotion.damage = d4;
	healingpotion.amount = 2;
	healingpotion.mods = 2;
	healingpotion.description = (char*)malloc(100);
	strcpy_s(healingpotion.description, 36, "Healing potion restore 2d4 + 2 hits");
	healingpotion.id = '1';
	strcpy_s(healingpotion.name, 15, "Healing potion");
	strcpy_s(healingpotion.typeofdamage, 8, "healing");

	eldritchblast.level = 0;
	eldritchblast.amount = 1;
	eldritchblast.damage = d10;
	strcpy_s(eldritchblast.name, 15, "Eldritch blast");
	eldritchblast.description = (char*)malloc(400);
	strcpy_s(eldritchblast.description, 310, "A beam of crackling energy streaks toward a creature within range.\nMake a ranged spell attack against the target.\nOn a hit, the target takes 1d10 force damage.\nThe spell creates more than one beam when you reach higher levels :\ntwo beams at 5th level, three beams at 11th level,\nand four beams at 17th level.");
	eldritchblast.id = '1';
	strcpy_s(eldritchblast.typeofdamage, 6, "force");

	strcpy_s(feyancestry.name, 13, "Fey ancestry");
	feyancestry.description = (char*)malloc(500);
	strcpy_s(feyancestry.description, 488, "Starting at 1st level, your patron bestows upon you the ability to project\nthe beguiling and fearsome presence of the fey.\nAs an action, you can cause each creature in a 10-foot cube\noriginating from you to make a Wisdom saving throw against your warlock spell save DC.\nThe creatures that fail their saving throws are all charmed or frightened by you (your choice) until the end of your next turn.\nOnce you use this feature, you can't use it again until you finish a short or long rest.");
	feyancestry.id = '1';

	strcpy_s(darkonesblessing.name, 20, "Dark One's blessing");
	darkonesblessing.description = (char*)malloc(200);
	strcpy_s(darkonesblessing.description, 175, "Starting at 1st level, when you reduce a hostile creature to 0 hit points,\nyou gain temporary hit points equal\nto your Charisma modifier + your warlock level (minimum of 1).");
	darkonesblessing.id = '2';

	dagger.damage = d4;
	dagger.finnese = 1;
	dagger.mods = 0;
	dagger.id = '1';
	strcpy_s(dagger.name, 7, "Dagger");

	magicalshortsword.damage = d6;
	magicalshortsword.mods = 1;
	magicalshortsword.finnese = 1;
	magicalshortsword.id = '3';
	strcpy_s(magicalshortsword.name, 20, "Magical short sword");

	quarterstaff.damage = d8;
	quarterstaff.finnese = 0;
	quarterstaff.mods = 0;
	quarterstaff.id = '2';
	strcpy_s(quarterstaff.name, 13, "Quarterstaff");

	armor.shield = 2;

	armor.platearmor = 18;
	armor.splintarmor = 17;
	armor.chainmail = 16;
	armor.ringmailarmor = 14;

	armor.halfplatearmor = 15;
	armor.breastplate = 14;
	armor.scalemailarmor = 14;
	armor.chainshirt = 13;
	armor.hidearmor = 12;

	armor.studdedleather = 12;
	armor.leatherarmor = 11;
	armor.paddedarmor = 11;

	Rat.armorclass = 12;
	Rat.hits = 7;
	Rat.proficiency = 2;
	Rat.level = 0;
	Ratstat.Strength = 7;
	Ratstat.Dexterity = 15;
	Ratstat.Constitution = 11;
	Ratstat.Intellect = 2;
	Ratstat.Wisdom = 10;
	Ratstat.Charisma = 4;
	modif();
	strcpy_s(Rat.name, 10, "Giant rat");
	strcpy_s(Rataction.action1, 5, "Bite");
	Rataction.damage1 = roll(1, d4, Ratstat.modDex);
	Rataction.accur1 = roll(1, d20, Rat.proficiency + Ratstat.modDex);

	Sword.armorclass = 15;
	Sword.hits = 30;
	Sword.proficiency = 3;
	Sword.level = 3;
	Swordstat.Strength = 15;
	Swordstat.Dexterity = 16;
	Swordstat.Constitution = 12;
	Swordstat.Intellect = 15;
	Swordstat.Wisdom = 10;
	Swordstat.Charisma = 15;
	modif();
	strcpy_s(Sword.name, 20, magicalshortsword.name);
	strcpy_s(Swordaction.action1, 8, "Strike");
	Swordaction.damage1 = roll(1, d6, Swordstat.modDex);
	Swordaction.accur1 = roll(1, d20, Sword.proficiency + Swordstat.modDex);

	Skeleton.armorclass = 13;
	Skeleton.hits = 13;
	Skeleton.proficiency = 2;
	Skeleton.level = 0;
	Skeletonstat.Strength = 10;
	Skeletonstat.Dexterity = 14;
	Skeletonstat.Constitution = 15;
	Skeletonstat.Intellect = 6;
	Skeletonstat.Wisdom = 8;
	Skeletonstat.Charisma = 5;
	modif();
	strcpy_s(Skeleton.name, 9, "Skeleton");
	strcpy_s(Skeletonaction.action1, 12, "Short sword");
	Skeletonaction.damage1 = roll(1, d6, Skeletonstat.modDex);
	Skeletonaction.accur1 = roll(1, d20, Skeleton.proficiency + Skeletonstat.modDex);

	Goblin.armorclass = 15;
	Goblin.hits = 7;
	Goblin.proficiency = 2;
	Goblin.level = 0;
	Goblinstat.Strength = 8;
	Goblinstat.Dexterity = 14;
	Goblinstat.Constitution = 10;
	Goblinstat.Intellect = 10;
	Goblinstat.Wisdom = 8;
	Goblinstat.Charisma = 8;
	modif();
	strcpy_s(Goblin.name, 7, "Goblin");
	strcpy_s(Goblinaction.action1, 9, "Scimitar");
	Goblinaction.damage1 = roll(1, d6, Goblinstat.modDex);
	Goblinaction.accur1 = roll(1, d20, Goblin.proficiency + Goblinstat.modDex);

	Bandit.armorclass = 12;
	Bandit.hits = 11;
	Bandit.proficiency = 2;
	Bandit.level = 0;
	Banditstat.Strength = 11;
	Banditstat.Dexterity = 12;
	Banditstat.Constitution = 12;
	Banditstat.Intellect = 10;
	Banditstat.Wisdom = 10;
	Banditstat.Charisma = 10;
	modif();
	strcpy_s(Bandit.name, 7, "Bandit");
	strcpy_s(Banditaction.action1, 9, "Scimitar");
	Banditaction.damage1 = roll(1, d6, Banditstat.modDex);
	Banditaction.accur1 = roll(1, d20, Bandit.proficiency + Banditstat.modDex);
}
void modif() {
	Swordstat.modStr = (Swordstat.Strength - 10) / 2;
	Swordstat.modDex = (Swordstat.Dexterity - 10) / 2;
	Swordstat.modConst = (Swordstat.Constitution - 10) / 2;
	Swordstat.modInt = (Swordstat.Intellect - 10) / 2;
	Swordstat.modWis = (Swordstat.Wisdom - 10) / 2;
	Swordstat.modCha = (Swordstat.Charisma - 10) / 2;

	Skeletonstat.modStr = (Skeletonstat.Strength - 10) / 2;
	Skeletonstat.modDex = (Skeletonstat.Dexterity - 10) / 2;
	Skeletonstat.modConst = (Skeletonstat.Constitution - 10) / 2;
	Skeletonstat.modInt = (Skeletonstat.Intellect - 10) / 2;
	Skeletonstat.modWis = (Skeletonstat.Wisdom - 10) / 2;
	Skeletonstat.modCha = (Skeletonstat.Charisma - 10) / 2;

	Ratstat.modStr = (Ratstat.Strength - 10) / 2;
	Ratstat.modDex = (Ratstat.Dexterity - 10) / 2;
	Ratstat.modConst = (Ratstat.Constitution - 10) / 2;
	Ratstat.modInt = (Ratstat.Intellect - 10) / 2;
	Ratstat.modWis = (Ratstat.Wisdom - 10) / 2;
	Ratstat.modCha = (Ratstat.Charisma - 10) / 2;

	Banditstat.modStr = (Banditstat.Strength - 10) / 2;
	Banditstat.modDex = (Banditstat.Dexterity - 10) / 2;
	Banditstat.modConst = (Banditstat.Constitution - 10) / 2;
	Banditstat.modInt = (Banditstat.Intellect - 10) / 2;
	Banditstat.modWis = (Banditstat.Wisdom - 10) / 2;
	Banditstat.modCha = (Banditstat.Charisma - 10) / 2;

	Goblinstat.modStr = (Goblinstat.Strength - 10) / 2;
	Goblinstat.modDex = (Goblinstat.Dexterity - 10) / 2;
	Goblinstat.modConst = (Goblinstat.Constitution - 10) / 2;
	Goblinstat.modInt = (Goblinstat.Intellect - 10) / 2;
	Goblinstat.modWis = (Goblinstat.Wisdom - 10) / 2;
	Goblinstat.modCha = (Goblinstat.Charisma - 10) / 2;

	hero.modStr = (hero.Strength - 10) / 2;
	hero.modDex = (hero.Dexterity - 10) / 2;
	hero.modConst = (hero.Constitution - 10) / 2;
	hero.modInt = (hero.Intellect - 10) / 2;
	hero.modWis = (hero.Wisdom - 10) / 2;
	hero.modCha = (hero.Charisma - 10) / 2;
	if (hero.Strength == 9) {
		hero.modStr = -1;
	}
	if (hero.Dexterity == 9) {
		hero.modDex = -1;
	}
	if (hero.Constitution == 9) {
		hero.modConst = -1;
	}
	if (hero.Intellect == 9) {
		hero.modInt = -1;
	}
	if (hero.Wisdom == 9) {
		hero.modWis = -1;
	}
	if (hero.Charisma == 9) {
		hero.modCha = -1;
	}
}
void loot() {
	int lootgold = (roll(2, 10, 0)) * monster.level;
	int lootsilver = roll(2, 10, 0) * (monster.level + 1);
	int lootcopper = roll(2, 10, 0) * (monster.level + 2);
	int xp = monster.level * 150 + 50;
	gotoxy(3, 3);
	printf_s("In dead body you find:");
	gotoxy(3, 4);
	printf_s("%d gold %d silver %d copper and %d xp", lootgold, lootsilver, lootcopper, xp);
	Sleep(1500);
	gotoxy(3, 5);
	hero.gold += lootgold;
	hero.silver += lootsilver;
	hero.copper += lootcopper;
	money();
	printf_s("You have %d gold %d silver %d copper", hero.gold, hero.silver, hero.copper);
	hero.xp += xp;
	gotoxy(3, 6);
	printf_s("Your xp is %d", hero.xp);
	levels();
	Sleep(5000);
}
void levels() {
	if (hero.xp >= 300 && hero.level == 1) {
		for (int i = 0; i < 5; i++) {
			gotoxy(3, 7);
			printf_s(".");
		}
		hero.level = 2;
		gotoxy(3, 8);
		printf_s("Congratulations! Your level is %d", hero.level);
	}
	if (hero.xp >= 900 && hero.level == 2) {
		for (int i = 0; i < 5; i++) {
			gotoxy(i, 6);
			printf_s(".");
		}
		hero.level = 3;
		gotoxy(3, 8);
		printf_s("Congratulations! Your level is %d", hero.level);
	}
}
void money() {
	int k = 0;
	while (hero.copper > 9) {
		k++;
		hero.copper -= 10;
	}
	if (hero.copper < 10) {
		hero.silver += k;
	}
	k = 0;
	while (hero.silver > 9) {
		k++;
		hero.silver -= 10;
	}
	if (hero.silver < 10) {
		hero.gold += k;
	}
}
int roll(int amount, int dice, int mods) {
	int roll = 0;
	for (int i = 0; i < amount; i++) {
		roll += rand() % dice + 1;
	}
	return (roll + mods);
}
void proficiency() {
	if (hero.level < 5) {
		hero.proficiency = 2;
	}
	else {
		if (hero.level < 9) {
			hero.proficiency = 3;
		}
		else {
			if (hero.level < 13) {
				hero.proficiency = 4;
			}
			else {
				if (hero.level < 17) {
					hero.proficiency = 5;
				}
				else {
					hero.proficiency = 6;
				}
			}
		}
	}
}
void condition(int* attack) {
	switch (monster.condition) {
	case 1: {//Frightend
		int a = monsteraction.accur1;
		int b = monsteraction.accur1;
		if (a > b) {
			*attack = b;
		}
		else {
			*attack = a;
		}
		break;
	}
	case 2: {//Charmed
		*attack = -1;
		break;
	}
	}
}
void weapons(int z, int* damage, int* attack, char* damagetype) {
	switch (z) {
	case 1: {
		strcpy_s(damagetype, 9, "piercing");
		if (hero.modDex > hero.modStr) {
			*damage = dagger.damage + hero.modDex;
			*attack = roll(1, 20, hero.modDex + hero.proficiency);
			if (*attack == 20 + hero.modDex + hero.proficiency) {
				*damage = dagger.damage + dagger.damage + hero.modDex;
				hero.crit = 1;
			}
		}
		else {
			*damage = dagger.damage + hero.modStr;
			*attack = roll(1, 20, hero.modStr + hero.proficiency);
			if (*attack == 20 + hero.modStr + hero.proficiency) {
				*damage = dagger.damage + dagger.damage + hero.modStr;
				hero.crit = 1;
			}
		}

		break;
	}
	case 2: {
		strcpy_s(damagetype, 12, "bludgeoning");
		*damage = quarterstaff.damage + hero.modStr;
		*attack = roll(1, 20, hero.modStr + hero.proficiency);
		if (*attack == 20 + hero.modStr + hero.proficiency) {
			*damage = quarterstaff.damage + quarterstaff.damage + hero.modStr;
			hero.crit = 1;
		}
		break;
	}
	case 3: {
		strcpy_s(damagetype, 9, "piercing");
		if (hero.modDex > hero.modStr) {
			*damage = magicalshortsword.damage + hero.modDex;
			*attack = roll(1, 20, hero.modDex + hero.proficiency + 1);
			if (*attack == 20 + hero.modDex + hero.proficiency + 1) {
				*damage = magicalshortsword.damage + magicalshortsword.damage + hero.modDex - 1;
				hero.crit = 1;
			}
		}
		else {
			*damage = magicalshortsword.damage + hero.modStr;
			*attack = roll(1, 20, hero.modStr + hero.proficiency + 1);
			if (*attack == 20 + hero.modStr + hero.proficiency + 1) {
				*damage = magicalshortsword.damage + magicalshortsword.damage + hero.modStr - 1;
				hero.crit = 1;
			}
		}

		break;
	}
	}
}
int abilitydesc(int z, int* damage, int* characteristic) {
	for (int j = 20; j < 31; j++) {
		gotoxy(3, j);
		printf_s("|");
		gotoxy(113, j);
		printf_s("|");
	}
	for (int i = 3; i < 113; i++) {
		gotoxy(i, 19);
		printf_s("_");
		gotoxy(i, 31);
		printf_s("_");
	}
	switch (hero.ablist[z]) {
	case '1': {
		*characteristic = 5;
		hero.spelldc = hero.modCha + hero.proficiency + 8;
		int j = 21;
		int f = 6;
		for (int i = 3; i < 310; i++) {
			if (feyancestry.description[i - 3] == '\n') {
				j++;
				f = 6;
				i++;
			}
			gotoxy(f, j);
			printf_s("%c", feyancestry.description[i - 3]);
			f++;

		}
		gotoxy(3, 12);
		printf_s("Choose the condititon:");
		gotoxy(3, 13);
		printf_s("Frightend(1) Charmed(2)");
		char choose = _getch();
		if (choose == 's') {
			createsave();
		}
		switch (choose) {
		case '1': {
			hero.mode = 1;
			break;
		}
		case '2': {
			hero.mode = 2;
			break;
		}
		}
		return 2;
		Sleep(2000);
		break;
	}
	case '2': {
		int j = 21;
		int f = 6;
		for (int i = 3; i < 177; i++) {
			if (darkonesblessing.description[i - 3] == '\n') {
				j++;
				f = 6;
				i++;
			}
			gotoxy(f, j);
			printf_s("%c", darkonesblessing.description[i - 3]);
			f++;

		}
		return 0;
		Sleep(5000);
		break;
	}
	}
}
int spell(int* attack, int z, int* damage, char* typeofdamage) {
	for (int j = 20; j < 31; j++) {
		gotoxy(3, j);
		printf_s("|");
		gotoxy(103, j);
		printf_s("|");
	}
	for (int i = 3; i < 103; i++) {
		gotoxy(i, 19);
		printf_s("_");
		gotoxy(i, 31);
		printf_s("_");
	}
	switch (hero.spelllist[z]) {
	case '1': {
		*attack = roll(1, 20, hero.modCha + hero.proficiency);
		*damage = roll(eldritchblast.amount, eldritchblast.damage, eldritchblast.mode);
		if (*attack == 20 + hero.modCha + hero.proficiency) {
			roll(eldritchblast.amount * 2, eldritchblast.damage, eldritchblast.mode);
			hero.crit = 1;
		}
		strcpy_s(typeofdamage, 6, eldritchblast.typeofdamage);
		int j = 21;
		int f = 6;
		for (int i = 3; i < 310; i++) {
			if (eldritchblast.description[i - 3] == '\n') {
				j++;
				f = 6;
			}
			gotoxy(f, j);
			printf_s("%c", eldritchblast.description[i - 3]);
			f++;

		}
		return 1;
		Sleep(2000);
		break;
	}
	}

}
int item(int z, int* damage, int* attack, char* damagetype) {
	for (int j = 20; j < 31; j++) {
		gotoxy(3, j);
		printf_s("|");
		gotoxy(103, j);
		printf_s("|");
	}
	for (int i = 3; i < 103; i++) {
		gotoxy(i, 19);
		printf_s("_");
		gotoxy(i, 31);
		printf_s("_");
	}
	switch (hero.itemlist[z]) {
	case '1': {
		strcpy_s(damagetype, 8, healingpotion.typeofdamage);
		int j = 21;
		int f = 6;
		int d = healingpotion.damage;
		*damage = roll(2, d, 2);
		for (int i = 3; i < 39; i++) {
			if (healingpotion.description[i - 3] == '\n') {
				j++;
				f = 6;
			}
			gotoxy(f, j);
			printf_s("%c", healingpotion.description[i - 3]);
			f++;

		}
		return 0;
		Sleep(2000);
		break;
	}
	}
}
void shortrest() {
	system("cls");
	gotoxy(50, 5);
	printf_s("You build a small fire, eat rations and give yourself some rest.");
	gotoxy(50, 6);
	printf_s("Would you like to spend hit-dices to heal yourself?");
	gotoxy(50, 7);
	printf_s("Yes(1) End shortrest(2)");
	char choose = '0';
	while (choose != '2') {
		choose = _getch();
		if (choose == 's') {
			createsave();
		}
		switch (choose) {
		case '1': {
			if (hero.amounthitdice != 0) {
				gotoxy(50, 8);
				int hitdice = roll(1, hero.hitdice, hero.modConst);

				hero.tekhits += hitdice;
				if (hero.tekhits > hero.hits) {
					hero.tekhits = hero.hits;
				}
				hero.amounthitdice -= 1;
				printf_s("You heal %d, your hits is %d", hitdice, hero.tekhits);
				Sleep(2000);
				gotoxy(50, 8);
				printf_s("                                 ");
			}
			else {
				gotoxy(50, 8);
				printf_s("You are so tired, only long rest can help you.");
				gotoxy(50, 9);
				printf_s("A long rest can only be spent in quiet places where you can sleep.");
				Sleep(3000);
				for (int i = 50; i < 118; i++) {
					for (int j = 8; j < 10; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
			}
			break;
		}
		}
	}
	system("cls");
}
int amountofspells() {
	return hero.level + 1;
}
void profinskills() {
	if (hero.pracrobatic == 1)
		hero.acrobatic += hero.proficiency;
	if (hero.pranimalhandling == 1)
		hero.animalhandling += hero.proficiency;
	if (hero.prarcana == 1)
		hero.arcana += hero.proficiency;
	if (hero.prathletics == 1)
		hero.athletics += hero.proficiency;
	if (hero.prdeception == 1)
		hero.deception += hero.proficiency;
	if (hero.prhistory == 1)
		hero.history += hero.proficiency;
	if (hero.prinimidation == 1)
		hero.intimidation += hero.proficiency;
	if (hero.prinsight == 1)
		hero.insight += hero.proficiency;
	if (hero.prinvestigation == 1)
		hero.investigation += hero.proficiency;
	if (hero.prmedicine == 1)
		hero.medicine += hero.proficiency;
	if (hero.prnature == 1)
		hero.nature += hero.proficiency;
	if (hero.prperception == 1)
		hero.perception += hero.proficiency;
	if (hero.prperformance == 1)
		hero.performance += hero.proficiency;
	if (hero.prpersusassion == 1)
		hero.persuassion += hero.proficiency;
	if (hero.prreligion == 1)
		hero.religion += hero.proficiency;
	if (hero.prsaveCha == 1)
		hero.saveCha += hero.proficiency;
	if (hero.prsaveCon == 1)
		hero.saveCon += hero.proficiency;
	if (hero.prsaveDex == 1)
		hero.saveDex += hero.proficiency;
	if (hero.prsaveInt == 1)
		hero.saveInt += hero.proficiency;
	if (hero.prsaveStr == 1)
		hero.saveStr += hero.proficiency;
	if (hero.prsaveWis == 1)
		hero.saveWis += hero.proficiency;
	if (hero.prsleightofhand == 1)
		hero.sleightofhand += hero.proficiency;
	if (hero.prstealth == 1)
		hero.stealth += hero.proficiency;
	if (hero.prsurvival == 1)
		hero.survival += hero.proficiency;
}
void skills() {
	if (hero.class == 1) {
		hero.prsaveWis = 1;
		hero.prsaveCha = 1;
	}
	if (hero.class == 2) {
		hero.prsaveStr = 1;
		hero.prsaveDex = 1;
	}
	hero.saveStr += hero.modStr;
	hero.saveDex += hero.modDex;
	hero.saveCon += hero.modConst;
	hero.saveInt += hero.modInt;
	hero.saveWis += hero.modWis;
	hero.saveCha += hero.modCha;

	hero.acrobatic += hero.modDex;
	hero.animalhandling += hero.modWis;
	hero.arcana += hero.modInt;
	hero.athletics += hero.modStr;
	hero.deception += hero.modCha;
	hero.history += hero.modInt;
	hero.insight += hero.modWis;
	hero.intimidation += hero.modCha;
	hero.investigation += hero.modInt;
	hero.medicine += hero.modWis;
	hero.nature += hero.modInt;
	hero.perception += hero.modWis;
	hero.performance += hero.modCha;
	hero.persuassion += hero.modCha;
	hero.religion += hero.modInt;
	hero.sleightofhand += hero.modDex;
	hero.stealth += hero.modDex;
	hero.survival += hero.modWis;
}
void characterlist() {
	system("cls");
	for (int i = 1; i < 79; i++) {
		gotoxy(i, 3);
		printf_s("_");
		gotoxy(i, 43);
		printf_s("_");
	}
	for (int j = 4; j < 44; j++) {
		gotoxy(0, j);
		printf_s("|");
		gotoxy(79, j);
		printf_s("|");
	}

	for (int i = 81; i < 159; i++) {
		gotoxy(i, 3);
		printf_s("_");
		gotoxy(i, 43);
		printf_s("_");
	}
	for (int j = 4; j < 44; j++) {
		gotoxy(80, j);
		printf_s("|");
		gotoxy(159, j);
		printf_s("|");
	}
	for (int i = 81; i < 159; i++) {
		gotoxy(i, 7);
		printf_s("_");

	}
	gotoxy(110, 2);
	printf_s("Spell list");
	gotoxy(88, 5);
	printf_s("%s", hero.spellcaster);
	gotoxy(110, 5);
	printf_s("+ %d", hero.spellac);
	gotoxy(126, 5);
	printf_s("%d", hero.spelldc);
	gotoxy(82, 6);
	printf_s("Spell characteristic    Spell accuracy    Spell DC");
	gotoxy(84, 8);
	printf_s("Cantrips:");
	int j = 10;
	gotoxy(82, j);
	for (int i = 0; i < strlen(hero.spelllist); i++) {
		gotoxy(82, j);
		switch (hero.spelllist[i]) {
		case '1': {
			printf_s("%s", eldritchblast.name);
			break;
		}
		}
		j++;
	}
	gotoxy(84, 16);
	printf_s("1-st level spells:");

	gotoxy(30, 2);
	printf_s("Character list");
	gotoxy(2, 5);
	printf_s("%s", hero.name);
	gotoxy(2, 6);
	printf_s("Hero name");
	gotoxy(42, 5);
	printf_s("%s", hero.classname);
	gotoxy(42, 6);
	printf_s("Class");
	gotoxy(58, 6);
	printf_s("Level");
	gotoxy(59, 5);
	printf_s("%d", hero.level);
	gotoxy(50, 5);
	printf_s("%s", hero.archetypename);
	for (int i = 1; i < 79; i++) {
		gotoxy(i, 7);
		printf_s("_");
	}
	for (int j = 8; j < 32; j++) {
		gotoxy(14, j);
		printf_s("|");
	}
	for (int i = 1; i < 14; i++) {
		gotoxy(i, 31);
		printf_s("_");
	}
	gotoxy(38, 9);
	printf_s("Armor Class");
	gotoxy(39, 10);
	printf_s("%d", hero.armorclass);
	gotoxy(38, 11);
	printf_s("Initiative");
	gotoxy(39, 12);
	printf_s("%d", hero.modDex);
	gotoxy(69, 9);
	printf_s("Temp. Hits");
	gotoxy(72, 10);
	printf_s("%d", hero.temphits);
	gotoxy(59, 9);
	printf_s("Hits");
	gotoxy(60, 10);
	printf_s("%d/%d", hero.tekhits, hero.hits);
	gotoxy(59, 11);
	printf_s("Hit dice");
	gotoxy(60, 12);
	printf_s("d%d", hero.hits - hero.modConst);
	gotoxy(2, 8);
	printf_s("Strength");
	gotoxy(2, 9);
	printf_s("%d", hero.Strength);
	gotoxy(2, 10);
	printf_s("%d Mod", hero.modStr);
	gotoxy(2, 12);
	printf_s("Dexterity");
	gotoxy(2, 13);
	printf_s("%d", hero.Dexterity);
	gotoxy(2, 14);
	printf_s("%d Mod", hero.modDex);
	gotoxy(2, 16);
	printf_s("Constitution");
	gotoxy(2, 17);
	printf_s("%d", hero.Constitution);
	gotoxy(2, 18);
	printf_s("%d Mod", hero.modConst);
	gotoxy(2, 20);
	printf_s("Intellect");
	gotoxy(2, 21);
	printf_s("%d", hero.Intellect);
	gotoxy(2, 22);
	printf_s("%d Mod", hero.modInt);
	gotoxy(2, 24);
	printf_s("Wisdom");
	gotoxy(2, 25);
	printf_s("%d", hero.Wisdom);
	gotoxy(2, 26);
	printf_s("%d Mod", hero.modWis);
	gotoxy(2, 28);
	printf_s("Charisma");
	gotoxy(2, 29);
	printf_s("%d", hero.Charisma);
	gotoxy(2, 30);
	printf_s("%d Mod", hero.modCha);
	int i = 18;
	j = 8;
	gotoxy(i, j);
	printf_s("Str save        %d", hero.saveStr);
	j++;
	gotoxy(i, j);
	printf_s("Dex save        %d", hero.saveDex);
	j++;
	gotoxy(i, j);
	printf_s("Con save        %d", hero.saveCon);
	j++;
	gotoxy(i, j);
	printf_s("Int save        %d", hero.saveInt);
	j++;
	gotoxy(i, j);
	printf_s("Wis save        %d", hero.saveWis);
	j++;
	gotoxy(i, j);
	printf_s("Cha save        %d", hero.saveCha);
	j++;
	gotoxy(i, j);
	printf_s("Acrobatics      %d", hero.acrobatic);
	j++;
	gotoxy(i, j);
	printf_s("Animal Handling %d", hero.animalhandling);
	j++;
	gotoxy(i, j);
	printf_s("Arcana          %d", hero.arcana);
	j++;
	gotoxy(i, j);
	printf_s("Athletics       %d", hero.athletics);
	j++;
	gotoxy(i, j);
	printf_s("Deception       %d", hero.deception);
	j++;
	gotoxy(i, j);
	printf_s("History         %d", hero.history);
	j++;
	gotoxy(i, j);
	printf_s("Insight         %d", hero.insight);
	j++;
	gotoxy(i, j);
	printf_s("Intimidation    %d", hero.intimidation);
	j++;
	gotoxy(i, j);
	printf_s("Investigation   %d", hero.investigation);
	j++;
	gotoxy(i, j);
	printf_s("Medicine        %d", hero.medicine);
	j++;
	gotoxy(i, j);
	printf_s("Nature          %d", hero.nature);
	j++;
	gotoxy(i, j);
	printf_s("Perception      %d", hero.perception);
	j++;
	gotoxy(i, j);
	printf_s("Performance     %d", hero.performance);
	j++;
	gotoxy(i, j);
	printf_s("Persuassion     %d", hero.persuassion);
	j++;
	gotoxy(i, j);
	printf_s("Religion        %d", hero.religion);
	j++;
	gotoxy(i, j);
	printf_s("Sleight of Hand %d", hero.sleightofhand);
	j++;
	gotoxy(i, j);
	printf_s("Stealth         %d", hero.stealth);
	j++;
	gotoxy(i, j);
	printf_s("Survival        %d", hero.survival);

	j = 34;
	gotoxy(52, j - 1);
	printf_s("Abilities");
	for (int i = 0; i < strlen(hero.ablist); i++) {
		gotoxy(54, j);
		switch (hero.ablist[i]) {
		case '1': {
			printf_s("%s", feyancestry.name);
			break;
		}
		case '2': {
			printf_s("%s", darkonesblessing.name);
			break;
		}
		}
		j++;
	}
	j = 34;
	gotoxy(33, j - 1);
	printf_s("Items");
	for (int i = 0; i < strlen(hero.itemlist); i++) {
		gotoxy(35, j);
		switch (hero.itemlist[i]) {
		case '1': {
			printf_s("%s", healingpotion.name);
			break;
		}
		}
		j++;
	}
	j = 34;
	gotoxy(16, j - 1);
	printf_s("Weapons");
	for (int i = 0; i < strlen(hero.weaponlist); i++) {
		gotoxy(18, j);
		switch (hero.weaponlist[i]) {
		case '1': {
			printf_s("%s", dagger.name);
			break;
		}
		case '2': {
			printf_s("%s", quarterstaff.name);
			break;
		}
		case '3': {
			printf_s("%s", magicalshortsword.name);
			break;
		}
		}
		j++;
	}
}