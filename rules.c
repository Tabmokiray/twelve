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

	eldritchblast.level = 0;
	eldritchblast.amount = 1;
	eldritchblast.damage = eldritchblast.amount * d10;
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
	strcpy_s(darkonesblessing.description, 174, "Starting at 1st level, when you reduce a hostile creature to 0 hit points,\nyou gain temporary hit points equal to your Charisma modifier + your warlock level (minimum of 1).");
	darkonesblessing.id = '2';

	dagger.damage = d4;
	dagger.finnese = 1;
	dagger.id = '1';
	strcpy_s(dagger.name, 7, "Dagger");

	magicalshortsword.damage = d6 + 1;
	magicalshortsword.finnese = 1;
	magicalshortsword.id = '3';
	strcpy_s(magicalshortsword.name, 20, "Magical short sword");

	quarterstaff.damage = d8;
	quarterstaff.finnese = 0;
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
	Rataction.damage1 = roll(d4) + Ratstat.modDex;
	Rataction.accur1 = roll(d20) + Rat.proficiency + Ratstat.modDex;

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
	Skeletonaction.damage1 = roll(d6) + Skeletonstat.modDex;
	Skeletonaction.accur1 = roll(d20) + Skeleton.proficiency + Skeletonstat.modDex;

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
	Goblinaction.damage1 = roll(d6) + Goblinstat.modDex;
	Goblinaction.accur1 = roll(d20) + Goblin.proficiency + Goblinstat.modDex;

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
	Banditaction.damage1 = roll(d6) + Banditstat.modDex;
	Banditaction.accur1 = roll(d20) + Bandit.proficiency + Banditstat.modDex;

	Frank.level = 5;
	Frank.proficiency = 3;
	Frankstat.Strength = 18;
	Frankstat.Dexterity = 10;
	Frankstat.Constitution = 14;
	Frankstat.Intellect = 10;
	Frankstat.Wisdom = 15;
	Frankstat.Charisma = 12;
	modif();
	Frank.armorclass = armor.platearmor;
	Frank.hits = (Frank.level - 1) * ((fighter.hitdice / 2) + 1) + fighter.hitdice + Frankstat.modConst * Frank.level;
	strcpy_s(Frank.name, 6, "Frank");
	strcpy_s(Frankaction.action1, 5, "Kick");
	Frankaction.damage1 = roll(d4) + Frankstat.modStr;
	Frankaction.accur1 = roll(d20) + Frank.proficiency + Frankstat.modStr;
}
void modif() {
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

	Frankstat.modStr = (Frankstat.Strength - 10) / 2;
	Frankstat.modDex = (Frankstat.Dexterity - 10) / 2;
	Frankstat.modConst = (Frankstat.Constitution - 10) / 2;
	Frankstat.modInt = (Frankstat.Intellect - 10) / 2;
	Frankstat.modWis = (Frankstat.Wisdom - 10) / 2;
	Frankstat.modCha = (Frankstat.Charisma - 10) / 2;

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
	int lootgold = (roll(10) + roll(10)) * monster.level;
	int lootsilver = (roll(10) + roll(10) * (monster.level + 1));
	int lootcopper = (roll(10) + roll(10) * (monster.level + 2));
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
int roll(int dice) {
	return rand() % dice + 1;
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
			*attack = roll(20) + hero.modDex + hero.proficiency;
			if (*attack == 20 + hero.modDex + hero.proficiency) {
				*damage = dagger.damage + dagger.damage + hero.modDex;
				hero.crit = 1;
			}
		}
		else {
			*damage = dagger.damage + hero.modStr;
			*attack = roll(20) + hero.modStr + hero.proficiency;
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
		*attack = roll(20) + hero.modStr + hero.proficiency;
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
			*attack = roll(20) + hero.modDex + hero.proficiency + 1;
			if (*attack == 20 + hero.modDex + hero.proficiency + 1) {
				*damage = magicalshortsword.damage + magicalshortsword.damage + hero.modDex - 1;
				hero.crit = 1;
			}
		}
		else {
			*damage = magicalshortsword.damage + hero.modStr;
			*attack = roll(20) + hero.modStr + hero.proficiency + 1;
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
		for (int i = 3; i < 174; i++) {
			if (darkonesblessing.description[i - 3] == '\n') {
				j++;
				f = 6;
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
int spell(int z, int* damage, char* typeofdamage) {
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
		strcpy_s(typeofdamage, 6, eldritchblast.typeofdamage);
		int j = 21;
		int f = 6;
		*damage = roll(eldritchblast.damage);
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
				int hitdice = roll(hero.hitdice) + hero.modConst;

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
				printf_s("À long rest can only be spent in quiet places where you can sleep.");
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
void characterlist() {
	system("cls");
	for (int i = 20; i < 100; i++) {
		gotoxy(i, 3);
		printf_s("_");
		gotoxy(i, 57);
		printf_s("_");
	}
	for (int j = 4; j < 58; j++) {
		gotoxy(20, j);
		printf_s("|");
		gotoxy(99, j);
		printf_s("|");
	}
	gotoxy(22, 5);
	printf_s("%s", hero.name);
	gotoxy(22, 6);
	printf_s("Hero name");
	gotoxy(62, 5);
	printf_s("%s", hero.classname);
	gotoxy(62, 6);
	printf_s("Class");
	gotoxy(70, 5);
	printf_s("%s", warlock.archetypename);
	for (int i = 21; i < 99; i++) {
		gotoxy(i, 7);
		printf_s("_");
	}
	for (int j = 8; j < 32; j++) {
		gotoxy(34, j);
		printf_s("|");
	}
	for (int i = 21; i < 34; i++) {
		gotoxy(i, 31);
		printf_s("_");
	}
	gotoxy(40, 9);
	printf_s("Armor Class");
	gotoxy(41, 10);
	printf_s("%d", hero.armorclass);
	gotoxy(40, 11);
	printf_s("Initiative");
	gotoxy(41, 12);
	printf_s("%d", hero.modDex);
	gotoxy(60, 9);
	printf_s("HITS");
	gotoxy(61, 10);
	printf_s("%d", hero.hits);
	gotoxy(60, 11);
	printf_s("Hit dice");
	gotoxy(61, 12);
	printf_s("d%d", hero.hits - hero.modConst);
	gotoxy(22, 8);
	printf_s("Strength");
	gotoxy(22, 9);
	printf_s("%d", hero.Strength);
	gotoxy(22, 10);
	printf_s("%d Mod", hero.modStr);
	gotoxy(22, 12);
	printf_s("Dexterity");
	gotoxy(22, 13);
	printf_s("%d", hero.Dexterity);
	gotoxy(22, 14);
	printf_s("%d Mod", hero.modDex);
	gotoxy(22, 16);
	printf_s("Constitution");
	gotoxy(22, 17);
	printf_s("%d", hero.Constitution);
	gotoxy(22, 18);
	printf_s("%d Mod", hero.modConst);
	gotoxy(22, 20);
	printf_s("Intellect");
	gotoxy(22, 21);
	printf_s("%d", hero.Intellect);
	gotoxy(22, 22);
	printf_s("%d Mod", hero.modInt);
	gotoxy(22, 24);
	printf_s("Wisdom");
	gotoxy(22, 25);
	printf_s("%d", hero.Wisdom);
	gotoxy(22, 26);
	printf_s("%d Mod", hero.modWis);
	gotoxy(22, 28);
	printf_s("Charisma");
	gotoxy(22, 29);
	printf_s("%d", hero.Charisma);
	gotoxy(22, 30);
	printf_s("%d Mod", hero.modCha);
}