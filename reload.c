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
void room0() {
	system("cls");
	gotoxy(50, 5);
	printf_s("What you want to do?");
	gotoxy(40, 6);
	printf_s("Investigate(1)            Stand next to the ravine(2)          Try to climb down(3)");
	int rope = 0;
	while (1) {
		char choose = _getch();
		if (choose == 's') {
			createsave();
		}
		switch (choose) {
		case '1': {
			gotoxy(50, 8);
			printf_s("You discover that the pillars are generally worn and broken,");
			gotoxy(50, 9);
			printf_s("and graffiti in the Dwarven alphabet covers most of them.");
			gotoxy(40, 6);
			printf_s("Try to translate(1)");
			choose = _getch();
			if (choose == 's') {
				createsave();
			}
			if (choose != '1') {

			}
			else {
				gotoxy(50, 10);
				printf_s("You recognize the inscriptions as warnings and threats against potential trespassers");
				char s = _getch();
				if (s == 's') {
					createsave();
				}
				gotoxy(40, 6);
				printf_s("Investigate(1)      ");

			}
			for (int i = 40; i < 140; i++) {
				for (int j = 7; j < 20; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			break;
		}
		case '2': {
			gotoxy(50, 8);
			printf_s("You immediately notes");
			gotoxy(50, 9);
			printf_s("a sturdy knotted rope tied to one of the leaning pillars.");
			gotoxy(50, 10);
			printf_s("The rope hangs down into the darkness below. Judging by");
			gotoxy(50, 11);
			printf_s("its good condition, the rope couldn't have been tied there");
			gotoxy(50, 12);
			printf_s("any longer than two or three weeks ago. Player characters");
			gotoxy(50, 13);
			printf_s("can also see older and weathered hand - and footholds");
			gotoxy(50, 14);
			printf_s("carved into the cliff face. These are goblin - carved.");
			rope = 1;
			char s = _getch();
			if (s == 's') {
				createsave();
			}
			for (int i = 40; i < 140; i++) {
				for (int j = 7; j < 20; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			break;
		}
		case '3': {
			gotoxy(50, 8);
			if (rope == 1) {
				printf_s("You try to climb down the knotted rope,");
				gotoxy(50, 9);
				int athletic = hero.modStr + roll(20);
				printf_s("using the wall to brace yourself...%d", athletic);
				if (athletic < 10) {
					gotoxy(50, 10);
					Sleep(1500);
					printf_s("Failed");
					gotoxy(50, 11);
					printf_s("You fall down about 25 feet");
					gotoxy(50, 12);
					int damage = 2 * roll(6);
					printf_s("You take %d bludgeoning damage from falling", damage);
					Sleep(3000);
					if (hero.temphits < 1) {
						hero.tekhits -= damage;
					}
					else {
						hero.temphits -= damage;
						if (hero.temphits < 0) {
							hero.tekhits += hero.temphits;
						}
					}
					if (hero.tekhits < 1) {
						gotoxy(50, 13);
						printf_s("You died");
						hero.tekhits = hero.hits;
						char s = _getch();
						if (s == 's') {
							createsave();
						}
						stages();
					}
					else {
						hero.progress += 1;
						stages();
					}
				}
				else {
					gotoxy(50, 10);
					Sleep(1500);
					printf_s("Success");
					hero.progress += 1;
					Sleep(5000);
					stages();
				}
			}
			else {
				printf_s("You try to climb the naked rock using the carved hand");
				gotoxy(50, 9);
				int athletic = hero.modStr + roll(20);
				printf_s("and footholds...%d", athletic);
				Sleep(1500);
				if (athletic < 15) {
					gotoxy(50, 10);
					Sleep(1500);
					printf_s("Failed");
					gotoxy(50, 11);
					printf_s("You fall down about 25 feet");
					gotoxy(50, 12);
					int damage = 2 * roll(6);
					printf_s("You take %d bludgeoning damage from falling", damage);
					Sleep(3000);
					if (hero.temphits < 1) {
						hero.tekhits -= damage;
					}
					else {
						hero.temphits -= damage;
						if (hero.temphits < 0) {
							hero.tekhits += hero.temphits;
						}
					}
					if (hero.hits < 1) {
						gotoxy(50, 13);
						printf_s("You died");
						char s = _getch();
						if (s == 's') {
							createsave();
						}
						stages();
					}
					else {
						hero.progress += 1;
						stages();
					}

				}
				else {
					gotoxy(50, 10);
					Sleep(1500);
					printf_s("Success");
					Sleep(5000);
					hero.progress += 1;
					stages();
				}
			}
			break;
		}
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
void room1() {
	gotoxy(50, 5);
	printf_s("A sandy ledge overlooks a subterranean gulf of dark-");
	gotoxy(50, 6);
	printf_s("ness to the west. The ledge is wide but rough. Sand,");
	gotoxy(50, 7);
	printf_s("rocky debris, and the bones of small animals cover");
	gotoxy(50, 8);
	printf_s("it. A roughly hewn stairwell zigs and zags down the");
	gotoxy(50, 9);
	printf_s("side of the ledge, descending into darkness.");
	char choose = '0';
	char s = _getch();
	if (s == 's') {
		createsave();
	}
	gotoxy(50, 11);
	printf_s("You hear how a giant rat, hidden in the darkness and stones, pounces on you");
	s = _getch();
	if (s == 's') {
		createsave();
	}
	system("cls");
	switch (stage2()) {
	case 1: {
		system("cls");
		gotoxy(50, 5);
		printf_s("What you want to do?");
		gotoxy(50, 6);
		printf_s("Go down the ledge(1) Make short rest(2)");
		while (1) {
			choose = _getch();
			if (choose == 's') {
				createsave();
			}
			switch (choose) {
			case '1': {
				hero.progress += 1;
				stages();
				break;
			}
			case '2': {
				shortrest();
				system("cls");
				gotoxy(50, 5);
				printf_s("What you want to do?");
				gotoxy(50, 6);
				printf_s("Go down the ledge(1) Make short rest(2)");
				break;
			}
			}
		}
	}
	case 2: {
		stages();
	}
	}

}
void room2() {
	system("cls");
	gotoxy(50, 5);
	printf_s("At the edge of sight, a fortress top emerges from the");
	gotoxy(50, 6);
	printf_s("darkness. The subterranean citadel, though impres-");
	gotoxy(50, 7);
	printf_s("sive, seems long forgotten, if the lightless windows");
	gotoxy(50, 8);
	printf_s("cracked crenellations, and leaning towers are any");
	gotoxy(50, 9);
	printf_s("indication. All is quiet, though a cold breeze blows");
	gotoxy(50, 10);
	printf_s("up from below, bringing with it the scent of dust");
	gotoxy(50, 11);
	printf_s("and a faint trace of rot.");
	char s = _getch();
	if (s == 's') {
		createsave();
	}
	system("cls");
	gotoxy(50, 5);
	printf_s("What you want to do?");
	gotoxy(50, 6);
	printf_s("Enter in the citadel(1)");
	char choose = '0';
	while (choose != '1') {
		choose = _getch();
		if (choose == 's') {
			createsave();
		}
		switch (choose) {
		case '1': {
			hero.progress += 1;
			room3();
			break;
		}
		}

	}
}
void room3() {
	system("cls");
	gotoxy(50, 5);
	printf_s("This circular area is cobbled with cracked granite,");
	gotoxy(50, 6);
	printf_s("upon which sprawl four goblins, all apparently slain");
	gotoxy(50, 7);
	printf_s("in combat. One stands with its back against the");
	gotoxy(50, 8);
	printf_s("western wall, the killing spear still skewering it and");
	gotoxy(50, 9);
	printf_s("holding it upright. Three wooden doors lead off");
	gotoxy(50, 10);
	printf_s("from this the area. Above, a hollow tower of loose");
	gotoxy(50, 11);
	printf_s("masonry reaches 30 feet, but the intervening floors");
	gotoxy(50, 12);
	printf_s("and stairs are gone, except for a couple of crumbled ledges.");
	char s = _getch();
	if (s == 's') {
		createsave();
	}
	system("cls");
	gotoxy(50, 5);
	printf_s("What do you want to do?");
	gotoxy(20, 6);
	char choose = '0';
	int perc = 0;
	printf_s("Investigate the bodies(1) Remove the spear from the wall(2) Investigate the walls(3) Go to the north door(4) Go to the soutn door(5)");
	while (1) {
		choose = _getch();
		if (choose == 's') {
			createsave();
		}
		switch (choose) {
		case '1': {
			gotoxy(50, 8);
			printf_s("Investigation reveals that the four goblin bodies are");
			gotoxy(50, 9);
			printf_s("about a month dead, though rats have gnawed at them.");
			gotoxy(50, 10);
			printf_s("The bodies are looted of all valuables.");
			char s = _getch();
			if (s == 's') {
				createsave();
			}
			for (int i = 50; i < 150; i++) {
				for (int j = 8; j < 11; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			break;
		}
		case '2': {
			gotoxy(50, 8);
			printf_s("The body slumps to reveal deep - set and impressive runes in the wall.");
			gotoxy(50, 9);
			printf_s("<< Ashardalon >>");
			char s = _getch();
			if (s == 's') {
				createsave();
			}
			for (int i = 50; i < 150; i++) {
				for (int j = 8; j < 10; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			break;
		}
		case '3': {
			gotoxy(50, 8);
			int perception = roll(20) + hero.modWis;
			printf_s("You try to investigate the walls...%d", perception);
			if (perception < 14 || perc == -1) {
				gotoxy(50, 9);
				Sleep(2000);
				printf_s("Failed. You didn't find anything interesting");
				perc = -1;

			}
			else {
				Sleep(2000);
				gotoxy(50, 9);
				printf_s("Success. You find a secret door");
				gotoxy(20, 6);
				printf_s("Investigate the bodies(1) Remove the spear from the wall(2) Go to the secret door(9) Go to the north door(4) Go to the soutn door(5)");
			}
			for (int i = 50; i < 150; i++) {
				for (int j = 8; j < 11; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			break;
		}
		case'9': {
			if (perc == -1) {
				break;
			}
			//skeleton
			break;
		}
		case '4': {
			gotoxy(50, 7);
			printf_s("This room will be available later");
			char s = _getch();
			if (s == 's') {
				createsave();
			}
			gotoxy(50, 7);
			printf_s("                                 ");
			break;
		}
		case '5': {
			gotoxy(50, 7);
			printf_s("This room will be available later");
			char s = _getch();
			if (s == 's') {
				createsave();
			}
			gotoxy(50, 7);
			printf_s("                                 ");
			break;
		}
		}



	}

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
	char s = _getch();
	if (s == 's') {
		createsave();
	}
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
	char s = _getch();
	if (s == 's') {
		createsave();
	}
	free(columns.text1);
	free(columns.text2);
	fclose(oldroad);
	fclose(picture);
}
int stage0() {
	char control = 0;
	rulegoblin();
	goblin();
	clearchat();
	while (control != '`') {
		control = _getch();
		if (control == 's') {
			createsave();
		}
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i') {
			goblin();
			clearchat();
		}

		if (actions(&control) == 1) {
			return 1;
		}

	}
}
int stage1() {
	char control = 0;
	rulebandit();
	bandit();
	clearchat();
	while (control != '`') {
		control = _getch();
		if (control == 's') {
			createsave();
		}
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i') {
			bandit();
			clearchat();
		}
		if (actions(&control) == 1) {
			return 1;
		}

	}
}
int stage2() {
	char control = 0;
	rulerat();
	rat();
	clearchat();
	while (control != '`') {
		control = _getch();
		if (control == 's') {
			createsave();
		}
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i') {
			rat();
			clearchat();
		}

		switch (actions(&control)) {
		case 1: {
			return 1;
			break;
		}
		case 2: {
			return 2;
			break;
		}
		}
	}
}
void stages() {
	system("cls");
	switch (hero.progress) {
	case 0: {
		intro();
		picture();
		room0();
	}
	case 1: {
		room1();
	}
	case 2: {
		room2();
	}
	case 3: {
		room3();
	}
	}
}
void clearchat() {
	for (int i = 3; i < 42; i++) {
		for (int j = 0; j < 16; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	for (int i = 3; i < 106; i++) {
		for (int j = 16; j < 32; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	int j = 16;
	gotoxy(50, j);
	printf_s("Weapons");
	gotoxy(53, j + 1);
	printf_s("(1)");
	gotoxy(70, j);
	printf_s("Abilities");
	gotoxy(75, j + 1);
	printf_s("(2)");
	gotoxy(90, j);
	printf_s("Spells");
	gotoxy(92, j + 1);
	printf_s("(3)");
	gotoxy(50, j + 2);
	printf_s("                                                                                ");
	gotoxy(50, j + 2);
	printf_s("Your armor class: %d     Your hits: %d/%d    Your temporary hits: %d   ", hero.armorclass, hero.tekhits, hero.hits, hero.temphits);
	gotoxy(70, 1);
	printf_s("%s hits: %d  ", monster.name, monster.hits);
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
	}
}
int actions(char* control) {
	if (*control == '1') {
		gotoxy(3, 3);
		printf_s("Choose the weapon:");
		int j = 4;
		for (int i = 0; i < strlen(hero.weaponlist) + 1; i++) {
			gotoxy(3, j);
			if (hero.weaponlist[i] != '0')
				printf_s("(%c) ", hero.weaponlist[i]);
			switch (hero.weaponlist[i]) {
			case '1': {
				printf_s("%s", dagger.name);
				break;
			}
			case '2': {
				printf_s("%s", quarterstaff.name);
				break;
			}
			}
			j++;
		}
		char ch = _getch();
		if (ch == 's') {
			createsave();
		}
		clearchat();
		int choose = ch - '0';
		int damage = 0;
		int attack = 0;
		char damagetype[20];

		weapons(choose, &damage, &attack, &damagetype);
		gotoxy(3, 3);
		printf_s("You are trying to attack: %d...", attack);
		Sleep(1500);
		if (attack < monster.armorclass) {
			gotoxy(3, 4);
			printf_s("Failed");
			Sleep(1500);
		}
		else {
			gotoxy(3, 4);
			printf_s("You deal %d %s damage", damage, damagetype);
			if (hero.crit == 1) {
				gotoxy(3, 5);
				printf_s("CRIT!!!");
				hero.crit = 0;
			}
			monster.hits -= damage;
			Sleep(1500);
		}

		clearchat();
		if (monster.hits < 1) {
			gotoxy(3, 5);
			printf_s("You win!");
			Sleep(1500);
			for (int i = 0; i < strlen(hero.ablist) + 1; i++) {
				switch (hero.ablist[i]) {
				case '2': {
					abilitydesc(0, 0, 6);
					gotoxy(3, 6);
					int temphits = hero.modCha + hero.level;
					printf_s("After death of monster you recieve %d temporary hits", temphits);
					hero.temphits = temphits;
					Sleep(1500);
					break;
				}
				}
			}
			system("cls");
			loot();
			Sleep(1500);
			return 1;
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
			case '2': {
				printf_s("%s", darkonesblessing.name);
				break;
			}
			}
			j++;
		}
		char ch = _getch();
		if (ch == 's') {
			createsave();
		}
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
			for (int i = 0; i < strlen(hero.ablist) + 1; i++) {
				switch (hero.ablist[i]) {
				case '2': {
					abilitydesc(0, 0, 6);
					gotoxy(3, 6);
					int temphits = hero.modCha + hero.level;
					printf_s("After death of monster you recieve %d temporary hits", temphits);
					hero.temphits = temphits;
					Sleep(1500);
					break;
				}
				}
			}
			system("cls");
			loot();
			Sleep(1500);
			return 1;
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
		if (ch == 's') {
			createsave();
		}
		int choose = ch - '0';
		choose--;
		int damage = 0;
		char typeofdamage[20];
		int type = spell(choose, &damage, &typeofdamage);
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
				printf_s("You deal %d %s damage", damage, typeofdamage);
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
			for (int i = 0; i < strlen(hero.ablist) + 1; i++) {
				switch (hero.ablist[i]) {
				case '2': {
					abilitydesc(0, 0, 6);
					gotoxy(3, 6);
					int temphits = hero.modCha + hero.level;
					printf_s("After death of monster you recieve %d temporary hits", temphits);
					Sleep(1500);
					hero.temphits = temphits;
					break;
				}
				}
			}
			system("cls");
			loot();
			Sleep(1500);
			return 1;
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
				if (hero.temphits < 1) {
					hero.tekhits -= damage;
				}
				else {
					hero.temphits -= damage;
					if (hero.temphits < 0) {
						hero.tekhits += hero.temphits;
					}
				}
				Sleep(1500);
			}
			clearchat();
			if (hero.tekhits < 1) {
				gotoxy(3, 6);
				printf_s("%s wins!", monster.name);
				Sleep(1500);
				hero.tekhits = hero.hits;
				return 2;
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
			Sleep(1500);
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
			hero.weaponlist[0] = dagger.id;
			hero.spelldc = hero.modCha + 8 + hero.proficiency;
			hero.weaponlist[1] = quarterstaff.id;
			hero.amounthitdice = hero.level;
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
				hero.archetype = 1;
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

				_getch();
				break;
			}
			case '2': {
				warlock.archetype = 2;
				hero.archetype = 2;
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

				_getch();
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
		int f = 3;
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
	printf_s("Controls(2)");
	gotoxy(50, 9);
	printf_s("Exit(3)");
	char control = '0';
	while (control != '1') {
		control = _getch();
		switch (control) {
		case '1': {
			break;
		}
		case '2': {
			system("cls");
			gotoxy(50, 5);
			printf_s("(Enter) after you read text");
			gotoxy(50, 6);
			printf_s("(-) after you set your character stats");
			gotoxy(50, 7);
			printf_s("(number) buttons");
			gotoxy(50, 8);
			printf_s("(S) save game");
			_getch();
			system("cls");
			gotoxy(50, 5);
			printf_s("The Sunless Citadel");
			gotoxy(50, 7);
			printf_s("Start or continue game(1)");
			gotoxy(50, 8);
			printf_s("Controls(2)");
			gotoxy(50, 9);
			printf_s("Exit(3)");
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
void loadsave() {
	FILE* input;
	if (fopen_s(&input, INPUT_FILE_NAME, "r")) {
		printf_s(ERR_OPEN_FILE, INPUT_FILE_NAME);
		exit(1);
	}
	fscanf_s(input, "%d %d %d %d %d %d", &hero.Strength, &hero.Dexterity, &hero.Constitution, &hero.Intellect, &hero.Wisdom, &hero.Charisma);
	fscanf_s(input, "%d %d %d %d %d %d %d", &hero.hits, &hero.tekhits, &hero.armorclass, &hero.armormod, &hero.gold, &hero.silver, &hero.copper);
	fscanf_s(input, "%d %d %d %d %d %d %d %d", &hero.xp, &hero.level, &hero.class, &hero.hitdice, &hero.archetype, &hero.progress, &hero.proficiency, &hero.race);
	fscanf_s(input, "%d %s %s %d %d %s %d %s", &hero.weapons, hero.spelllist, amountofspells(), hero.ablist, hero.level, &hero.amounthitdice, &hero.spelldc, hero.weaponlist, hero.weapons, &hero.temphits, hero.name, 20);
	switch (hero.class) {
	case 1: {
		strcpy_s(hero.classname, 8, "Warlock");
		hero.weaponlist[0] = dagger.id;
		hero.weaponlist[1] = quarterstaff.id;
		switch (hero.archetype) {
		case 1: {
			hero.ablist[0] = feyancestry.id;
			warlock.archetype = 1;
			strcpy_s(warlock.archetypename, 8, "Archfey");
			break;
		}
		case 2: {
			hero.ablist[0] = darkonesblessing.id;
			warlock.archetype = 1;
			strcpy_s(warlock.archetypename, 6, "Fiend");
			break;
		}
		}
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
}
void createsave() {
	FILE* output;
	if (fopen_s(&output, INPUT_FILE_NAME, "w")) {
		printf_s(ERR_OPEN_FILE, INPUT_FILE_NAME);
		exit(1);
	}
	fprintf_s(output, "%d %d %d %d %d %d ", hero.Strength, hero.Dexterity, hero.Constitution, hero.Intellect, hero.Wisdom, hero.Charisma);
	fprintf_s(output, "%d %d %d %d %d %d %d ", hero.hits, hero.tekhits, hero.armorclass, hero.armormod, hero.gold, hero.silver, hero.copper);
	fprintf_s(output, "%d %d %d %d %d %d %d %d ", hero.xp, hero.level, hero.class, hero.hitdice, hero.archetype, hero.progress, hero.proficiency, hero.race);
	fprintf_s(output, "%d %s %s %d %d %s %d %s", hero.weapons, hero.spelllist, hero.ablist, hero.amounthitdice, hero.spelldc, hero.weaponlist, hero.temphits, hero.name);
	fclose(output);
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
			createsave();
			break;
		}
		case '2': {
			loadsave();
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