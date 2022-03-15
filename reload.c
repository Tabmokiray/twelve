#include "reload.h"
void fullscreen() {
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}
void freeetc() {
	free(eldritchblast.description);
	free(feyancestry.description);
}
void intro() {
	FILE* intro;

	if ((fopen_s(&intro, "intro.txt", "r")) != 0) {
		exit(1);
	}

	intr.text1 = (char*)malloc(350);
	if (intr.text1 == 0) {
		exit(1);
	}
	int i = 0;

	fscanf_s(intro, "%c", &intr.text1[i], 1);
	while (intr.text1[i] != '\0') {
		i++;
		fscanf_s(intro, "%c", &intr.text1[i], 1);
	}
	system("cls");
	system("pause");
	system("cls");
	int z = 5;
	gotoxy(50, z);
	for (int j = 0; j < 344; j++) {
		if (intr.text1[j] == '\n') {
			j++;
			z++;
			gotoxy(50, z);
		}
		printf_s("%c", intr.text1[j]);
		Sleep(80);
	}
	Sleep(5000);
	free(intr.text1);
	fclose(intro);
	system("cls");
}
void picture() {
	FILE* picture, * oldroad;

	if ((fopen_s(&picture, "columns.txt", "r")) != 0) {
		exit(1);
	}

	columns.text1 = (char*)malloc(7000);
	if (columns.text1 == 0) {
		exit(1);
	}
	int i = 0;
	fscanf_s(picture, "%c", &columns.text1[i], 1);
	while (columns.text1[i] != '\0') {
		i++;
		fscanf_s(picture, "%c", &columns.text1[i], 1);
	}
	gotoxy(0, 0);
	for (int j = 0; j < 5240; j++) {
		printf_s("%c", columns.text1[j]);
	}
	if ((fopen_s(&oldroad, "oldroad.txt", "r")) != 0) {
		exit(1);
	}

	columns.text2 = (char*)malloc(7000);
	if (columns.text2 == 0) {
		exit(1);
	}
	i = 0;
	fscanf_s(oldroad, "%c", &columns.text2[i], 1);
	while (columns.text2[i] != '\0') {
		i++;
		fscanf_s(oldroad, "%c", &columns.text2[i], 1);
	}
	int z = 3;
	gotoxy(115, z);
	for (int j = 0; j < 472; j++) {
		if (columns.text2[j] == '\n') {
			z++;
			gotoxy(115, z);
			j++;
		}
		printf_s("%c", columns.text2[j]);
		Sleep(80);
	}
	Sleep(10000);
	free(columns.text1);
	free(columns.text2);
	fclose(oldroad);
	fclose(picture);
}
void stage0() {
	char control = 0;
	rulegoblin();
	while (control != '`') {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 27) {
			system("cls");
			goblin();

		}
		if (control != 'i')
			clearchat();

		actions(&control);
		if (hero.progress > 0) {
			break;
		}
	}
}
void stage1() {
	char control = 0;
	rulebandit();
	while (control != '`') {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 27) {
			system("cls");
			bandit();
		}
		clearchat();


		actions(&control);
		if (hero.progress > 1) {
			break;
		}
	}
}
void stages() {
	switch (hero.progress) {
	case 0: {
		intro();
		picture();
		stage0();
	}
	case 1: {
		stage1();
	}
	}
}
void clearchat() {
	for (int i = 3; i < 42; i++) {
		for (int j = 0; j < 10; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	for (int i = 0; i < 103; i++) {
		for (int j = 17; j < 30; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	gotoxy(30, 12);
	printf_s("Dagger");
	gotoxy(31, 13);
	printf_s("(1)");
	gotoxy(40, 12);
	printf_s("Abilities");
	gotoxy(41, 13);
	printf_s("(2)");
	gotoxy(50, 12);
	printf_s("Spells");
	gotoxy(56, 13);
	printf_s("(3)");
	gotoxy(70, 12);
	printf_s("Run away");
	gotoxy(73, 13);
	printf_s("(4)");
	gotoxy(50, 15);
	printf_s("Your hits: %d/%d  ", hero.tekhits, hero.hits);
	gotoxy(50, 16);
	printf_s("Your armor class: %d", hero.armorclass);
	gotoxy(50, 1);
	printf_s("%s hits: %d  ", monster.name, monster.hits);
	gotoxy(50, 2);
	printf_s("                       ");
}
void actions(char* control) {
	if (*control == '1') {
		gotoxy(3, 3);
		int attack = roll(20) + hero.modDex + hero.proficiency;
		printf_s("You try to Attack: %d...", attack);
		Sleep(1500);
		if (attack < monster.armorclass) {
			gotoxy(3, 4);
			printf_s("Failed");
			Sleep(1500);
		}
		else {
			gotoxy(3, 4);
			int damage = roll(dagger.damage) + hero.modDex;
			printf_s("You deal %d piercing damage", damage);
			monster.hits -= damage;
			Sleep(1500);
		}

		clearchat();
		if (monster.hits < 1) {
			gotoxy(3, 5);
			printf_s("You win!");
			Sleep(1500);
			system("cls");
			loot();
			Sleep(1500);
			hero.progress += 1;
		}

	}
	if (*control == '2') {
		gotoxy(3, 3);
		printf_s("Choose the ability:");
		int j = 4;
		for (int i = 0; i < strlen(hero.ablist) + 1; i++) {
			gotoxy(3, j);
			if (hero.ablist[i] != '0')
				printf_s("(%c) ", hero.ablist[i]);
			switch (hero.ablist[i]) {
			case '1': {
				printf_s("%s", feyancestry.name);
				break;
			}
			}
			j++;
		}
		char ch = _getch();
		int choose = ch - '0';
		choose--;
		int characteristic = 0;
		int damage = 0;
		int type = abilitydesc(choose, &damage, &characteristic);
		Sleep(3000);
		clearchat();
		int attack;
		int savingthrow;
		if (type == 1) {
			gotoxy(3, j);
			j++;
			attack = roll(20) + hero.modCha + hero.proficiency;
			printf_s("You try to attack with the ability: %d...", attack);
			Sleep(1500);
			if (attack < monster.armorclass) {
				gotoxy(3, j);
				j++;
				printf_s("Failed");
				Sleep(1500);
			}
			else {
				gotoxy(3, j);
				j++;
				printf_s("You deal %d force damage", damage);
				monster.hits -= damage;
				Sleep(1500);
			}
		}
		if (type == 2) {
			gotoxy(3, j);
			j++;
			switch (characteristic) {
			case 1: {
				savingthrow = roll(20) + monster.modStr;
				break;
			}
			case 2: {
				savingthrow = roll(20) + monster.modDex;
				break;
			}
			case 3: {
				savingthrow = roll(20) + monster.modCon;
				break;
			}
			case 4: {
				savingthrow = roll(20) + monster.modInt;
				break;
			}
			case 5: {
				savingthrow = roll(20) + monster.modWis;
				break;
			}
			case 6: {
				savingthrow = roll(20) + monster.modCha;
				break;
			}
			}
			printf_s("The monster is trying to dodge: %d...", savingthrow);
			Sleep(1500);
			if (savingthrow >= hero.spelldc) {
				gotoxy(3, j);
				j++;
				printf_s("Failed");
				Sleep(1500);
				gotoxy(3, j);
				j++;
				
			}
			else {
				gotoxy(3, j);
				j++;
				printf_s("Monster couldn't dodge");
				gotoxy(3, j);
				j++;
				if (damage > 0) {
					printf_s("You deal %d force damage", damage);
					monster.hits -= damage;
				}
				gotoxy(3, j);
				j++;
				switch (hero.mode) {
				case 1: {
					printf_s("The monster is frightend");
					monster.condition = 1;
					break;
				}
				case 2: {
					printf_s("The monster is charmed");
					monster.condition = 2;
					break;
				}
				}
				Sleep(1500);
			}
		}
		clearchat();
		if (monster.hits < 1) {
			gotoxy(3, j);
			j++;
			printf_s("You win!");
			Sleep(1500);
			system("cls");
			loot();
			Sleep(1500);
			hero.progress += 1;
		}
		clearchat();
	}
	if (*control == '3') {
		gotoxy(3, 3);
		printf_s("Choose the spell:");
		int j = 4;
		for (int i = 0; i < strlen(hero.spelllist) + 1; i++) {
			gotoxy(3, j);
			if (hero.spelllist[i] != '0')
				printf_s("(%c) ", hero.spelllist[i]);
			switch (hero.spelllist[i]) {
			case '1': {
				printf_s("%s", eldritchblast.name);
				break;
			}
			}
			j++;
		}
		char ch = _getch();
		int choose = ch - '0';
		choose--;
		int damage = 0;
		int type = spell(choose, &damage);
		Sleep(3000);
		clearchat();
		int attack;
		int savingthrow;
		if (type == 1) {
			gotoxy(3, j);
			j++;
			attack = roll(20) + hero.modCha + hero.proficiency;
			printf_s("You try to attack with the spell: %d...", attack);
			Sleep(1500);
			if (attack < monster.armorclass) {
				gotoxy(3, j);
				j++;
				printf_s("Failed");
				Sleep(1500);
			}
			else {
				gotoxy(3, j);
				j++;
				printf_s("You deal %d force damage", damage);
				monster.hits -= damage;
				Sleep(1500);
			}
		}
		clearchat();
		if (monster.hits < 1) {
			gotoxy(3, j);
			j++;
			printf_s("You win!");
			Sleep(1500);
			system("cls");
			loot();
			Sleep(1500);
			hero.progress += 1;
		}

	}
	if (monster.hits > 0)
		if (*control == '1' || *control == '2' || *control == '3') {
			gotoxy(3, 3);
			printf_s("%s turn!", monster.name);
			Sleep(1500);
			gotoxy(3, 4);
			int attack = monsteraction.accur1;
			condition(&attack);
			printf_s("%s trying to Attack: %d...", monster.name, attack);
			Sleep(1500);
			if (attack < hero.armorclass) {
				gotoxy(3, 5);
				printf_s("Failed");
				Sleep(1500);
			}
			else {
				gotoxy(3, 5);
				int damage = monsteraction.damage1;
				printf_s("%s deal %d slashing damage", monster.name, damage);
				hero.tekhits -= damage;
				Sleep(1500);
			}
			clearchat();
			if (hero.tekhits < 1) {
				gotoxy(3, 6);
				printf_s("%s wins!", monster.name);
				Sleep(1500);
				stages();
			}

		}
}
void condition(int*attack) {
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
void charactercreator() {
	char choose;
	fighter.hitdice = 10;
	fighter.spellcaster = 0;
	hero.level = 1;
	warlock.hitdice = 8;
	warlock.spellcaster = 1;
	human.darkvision = 0;
	human.speed = 30;
	human.size = 1;
	hero.Strength = 8;
	hero.Dexterity = 8;
	hero.Constitution = 8;
	hero.Intellect = 8;
	hero.Wisdom = 8;
	hero.Charisma = 8;
	hero.armormod = 0;
	hero.gold = 10;
	hero.silver = 0;
	hero.copper = 0;
	hero.progress = 0;
	gotoxy(50, 5);
	printf_s("Choose your race: - Human(1)");
	gotoxy(50, 6);
	while (hero.race == 0) {
		choose = _getch();
		switch (choose) {
		case '1': {
			strcpy_s(hero.racename, 6, "Human");
			hero.race = human.race;
			printf_s("Time to generate your stats");
			system("cls");
			int points = 27;
			while (1) {
				system("cls");
				gotoxy(50, 15);
				printf_s("Total Points: %d/27", points);
				gotoxy(50, 17);
				printf_s("Human race give +1 to each stat");
				for (int j = 6; j < 12; j++) {
					gotoxy(88, j);
					printf_s("+1");
				}
				if (statgenerator(&points) == '-') {
					hero.Strength += human.str;
					hero.Dexterity += human.dex;
					hero.Constitution += human.con;
					hero.Intellect += human.intl;
					hero.Wisdom += human.wis;
					hero.Charisma += human.cha;
					modif();
					hero.armorclass = 10 + hero.modDex + hero.armormod;
					break;
				}

			}
			system("cls");
			break;
		}
		}
	}
	gotoxy(50, 5);
	printf_s("Write name of your character");
	int i = -1;
	char n;
	gotoxy(50, 6);
	do {
		i++;
		scanf_s("%c", &hero.name[i], 1);
	} while (hero.name[i] != '\n');



	hero.name[i] = '\0';
	gotoxy(50, 7);
	printf_s("%s? Wonderful name!", hero.name);
	Sleep(1000);
	system("cls");
	gotoxy(50, 5);
	printf_s("Choose your class");
	gotoxy(50, 6);
	printf_s("Warlock(1)");
	while (hero.hitdice == 0) {
		choose = _getch();
		switch (choose) {
		case '1': {
			hero.class = warlock.class;
			strcpy_s(hero.classname, 8, "Warlock");
			hero.hitdice = warlock.hitdice;
			hero.hits = hero.hitdice + hero.modConst;
			hero.tekhits = hero.hits;
			hero.spelllist[0] = eldritchblast.id;
			hero.armormod = armor.leatherarmor;
			system("cls");
			gotoxy(50, 5);
			printf_s("Choose your Otherwordly patron");
			gotoxy(50, 6);
			printf_s("Archfey(1) Fiend(2)");
			gotoxy(50, 8);
			printf_s("Otherwordly patron");
			gotoxy(50, 9);
			printf_s("At 1st level, you have struck a bargain with an otherworldly being chosen from the list of available patrons.");
			gotoxy(50, 10);
			printf_s("Your choice grants you features at 1st level and again at 6th, 10th, and 14th level.");
			choose = _getch();
			switch (choose) {
			case '1': {
				warlock.archetype = 1;
				strcpy_s(warlock.archetypename, 8, "Archfey");
				for (int i = 50; i < 161; i++) {
					for (int j = 8; j < 11; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				gotoxy(50, 8);
				printf_s("The Archfey");
				gotoxy(50, 9);
				printf_s("Your patron is a lord or lady of the fey, a creature of legend who holds secrets");
				gotoxy(50, 10);
				printf_s("that were forgotten before the mortal races were born.");
				gotoxy(50, 11);
				printf_s("This being's motivations are often inscrutable, and sometimes whimsical, and might involve");
				gotoxy(50, 12);
				printf_s(" a striving for greater magical power or the settling of age-old grudges.");
				hero.ablist[0] = feyancestry.id;

				Sleep(8000);
				break;
			}
			case '2': {
				warlock.archetype = 2;
				strcpy_s(warlock.archetypename, 6, "Fiend");
				for (int i = 50; i < 161; i++) {
					for (int j = 8; j < 11; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				gotoxy(50, 8);
				printf_s("The Fiend");
				gotoxy(50, 9);
				printf_s("You have made a pact with a fiend from the lower planes of existence, a being whose aims are evil,");
				gotoxy(50, 10);
				printf_s("even if you strive against those aims. Such beings desire the corruption or destruction of all things,");
				gotoxy(50, 11);
				printf_s("ultimately including you.");
				hero.ablist[0] = darkonesblessing.id;

				Sleep(8000);
				break;
			}
			}
			break;
		}
		}
	}
	system("cls");
}

int abilitydesc(int z, int* damage, int* characteristic) {
	for (int j = 18; j < 29; j++) {
		gotoxy(0, j);
		printf_s("|");
		gotoxy(100, j);
		printf_s("|");
	}
	for (int i = 0; i < 100; i++) {
		gotoxy(i, 17);
		printf_s("_");
		gotoxy(i, 29);
		printf_s("_");
	}
	switch (hero.ablist[z]) {
	case '1': {
		*characteristic = 5;
		hero.spelldc = hero.modCha + hero.proficiency + 8;
		int j = 19;
		int f = 3;
		for (int i = 3; i < 310; i++) {
			if (feyancestry.description[i - 3] == '\n') {
				j++;
				f = 3;
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
	}
}
void start() {
	FILE* wood;
	if ((fopen_s(&wood, "wood.txt", "r")) != 0) {
		exit(1);
	}

	intr.text2 = (char*)malloc(4000);
	if (intr.text2 == 0) {
		exit(1);
	}
	int i = 0;

	fscanf_s(wood, "%c", &intr.text2[i], 1);
	while (intr.text2[i] != '\0') {
		i++;
		fscanf_s(wood, "%c", &intr.text2[i], 1);
	}
	gotoxy(50, 5);
	system("cls");
	int k = 0;
	Sleep(2000);
	gotoxy(30, k);
	for (int j = 0; j < 3736; j++) {
		if (intr.text2[j] == '\n') {
			Sleep(80);
			k++;
			j++;
			gotoxy(30, k);
		}
		printf_s("%c", intr.text2[j]);
	}
	free(intr.text2);
	fclose(wood);
	Sleep(2000);
	system("cls");
	gotoxy(50, 5);
	printf_s("The Sunless Citadel");
	gotoxy(50, 7);
	printf_s("Start or continue game(1)");
	gotoxy(50, 8);
	printf_s("Settings(2)");
	gotoxy(50, 9);
	printf_s("Exit(3)");
	char control = _getch();
	switch (control) {
	case '1': {
		break;
	}
	case '2': {
		break;
	}
	case '3': {
		system("cls");
		gotoxy(50, 5);
		printf_s("See you later ^_^");
		gotoxy(60, 5);
		Sleep(1500);
		exit(1);
	}
	}

	system("cls");


}
char statgenerator(int* points) {
	modif();
	gotoxy(50, 5);
	printf_s("Type - to stop");
	gotoxy(50, 6);
	printf_s("Strength      %d  %d  -(0) +(1)", hero.Strength, hero.modStr);
	gotoxy(50, 7);
	printf_s("Dexterity     %d  %d  -(2) +(3)", hero.Dexterity, hero.modDex);
	gotoxy(50, 8);
	printf_s("Constitution  %d  %d  -(4) +(5)", hero.Constitution, hero.modConst);
	gotoxy(50, 9);
	printf_s("Intellect     %d  %d  -(6) +(7)", hero.Intellect, hero.modInt);
	gotoxy(50, 10);
	printf_s("Wisdom        %d  %d  -(8) +(9)", hero.Wisdom, hero.modWis);
	gotoxy(50, 11);
	printf_s("Charisma      %d  %d  -(q) +(w)", hero.Charisma, hero.modCha);
	char plus = -1;
	plus = _getch();
	switch (plus) {
	case '-': {
		return '-';
	}
	case '0': {
		if (hero.Strength > 8) {
			hero.Strength--;
			if (hero.Strength == 13 || hero.Strength == 14) {
				*points += 2;
			}
			else {
				*points += 1;
			}
		}
		break;
	}
	case '1': {
		if (hero.Strength < 15 && *points>0) {

			if (hero.Strength == 13 || hero.Strength == 14) {
				if (*points > 1) {
					*points -= 2;
				}
				else {
					break;
				}
			}
			else {
				*points -= 1;
			}
			hero.Strength++;
		}
		break;
	}
	case '2': {
		if (hero.Dexterity > 8) {
			hero.Dexterity--;
			if (hero.Dexterity == 13 || hero.Dexterity == 14) {
				*points += 2;
			}
			else {
				*points += 1;
			}
		}
		break;
	}
	case '3': {
		if (hero.Dexterity < 15 && *points>0) {
			if (hero.Dexterity == 13 || hero.Dexterity == 14) {
				if (*points > 1) {
					*points -= 2;
				}
				else {
					break;
				}
			}
			else {
				*points -= 1;
			}
			hero.Dexterity++;

		}
		break;
	}
	case '4': {
		if (hero.Constitution > 8) {
			hero.Constitution--;
			if (hero.Constitution == 13 || hero.Constitution == 14) {
				*points += 2;
			}
			else {
				*points += 1;
			}
		}
		break;
	}
	case '5': {
		if (hero.Constitution < 15 && *points>0) {
			if (hero.Constitution == 13 || hero.Constitution == 14) {
				if (*points > 1) {
					*points -= 2;
				}
				else {
					break;
				}
			}
			else {
				*points -= 1;
			}
			hero.Constitution++;

		}
		break;
	}
	case '6': {
		if (hero.Intellect > 8) {
			hero.Intellect--;
			if (hero.Intellect == 13 || hero.Intellect == 14) {
				*points += 2;
			}
			else {
				*points += 1;
			}
		}
		break;
	}
	case '7': {
		if (hero.Intellect < 15 && *points>0) {
			if (hero.Intellect == 13 || hero.Intellect == 14) {
				if (*points > 1) {
					*points -= 2;
				}
				else {
					break;
				}
			}
			else {
				*points -= 1;
			}
			hero.Intellect++;

		}
		break;
	}
	case '8': {
		if (hero.Wisdom > 8) {
			hero.Wisdom--;
			if (hero.Wisdom == 13 || hero.Wisdom == 14) {
				*points += 2;
			}
			else {
				*points += 1;
			}
		}
		break;
	}
	case '9': {
		if (hero.Wisdom < 15 && *points>0) {
			if (hero.Wisdom == 13 || hero.Wisdom == 14) {
				if (*points > 1) {
					*points -= 2;
				}
				else {
					break;
				}
			}
			else {
				*points -= 1;
			}
			hero.Wisdom++;

		}
		break;
	}
	case 'q': {
		if (hero.Charisma > 8) {
			hero.Charisma--;
			if (hero.Charisma == 13 || hero.Charisma == 14) {
				*points += 2;
			}
			else {
				*points += 1;
			}
		}
		break;
	}
	case 'w': {
		if (hero.Charisma < 15 && *points>0) {
			if (hero.Charisma == 13 || hero.Charisma == 14) {
				if (*points > 1) {
					*points -= 2;
				}
				else {
					break;
				}
			}
			else {
				*points -= 1;
			}
			hero.Charisma++;

		}
		break;
	}
	default: {
		break;
	}

	}
	modif();
}
int amountofspells() {
	return hero.level + 1;
}
void save() {
	char cntrl = 0;
	while (cntrl != '1' && cntrl != '2') {
		gotoxy(50, 5);
		printf_s("Would you like to create a character?");
		gotoxy(50, 6);
		printf_s("Yes(1)  I already have one(2)");
		cntrl = _getch();
		system("cls");
		switch (cntrl) {
		case '1': {
			charactercreator();
			FILE* output;
			if (fopen_s(&output, OUTPUT_FILE_NAME, "w")) {
				printf_s(ERR_OPEN_FILE, OUTPUT_FILE_NAME);
				exit(1);
			}
			fprintf_s(output, "%d %d %d %d %d %d ", hero.Strength, hero.Dexterity, hero.Constitution, hero.Intellect, hero.Wisdom, hero.Charisma);
			fprintf_s(output, "%d %d %d %d %d %d %d ", hero.hits, hero.tekhits, hero.armorclass, hero.armormod, hero.gold, hero.silver, hero.copper);
			fprintf_s(output, "%d %d %d %d %d %d %d ", hero.xp, hero.level, hero.hitdice, hero.class, hero.progress, hero.proficiency, hero.race);
			fprintf_s(output, "%s %s", hero.spelllist, hero.name);
			fclose(output);
			break;
		}
		case '2': {
			FILE* input;
			if (fopen_s(&input, INPUT_FILE_NAME, "r")) {
				printf_s(ERR_OPEN_FILE, INPUT_FILE_NAME);
				exit(1);
			}
			fscanf_s(input, "%d %d %d %d %d %d", &hero.Strength, &hero.Dexterity, &hero.Constitution, &hero.Intellect, &hero.Wisdom, &hero.Charisma);
			fscanf_s(input, "%d %d %d %d %d %d %d", &hero.hits, &hero.tekhits, &hero.armorclass, &hero.armormod, &hero.gold, &hero.silver, &hero.copper);
			fscanf_s(input, "%d %d %d %d %d %d %d", &hero.xp, &hero.level, &hero.hitdice, &hero.class, &hero.progress, &hero.proficiency, &hero.race);
			fscanf_s(input, "%s %s", hero.spelllist, amountofspells(), hero.name, 20);
			switch (hero.class) {
			case 1: {
				strcpy_s(hero.classname, 8, "Warlock");
				break;
			}
			}
			switch (hero.race) {
			case 1: {
				strcpy_s(hero.racename, 6, "Human");
				break;
			}
			}
			modif();
			fclose(input);
			break;
		}
		}
	}
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
void hidecursor()
{
	HANDLE hCons;
	CONSOLE_CURSOR_INFO cci;
	hCons = GetStdHandle(STD_OUTPUT_HANDLE);
	cci.dwSize = 1;
	cci.bVisible = 0;
	SetConsoleCursorInfo(hCons, &cci);
}
void gotoxy(int column, int row)
{
	HANDLE hCons;
	COORD crd;
	hCons = GetStdHandle(STD_OUTPUT_HANDLE);
	//#ifdef MY_DEBUG
	//  if (hCons == INVALID_HANDLE_VALUE || hCons == 0) printf("\nERROR!!!\n");
	//#endif  	  
	crd.X = (short)column;
	crd.Y = (short)row;
	//#ifedf MY_DEBUG
	// if (SetConsoleCursorPosition(hCons,crd) == 0) printf("\nERROR2\n");
	//#else 
	SetConsoleCursorPosition(hCons, crd);
	//#endif
}