#include "rooms.h"
void room0() {
	system("cls");
	gotoxy(50, 5);
	printf_s("What you want to do?");
	gotoxy(40, 6);
	printf_s("Investigate(1)            Stand next to the ravine(2)          Try to climb down(3)");
	int rope = 0;
	while (1) {
		gotoxy(3, 40);
		printf_s("Type (s) to save game");
		char choose = _getch();
		if (choose == 's') {
			createsave();
			gotoxy(3, 42);
			printf_s("Save is success");
			Sleep(3000);
			gotoxy(3, 42);
			printf_s("               ");
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
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
			}
			if (choose != '1') {

			}
			else {
				gotoxy(50, 10);
				printf_s("You recognize the inscriptions as warnings and threats against potential trespassers");
				char s = _getch();
				if (s == 's') {
					createsave();
					gotoxy(3, 42);
					printf_s("Save is success");
					Sleep(3000);
					gotoxy(3, 42);
					printf_s("               ");
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
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
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
				int athletic = roll(1, 20, hero.modStr);
				printf_s("using the wall to brace yourself...%d", athletic);
				if (athletic < 10) {
					gotoxy(50, 10);
					Sleep(1500);
					printf_s("Failed");
					gotoxy(50, 11);
					printf_s("You fall down about 25 feet");
					gotoxy(50, 12);
					int damage = roll(2, 6, 0);
					printf_s("You take %d bludgeoning damage from falling", damage);
					Sleep(3000);
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
					if (hero.tekhits < 1) {
						gotoxy(50, 13);
						printf_s("You died");
						hero.tekhits = hero.hits;
						char s = _getch();
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
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	char choose = '0';
	char s = _getch();
	if (s == 's') {
		createsave();
		gotoxy(3, 42);
		printf_s("Save is success");
		Sleep(3000);
		gotoxy(3, 42);
		printf_s("               ");
	}
	gotoxy(50, 11);
	printf_s("You hear how a giant rat, hidden in the darkness and stones, pounces on you");
	s = _getch();
	if (s == 's') {
		createsave();
		gotoxy(3, 42);
		printf_s("Save is success");
		Sleep(3000);
		gotoxy(3, 42);
		printf_s("               ");
	}
	system("cls");
	switch (stage2()) {
	case 1: {
		system("cls");
		gotoxy(50, 5);
		printf_s("What you want to do?");
		gotoxy(50, 6);
		printf_s("Go down the ledge(1) Make short rest(2)");
		gotoxy(3, 40);
		printf_s("Type (s) to save game");
		while (1) {
			choose = _getch();
			if (choose == 's') {
				createsave();
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
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
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	char s = _getch();
	if (s == 's') {
		createsave();
		gotoxy(3, 42);
		printf_s("Save is success");
		Sleep(3000);
		gotoxy(3, 42);
		printf_s("               ");
	}
	system("cls");
	gotoxy(50, 5);
	printf_s("What you want to do?");
	gotoxy(50, 6);
	printf_s("Enter in the citadel(1)");
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	char choose = '0';
	while (choose != '1') {
		choose = _getch();
		if (choose == 's') {
			createsave();
			gotoxy(3, 42);
			printf_s("Save is success");
			Sleep(3000);
			gotoxy(3, 42);
			printf_s("               ");
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
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	char s = _getch();
	if (s == 's') {
		createsave();
		gotoxy(3, 42);
		printf_s("Save is success");
		Sleep(3000);
		gotoxy(3, 42);
		printf_s("               ");
	}
	system("cls");
	gotoxy(50, 5);
	printf_s("What do you want to do?");
	char choose = '0';
	int perc = 0;
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	gotoxy(20, 6);
	printf_s("Investigate the bodies(1) Remove the spear from the wall(2) Investigate the walls(3) Go to the north door(4) Go to the south door(5)");
	while (1) {
		choose = _getch();
		if (choose == 's') {
			createsave();
			gotoxy(3, 42);
			printf_s("Save is success");
			Sleep(3000);
			gotoxy(3, 42);
			printf_s("               ");
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
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
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
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
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
			int perception = roll(1, 20, hero.modWis);
			printf_s("You try to investigate the walls...%d", perception);
			if (perception < 10 || perc == -1) {
				gotoxy(50, 9);
				Sleep(2000);
				printf_s("Failed. You didn't find anything interesting");
				perc = -1;

			}
			else {
				Sleep(2000);
				gotoxy(50, 9);
				printf_s("Success. You find a secret door");
				gotoxy(50, 10);
				printf_s("Open the secret door(9)");
			}
			for (int i = 50; i < 150; i++) {
				for (int j = 8; j < 10; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			break;
		}
		case '9': {
			if (perc == -1) {
				//break;
			}
			gotoxy(50, 11);
			printf_s("You see the skeleton of a dead knight. His eyes light up with blue fire and he rushes to attack.");
			s = _getch();
			if (s == 's') {
				createsave();
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
			}
			system("cls");
			switch (stage3()) {
			case 1: {
				system("cls");
				gotoxy(50, 5);
				printf_s("In the remains of the skeleton you find a magical short sword");
				gotoxy(50, 6);
				printf_s("Take it(1) Don't take it(2)");
				gotoxy(3, 40);
				printf_s("Type (s) to save game");
				int k = 0;
				while (1) {
					choose = _getch();
					if (choose == 's') {
						createsave();
						gotoxy(3, 42);
						printf_s("Save is success");
						Sleep(3000);
						gotoxy(3, 42);
						printf_s("               ");
					}
					switch (choose) {
					case '1': {
						hero.weaponlist[2] = magicalshortsword.id;
						hero.progress += 1;
						gotoxy(50, 8);
						printf_s("<Sword> Right choice, young adventurer");
						Sleep(1500);
						stages();
						break;
					}
					case '2': {
						k++;
						if (k == 2) {
							stages();
						}
						gotoxy(50, 8);
						printf_s("<Sword> Are you sure? I am M~A~G~I~C~A~L sword!");
						Sleep(3000);
						gotoxy(50, 8);
						printf_s("                                               ");
						gotoxy(50, 5);
						printf_s("In the remains of the skeleton you find a magical short sword");
						gotoxy(50, 6);
						printf_s("Take it(1) Don't take it(2)");
						break;
					}
					}
				}
			}
			case 2: {
				stages();
			}
			}
			break;
		}
		case '4': {
			gotoxy(50, 7);
			printf_s("This room will be available later");
			char s = _getch();
			if (s == 's') {
				createsave();
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
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
				gotoxy(3, 42);
				printf_s("Save is success");
				Sleep(3000);
				gotoxy(3, 42);
				printf_s("               ");
			}
			gotoxy(50, 7);
			printf_s("                                 ");
			break;
		}
		}
	}

}
void room4() {
	sword();
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	int i = 80;
	gotoxy(i, 20);
	printf_s("Hello?(1) Back(2)");
	char s = '0';
	while (1) {
		s = _getch();
		if (s == 's') {
			createsave();
			gotoxy(3, 42);
			printf_s("Save is success");
			Sleep(3000);
			gotoxy(3, 42);
			printf_s("               ");
		}
		switch (s) {
		case '1': {
			gotoxy(i, 10);
			printf_s("<%s> Hello?", hero.name);
			gotoxy(i, 11);
			printf_s("<%s> Yes, I hear you, mortal!", magicalshortsword.name);
			gotoxy(i, 20);
			printf_s("Who are you?(1) You will pay for calling me mortal!(2) Back(3)");
			while (1) {
				s = _getch();
				switch (s) {
				case '1': {
					gotoxy(i, 12);
					printf_s("<%s> Who are you?", hero.name);
					strcpy_s(magicalshortsword.name, 6, "Kring");
					gotoxy(i, 13);
					printf_s("<%s> My name is Kring, I am mighty sword, that can be used only by TRUE hero!", magicalshortsword.name);
					gotoxy(i, 20);
					printf_s("Back(1)                                                                 ");
					while (1) {
						s = _getch();
						if (s == '1') {
							stages();
						}
					}

					break;
				}
				case '2': {
					gotoxy(i, 12);
					printf_s("<%s> You will pay for calling me mortal!", hero.name);
					gotoxy(i, 13);
					printf_s("<%s> No, I don't think so",magicalshortsword.name);
					gotoxy(i, 20);
					printf_s("Attack the sword(1) Please kindly forgive me mighty magic sword(2)");
					while (1) {
						s = _getch();
						switch (s) {
						case '1': {
							system("cls");
							switch (stage4()) {
							case 1: {
								system("cls");
								gotoxy(50, 5);
								printf_s("What you want to do?");
								gotoxy(50, 6);
								printf_s("Go next(1) Make short rest(2)");
								gotoxy(3, 40);
								printf_s("Type (s) to save game");
								while (1) {
									s = _getch();
									if (s == 's') {
										createsave();
										gotoxy(3, 42);
										printf_s("Save is success");
										Sleep(3000);
										gotoxy(3, 42);
										printf_s("               ");
									}
									switch (s) {
									case '1': {
										hero.weaponlist[2] = '\0';
										stages();
										break;
									}
									case '2': {
										shortrest();
										system("cls");
										gotoxy(50, 5);
										printf_s("What you want to do?");
										gotoxy(50, 6);
										printf_s("Go next(1) Make short rest(2)");
										break;
									}
									}
								}
							}
							case 2: {
								stages();
							}
							}
							break;
						}
						case '2': {
							gotoxy(i, 13);
							printf_s("<%s> Please kindly forgive me mighty magic sword", hero.name);
							gotoxy(i, 14);
							printf_s("<%s> Okay, I forgive you, you can stop crying", magicalshortsword.name);
							Sleep(3000);
							stages();
							break;
						}
						}
					}
					break;
				}
				case '3': {
					stages();
					break;
				}
				}
				break;
			}
			break;
		}
		case '2': {
			stages();
			break;
		}
		}
	}

	
	Sleep(10000);
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
		Sleep(30);
	}
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	char s = _getch();
	if (s == 's') {
		createsave();
		gotoxy(3, 42);
		printf_s("Save is success");
		Sleep(3000);
		gotoxy(3, 42);
		printf_s("               ");
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
		Sleep(30);
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
int stage3() {
	char control = 0;
	ruleskeleton();
	skeleton();
	clearchat();
	while (control != '`') {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i') {
			skeleton();
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
int stage4() {
	hero.weaponlist[2] = '\0';
	char control = 0;
	rulesword();
	//sword();
	clearchat();
	while (control != '`') {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i') {
			//sword();
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
	case 4: {
		room4();
	}
	}
}