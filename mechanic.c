#include "mechanic.h"
void fullscreen() {
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}
void freeetc() {
	free(eldritchblast.description);
	free(feyancestry.description);
	free(darkonesblessing.description);
}
void clearchat() {
	for (int i = 3; i < 47; i++) {
		for (int j = 0; j < 16; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	for (int i = 3; i < 200; i++) {
		for (int j = 19; j < 32; j++) {
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
	gotoxy(99, j);
	printf_s("Inventory");
	gotoxy(103, j + 1);
	printf_s("(4)");
	gotoxy(50, j + 2);
	printf_s("                                                                                ");
	gotoxy(50, j + 2);
	printf_s("Your armor class: %d     Your hits: %d/%d    Your temporary hits: %d   ", hero.armorclass, hero.tekhits, hero.hits, hero.temphits);
	gotoxy(135, j + 2);
	printf_s("Open character list(i)");
	gotoxy(70, 1);
	printf_s("%s hits: %d  ", monster.name, monster.hits);
}
int actions(char* control) {
	char ch = '0';
	if (*control == '1') {
		gotoxy(3, 3);
		printf_s("Choose the weapon:");
		int j = 4;
		for (int i = 0; i < strlen(hero.weaponlist); i++) {
			gotoxy(3, j);
			if (hero.weaponlist[i] != '0')
				printf_s("(%d) ", i + 1);
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
		ch = _getch();
		if (ch == 's') {
			createsave();
		}
		if (ch != 'b') {
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
					Sleep(2000);
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
						Sleep(5000);
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
	}
	if (*control == '2') {
		gotoxy(3, 3);
		printf_s("Choose the ability:");
		int j = 4;
		for (int i = 0; i < strlen(hero.ablist); i++) {
			gotoxy(3, j);
			if (hero.ablist[i] != '0')
				printf_s("(%d) ", i + 1);
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
		ch = _getch();
		if (ch == 's') {
			createsave();
		}
		if (ch != 'b') {
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
				attack = roll(1, 20, hero.modCha + hero.proficiency);
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
	}
	if (*control == '3') {
		gotoxy(3, 3);
		printf_s("Choose the spell:");
		int j = 4;
		for (int i = 0; i < strlen(hero.spelllist); i++) {
			gotoxy(3, j);
			if (hero.spelllist[i] != '0')
				printf_s("(%d) ", i + 1);
			switch (hero.spelllist[i]) {
			case '1': {
				printf_s("%s", eldritchblast.name);
				break;
			}
			}
			j++;
		}
		ch = _getch();
		if (ch == 's') {
			createsave();
		}
		if (ch != 'b') {
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
				attack = roll(1, 20, hero.modCha + hero.proficiency);
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
	}
	if (*control == '4') {
		gotoxy(3, 3);
		printf_s("Choose the item: (B) to back");
		int j = 4;
		for (int i = 0; i < strlen(hero.itemlist); i++) {
			gotoxy(3, j);
			if (hero.itemlist[i] != '0')
				printf_s("(%d) ", i + 1);
			switch (hero.itemlist[i]) {
			case '1': {
				printf_s("%s", healingpotion.name);
				break;
			}
			}
			j++;
		}
		ch = _getch();
		if (ch == 's') {
			createsave();
		}
		if (ch != 'b') {
			int choose = ch - '0';
			choose--;
			int damage = 0;
			char typeofdamage[20];
			int attack;
			int savingthrow;
			int type = item(choose, &damage,&attack, &typeofdamage);
			Sleep(3000);
			clearchat();

			if (type == 0) {
				gotoxy(3, j);
				j++;
				printf_s("You drink healing potion and restore %d hits", damage);
				hero.itemlist[0] = '\0';
				hero.tekhits += damage;
				if (hero.tekhits > hero.hits) {
					hero.tekhits = hero.hits;
				}
				Sleep(1500);
			}
			if (type == 1) {
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
	}
	if (monster.hits > 0)
		if ((*control == '1' || *control == '2' || *control == '3' || *control == '4') && (ch != 'b')) {
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
						hero.temphits = 0;
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
	hero.proficiency = 2;
	hero.itemlist[0] = '1';
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
				for (int i = 50; i < 86; i++) {
					for (int j = 5; j < 17; j++) {
						printf_s(" ");
					}
				}
				gotoxy(50, 15);
				printf_s("Total Points: %d/27 ", points);
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
			while (choose != '1' && choose != '2') {
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
			}
			break;
		}
		}
	}
	system("cls");
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
void mechanicsatstart() {
	fullscreen();
	srand(time(NULL));
	ruleset();
	hidecursor();
}