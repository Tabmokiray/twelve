#include "rooms.h"
void room0() {
	system("cls");
	gotoxy(60, 5);
	printf_s("What you want to do?");
	gotoxy(50, 6);
	printf_s("Investigate(1)            Stand next to the ravine(2)          Try to climb down(3)");
	int rope = 0;
	while (1) {
		char choose = _getch();
		switch (choose) {
		case '1': {
			gotoxy(60, 8);
			printf_s("You discover that the pillars are generally worn and broken,");
			gotoxy(60, 9);
			printf_s("and graffiti in the Dwarven alphabet covers most of them.");
			gotoxy(50, 6);
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
				gotoxy(60, 10);
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
				gotoxy(50, 6);
				printf_s("Investigate(1)      ");

			}
			for (int i = 40; i < 160; i++) {
				for (int j = 7; j < 20; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			break;
		}
		case '2': {
			gotoxy(60, 8);
			printf_s("You immediately notes");
			gotoxy(60, 9);
			printf_s("a sturdy knotted rope tied to one of the leaning pillars.");
			gotoxy(60, 10);
			printf_s("The rope hangs down into the darkness below. Judging by");
			gotoxy(60, 11);
			printf_s("its good condition, the rope couldn't have been tied there");
			gotoxy(60, 12);
			printf_s("any longer than two or three weeks ago. Player characters");
			gotoxy(60, 13);
			printf_s("can also see older and weathered hand - and footholds");
			gotoxy(60, 14);
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
			gotoxy(60, 8);
			if (rope == 1) {
				printf_s("You try to climb down the knotted rope,");
				gotoxy(60, 9);
				int athletic = roll(1, 20, hero.modStr);
				printf_s("using the wall to brace yourself...%d", athletic);
				if (athletic < 5) {
					gotoxy(60, 10);
					Sleep(1500);
					printf_s("Failed");
					gotoxy(60, 11);
					printf_s("You fall down about 25 feet");
					gotoxy(60, 12);
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
						gotoxy(60, 13);
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
					gotoxy(60, 10);
					Sleep(1500);
					printf_s("Success");
					hero.progress += 1;
					Sleep(5000);
					stages();
				}
			}
			else {
				printf_s("You try to climb the naked rock using the carved hand");
				gotoxy(60, 9);
				int athletic = roll(1, 20, hero.modStr);
				printf_s("and footholds...%d", athletic);
				Sleep(1500);
				if (athletic < 10) {
					gotoxy(60, 10);
					Sleep(1500);
					printf_s("Failed");
					gotoxy(60, 11);
					printf_s("You fall down about 25 feet");
					gotoxy(60, 12);
					int damage = 2 * roll(1, 6, 0);
					printf_s("You take %d bludgeoning damage from falling", damage);
					Sleep(3000);
					if (hero.temphits < 1) {
						hero.tekhits -= damage;
						hero.temphits = 0;
					}
					else {
						hero.temphits -= damage;
						if (hero.temphits < 1) {
							hero.tekhits += hero.temphits;
							hero.temphits = 0;
						}
					}
					if (hero.hits < 1) {
						gotoxy(60, 13);
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
					gotoxy(60, 10);
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
	gotoxy(60, 5);
	printf_s("A sandy ledge overlooks a subterranean gulf of dark-");
	gotoxy(60, 6);
	printf_s("ness to the west. The ledge is wide but rough. Sand,");
	gotoxy(60, 7);
	printf_s("rocky debris, and the bones of small animals cover");
	gotoxy(60, 8);
	printf_s("it. A roughly hewn stairwell zigs and zags down the");
	gotoxy(60, 9);
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
	gotoxy(60, 11);
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
	case 2: {
		system("cls");
		gotoxy(60, 5);
		printf_s("What you want to do?");
		gotoxy(60, 6);
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
				gotoxy(60, 5);
				printf_s("What you want to do?");
				gotoxy(60, 6);
				printf_s("Go down the ledge(1) Make short rest(2)");
				break;
			}
			}
		}
	}
	case 3: {
		stages();
	}
	}

}
void room2() {
	system("cls");
	gotoxy(60, 5);
	printf_s("At the edge of sight, a fortress top emerges from the");
	gotoxy(60, 6);
	printf_s("darkness. The subterranean citadel, though impres-");
	gotoxy(60, 7);
	printf_s("sive, seems long forgotten, if the lightless windows");
	gotoxy(60, 8);
	printf_s("cracked crenellations, and leaning towers are any");
	gotoxy(60, 9);
	printf_s("indication. All is quiet, though a cold breeze blows");
	gotoxy(60, 10);
	printf_s("up from below, bringing with it the scent of dust");
	gotoxy(60, 11);
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
	gotoxy(60, 5);
	printf_s("What you want to do?");
	gotoxy(60, 6);
	printf_s("Enter in the citadel(1) Go back in shop(2)");
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
		case '2': {
			system("cls");
			shop();
			gotoxy(60, 5);
			printf_s("What you want to do?");
			gotoxy(60, 6);
			printf_s("Enter in the citadel(1) Go back in shop(2)");
			break;
		}
		}

	}
}
void room3() {
	system("cls");
	gotoxy(60, 5);
	printf_s("This circular area is cobbled with cracked granite,");
	gotoxy(60, 6);
	printf_s("upon which sprawl four goblins, all apparently slain");
	gotoxy(60, 7);
	printf_s("in combat. One stands with its back against the");
	gotoxy(60, 8);
	printf_s("western wall, the killing spear still skewering it and");
	gotoxy(60, 9);
	printf_s("holding it upright. Three wooden doors lead off");
	gotoxy(60, 10);
	printf_s("from this the area. Above, a hollow tower of loose");
	gotoxy(60, 11);
	printf_s("masonry reaches 30 feet, but the intervening floors");
	gotoxy(60, 12);
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
	gotoxy(60, 5);
	printf_s("What do you want to do?");
	char choose = '0';
	gotoxy(3, 40);
	printf_s("Type (s) to save game");
	gotoxy(20, 6);
	printf_s("Investigate the bodies(1) Remove the spear from the wall(2) Investigate the walls(3) Go to the north door(4) Go to the south door(5) Go back(6)");
	int perception = 0;
	while (1) {
		if (secretdoor.killed == 1) {
			gotoxy(20, 6);
			printf_s("Investigate the bodies(1) Remove the spear from the wall(2) Go to the north door(4) Go to the south door(5) Go back(6)                                  ");
			choose = _getch();
			if (choose == '3' || choose == '9') {
				choose = '0';
			}

		}
		else {
			choose = _getch();
		}
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
			gotoxy(60, 8);
			printf_s("Investigation reveals that the four goblin bodies are");
			gotoxy(60, 9);
			printf_s("about a month dead, though rats have gnawed at them.");
			gotoxy(60, 10);
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
			gotoxy(60, 8);
			printf_s("The body slumps to reveal deep - set and impressive runes in the wall.");
			gotoxy(60, 9);
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
			gotoxy(60, 8);
			if (trysecret.killed == -1) {
				printf_s("You already tired to investigate");
				Sleep(1000);
				for (int i = 50; i < 150; i++) {
					for (int j = 8; j < 10; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				break;
			}
			perception = roll(1, 20, hero.modWis);
			printf_s("You try to investigate the walls...%d", perception);
			if (perception < 10) {
				gotoxy(60, 9);
				Sleep(2000);
				printf_s("Failed. You didn't find anything interesting");
				trysecret.killed = -1;

			}
			else {
				Sleep(2000);
				gotoxy(60, 9);
				printf_s("Success. You find a secret door");
				Sleep(1500);
				gotoxy(60, 10);
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
			if (trysecret.killed == -1) {
				break;
			}
			secretdoor.killed = 1;
			gotoxy(60, 11);
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
			case 2: {
				system("cls");
				gotoxy(60, 5);
				printf_s("In the remains of the skeleton you find a magical short sword");
				gotoxy(60, 6);
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
						for (int i = 0; i < 20; i++) {
							if (hero.weaponlist[i] == '0') {
								hero.weaponlist[i] = magicalshortsword.id;
								break;
							}
						}
						hero.progress += 1;
						gotoxy(60, 8);
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
						gotoxy(60, 8);
						printf_s("<Sword> Are you sure? I am M~A~G~I~C~A~L sword!");
						Sleep(3000);
						gotoxy(60, 8);
						printf_s("                                               ");
						gotoxy(60, 5);
						printf_s("In the remains of the skeleton you find a magical short sword");
						gotoxy(60, 6);
						printf_s("Take it(1) Don't take it(2)");
						break;
					}
					}
				}
			}
			case 3: {
				stages();
			}
			}
			break;
		}
		case '4': {
			gotoxy(60, 7);
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
			gotoxy(60, 7);
			printf_s("                                 ");
			break;
		}
		case '5': {
			hero.progress = 5;
			stages();
			break;
		}
		case '6': {
			hero.progress -= 1;
			stages();
			break;
		}
		}
	}

}
void room4() {
	msword();
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
					printf_s("<%s> No, I don't think so", magicalshortsword.name);
					gotoxy(i, 20);
					printf_s("Attack the sword(1) Please kindly forgive me mighty magic sword(2)");
					while (1) {
						s = _getch();
						switch (s) {
						case '1': {
							system("cls");
							switch (stage4()) {
							case 2: {
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
										hero.progress -= 1;
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
							case 3: {
								stages();
							}
							}
							break;
						}
						case '2': {
							gotoxy(i, 14);
							printf_s("<%s> Please kindly forgive me mighty magic sword", hero.name);
							gotoxy(i, 15);
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
			hero.progress -= 1;
			stages();
			break;
		}
		}
	}
}
void room5() {
	system("cls");
	gotoxy(50, 5);
	printf_s("As you enter the room, you notice a frozen goblin figure holding a silver key in its palm.");
	gotoxy(50, 6);
	printf_s("Take the key(1) Melt the ice with a burning torch(2) Break the statue(3) Go through the door ahead(4) Go back(5)");
	char choose = '0';
	int broken = 0;
	while (1) {
		choose = _getch();
		if (statue.killed > 0) {
			if (choose != '1' && choose != '4') {
				choose = '0';
			}
		}
		switch (choose) {
		case '1': {
			for (int i = 0; i < 20; i++) {
				if (hero.itemlist[i] == '\0') {
					hero.itemlist[i] = '2';
					key.killed = 1;
					break;
				}
			}
			if (statue.killed == 1) {
				for (int i = 50; i < 172; i++) {
					gotoxy(i, 6);
					printf_s(" ");
				}
				gotoxy(60, 6);
				printf_s("Go through the door ahead(4)");
			}
			else {
				for (int i = 50; i < 172; i++) {
					gotoxy(i, 6);
					printf_s(" ");
				}
				gotoxy(60, 6);
				printf_s("Melt the ice with a burning torch(2) Break the statue(3) Go through the door ahead(4)");
			}
			break;
		}
		case '2': {
			gotoxy(60, 8);
			printf_s("You are wasting time to unfreeze the goblin.");
			gotoxy(60, 9);
			printf_s("When he wakes up, saliva begins to drip from his mouth.");
			gotoxy(60, 10);
			printf_s("Then he rushes at you with hungry fury.");
			_getch();
			switch (stage0()) {
			case 2: {
				statue.killed = 1;
				system("cls");
				gotoxy(60, 6);

				if (key.killed == 1) {
					printf_s("Go through the door ahead(4)");
				}
				else {
					printf_s("Take the key(1) Go through the door ahead(4)");
				}
				while (1) {
					choose = _getch();
					if (choose == '4') {
						hero.progress += 1;
						stages();
					}
					if (key.killed != 1) {
						if (choose == '1') {
							for (int i = 0; i < 20; i++) {
								if (hero.itemlist[i] == '\0') {
									hero.itemlist[i] = '2';
									key.killed = 1;
									break;
								}
							}
							for (int i = 50; i < 172; i++) {
								gotoxy(i, 6);
								printf_s(" ");
							}
							gotoxy(60, 6);
							printf_s("Go through the door ahead(4)");
						}
					}
				}
				break;
			}
			case 3: {
				stages();
				break;
			}
			}
			break;
		}
		case '3': {

			gotoxy(60, 8);
			printf_s("You broke the statue into many pieces of ice");
			_getch();
			for (int i = 50; i < 172; i++) {
				gotoxy(i, 6);
				printf_s(" ");
			}
			gotoxy(60, 8);
			printf_s("                                            ");
			statue.killed = 1;
			gotoxy(60, 6);
			if (key.killed != 1) {
				printf_s("Take the key(1) Go through the door ahead(4)");
			}
			else {
				printf_s("Go through the door ahead(4)");
			}
			break;
		}
		case '4': {
			hero.progress += 1;
			stages();
			break;
		}
		case '5': {
			hero.progress = 3;
			stages();
		}
		}
	}
}
void room6() {
	gotoxy(60, 5);
	printf_s("In this room, the walls and floor are covered with a thin layer of ice.");
	gotoxy(60, 6);
	printf_s("A metal rod with a broken chain is stuck in the middle.");
	gotoxy(60, 7);
	printf_s("A lot of furniture is broken and scattered around the room.");
	gotoxy(60, 8);
	printf_s("Leaning against the closet, a small white dragon sleeps - a wyrmling the size of a large dog.");
	_getch();
	for (int i = 60; i < 160; i++) {
		for (int j = 5; j < 9; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	gotoxy(60, 5);
	printf_s("What you want to do?");
	char choose = '0';

	gotoxy(60, 6);
	if (dragon.killed == 1) {
		printf_s("Go to the next door(1) Go back(2)");
		while (1) {
			choose = _getch();
			if (choose == '1') {
				hero.progress += 1;
				stages();
			}
			if (choose == '2') {
				hero.progress -= 1;
				stages();
			}
		}
	}
	printf_s("Investigate the dragon(1) Go to the next door(2) Go back(3)");
	while (1) {
		choose = _getch();
		switch (choose) {
		case '1': {
			gotoxy(60, 7);
			printf_s("Glittering objects are visible in the dragon's nest.");
			gotoxy(60, 8);
			printf_s("This little dragon has white scales and sharp claws and appears to be sleeping,");
			gotoxy(60, 9);
			printf_s("but it is not known if it will wake up if you try to rob him.");
			_getch();
			for (int i = 60; i < 140; i++) {
				for (int j = 7; j < 10; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			gotoxy(60, 7);
			printf_s("Try to steal jewelry(1) Attack dragon(2) Go back(3)");
			while (1) {
				choose = _getch();
				switch (choose) {
				case '1': {
					if (robberydragon.killed != 1) {
						gotoxy(60, 8);
						robberydragon.killed = roll(1, 20, hero.sleightofhand);
						printf_s("You are trying to steal...%d", robberydragon.killed);
						Sleep(2000);
						if (robberydragon.killed < 10) {
							robberydragon.killed = 1;
							gotoxy(60, 9);
							printf_s("Failed. Dragon has awakened.");
							Sleep(1000);
							switch (stage5()) {
							case 2: {
								dragon.killed = 1;
								system("cls");
								gotoxy(60, 5);
								printf_s("What you want to do?");
								gotoxy(60, 6);
								printf_s("Return(1) Make short rest(2)");
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
										stages();
										break;
									}
									case '2': {
										shortrest();
										system("cls");
										gotoxy(60, 5);
										printf_s("What you want to do?");
										gotoxy(60, 6);
										printf_s("Return(1) Make short rest(2)");
										break;
									}
									}
								}
								break;
							}
							case 3: {
								stages();
								break;
							}
							}
						}
						else {
							robberydragon.killed = 1;
							gotoxy(60, 9);
							int loot = roll(3, 20, 5);
							printf_s("Success. You find %d gold", loot);
							Sleep(1500);
							hero.gold += loot;
						}
						for (int i = 60; i < 120; i++) {
							for (int j = 8; j < 10; j++) {
								gotoxy(i, j);
								printf_s(" ");
							}
						}
					}
					else {
						gotoxy(60, 8);
						printf_s("You already tried to steal");
						Sleep(2000);
						gotoxy(60, 8);
						printf_s("                          ");
					}
					break;
				}
				case '2': {
					switch (stage5()) {
					case 2: {
						dragon.killed = 1;
						system("cls");
						gotoxy(60, 5);
						printf_s("What you want to do?");
						gotoxy(60, 6);
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
								gotoxy(60, 5);
								printf_s("What you want to do?");
								gotoxy(60, 6);
								printf_s("Go down the ledge(1) Make short rest(2)");
								break;
							}
							}
						}
						break;
					}
					case 3: {
						stages();
						break;
					}
					}
					break;
				}
				case '3': {
					stages();
					break;
				}
				}
			}
			break;
		}
		case '2': {
			for (int i = 0; i < 100; i++) {
				for (int j = 0; j < 40; j++) {
					printf_s(" ");
				}
			}
			hero.progress += 1;
			room7();
			break;
		}
		case '3': {
			hero.progress -= 1;
			stages();
			break;
		}
		}
	}
}
void room7() {
	gotoxy(60, 5);
	printf_s("You enter a fairly large room, in the center of which is a dying");
	gotoxy(60, 6);
	printf_s("fire. Nearby is a small bed on which someone lies and quietly");
	gotoxy(60, 7);
	printf_s("cries. From the room there is a door to the north and a");
	gotoxy(60, 8);
	printf_s("passage to the west.");
	gotoxy(60, 10);

	if (meepokobold.killed == 0)
		printf_s("Investigate sleeping creature(1) Go to north door(2) Go to the west passage(3) Back(4)");
	else {
		printf_s("Go to north door(2) Go to the west passage(3) Back(4)");
	}
	int ins = 0;
	char choose = '0';
	while (1) {
		choose = _getch();
		switch (choose) {
		case '1': {
			if (meepokobold.killed != 0) {
				break;
			}
			for (int i = 60; i < 150; i++) {
				for (int j = 5; j < 11; j++) {
					gotoxy(i, j);
					printf_s(" ");
				}
			}
			gotoxy(60, 5);
			printf_s("You bring light to the face of a small creature. His skin is rust-");
			gotoxy(60, 6);
			printf_s("coloured, his face is long, reminiscent of a lizard or dragon.");
			gotoxy(60, 8);
			printf_s("Try to understand why he is crying(1) Attack him(2) Wake him up(3)");
			while (1) {
				if (meepokobold.killed != 0) {
					gotoxy(60, 10);
					printf_s("Meepo is killed by you");
					Sleep(2000);
					gotoxy(60, 10);
					printf_s("                      ");
					break;
				}
				choose = _getch();
				switch (choose) {
				case '1': {
					int insight = roll(1, 20, hero.insight);
					if (ins == 0) {
						ins = 1;
						gotoxy(60, 9);
						printf_s("You trying to understand other's creature feelings...%d", insight);
						Sleep(1000);
						if (insight < 10) {
							gotoxy(60, 10);
							printf_s("Failed");
							Sleep(1000);
							gotoxy(60, 10);
							printf_s("      ");
						}
						else {
							gotoxy(60, 10);
							printf_s("Success");
							Sleep(1000);
							gotoxy(60, 10);
							printf_s("       ");
							gotoxy(60, 10);
							printf_s("It sleeps and cries in its sleep, it must be having a nightmare");
							Sleep(2500);
							gotoxy(60, 9);
							printf_s("                                                           ");
							gotoxy(60, 10);
							printf_s("                                                               ");
						}


					}
					else {
						gotoxy(60, 9);
						printf_s("You are already tried");
						Sleep(1000);
						gotoxy(60, 9);
						printf_s("                     ");
					}
					break;
				}
				case '2': {
					meepokobold.killed = 1;
					gotoxy(60, 8);
					printf_s("You instantly kill an innocent creature without remorse. It's too weak to fight you back.");
					gotoxy(60, 9);
					Sleep(1000);
					printf_s("You gain 50 xp");
					Sleep(1000);
					hero.xp += 50;
					gotoxy(60, 8);
					printf_s("                                                                                         ");
					gotoxy(60, 9);
					printf_s("              ");
					break;
				}
				case '3': {
					meepo();
					gotoxy(85, 8);
					printf_s("<Meepo> Ah-ah-? Who you are? How did you get here? Don't kill Meepo, please!");
					gotoxy(85, 20);
					printf_s("Hello, my name is %s, don't fear me(1) Intimidate him(2) ", hero.name);
					while (1) {
						choose = _getch();
						switch (choose) {
						case '1': {
							gotoxy(85, 9);
							printf_s("<%s> Hello, my name is %s, don't fear me", hero.name, hero.name);
							Sleep(1000);
							gotoxy(85, 10);
							printf_s("<Meepo> I am Meepo, Keeper of Dragons! Was before...");
							Sleep(1000);
							gotoxy(85, 20);
							printf_s("Why?(1) Where is treasures?(2)                                       ");
							choose = '0';
							while (choose != '1' && choose != '2') {
								choose = _getch();
								switch (choose) {
								case '1': {
									gotoxy(85, 11);
									printf_s("<%s> Why?", hero.name);
									Sleep(1000);
									gotoxy(85, 12);
									printf_s("<Meepo> Because I lost our clan dragon Calcryx");
									Sleep(2500);
									break;
								}
								case '2': {
									gotoxy(85, 11);
									printf_s("<%s> Where is treasures?", hero.name);
									Sleep(1000);
									gotoxy(85, 12);
									printf_s("<Meepo> I don't know, Yusdrayl knows! Yusdrayl! Our smartest leader!");
									Sleep(2500);
									break;
								}
								}
							}
							break;
						}
						case '2': {
							gotoxy(85, 9);
							int intimidate = roll(1, 20, hero.intimidation);
							printf_s("<%s> Now I'll eat you little monster if you don't do what I say", hero.name);
							Sleep(1500);
							gotoxy(85, 10);
							printf_s("<Meepo> Ple-ease, don't eat me!");
							Sleep(2500);
							break;
						}
						}
						if (choose == '2' || choose == '1') {
							for (int i = 85; i < 161; i++) {
								for (int j = 5; j < 21; j++) {
									gotoxy(i, j);
									printf_s(" ");
								}
							}
							gotoxy(85, 20);
							printf_s("Who is your leader?(1) How can I help you?(2) ");
							choose = '0';
							while (choose != '1' && choose != '2') {
								choose = _getch();
								switch (choose) {
								case '1': {
									gotoxy(85, 8);
									printf_s("<%s> Who is your leader?                  ", hero.name);
									Sleep(1000);
									gotoxy(85, 9);
									printf_s("<Meepo> Yusdrayl! She is the leader of all kobolds in our clan! We love her!  ");
									gotoxy(85, 20);
									printf_s("Take me to her now(1) I will return later(2) ");

									break;
								}
								case '2': {
									gotoxy(85, 8);
									printf_s("<%s> How can I help you?                 ", hero.name);
									Sleep(1000);
									gotoxy(85, 9);
									printf_s("<Meepo> This dragon is killing my brothers and sisters,");
									gotoxy(85, 10);
									printf_s("please discuss with Yusdrayl killing of dragon. I will show you the way.");
									gotoxy(85, 20);
									printf_s("Take me to her now(1) I will return later(2) ");

									break;
								}
								}
							}
							while (1) {
								choose = _getch();
								switch (choose) {
								case '1': {
									hero.progress += 1;
									stages();
									break;
								}
								case '2': {
									stages();
									break;
								}
								}
							}
						}
					}
					break;
				}
				}
			}
			break;
		}
		case '2': {
			break;
		}
		case '3': {
			hero.progress += 1;
			stages();
			break;
		}
		case '4': {
			hero.progress -= 1;
			stages();
			break;
		}
		}
	}
}
void room8() {
	gotoxy(60, 5);
	printf_s("You walk down a dark corridor, turning left and right.");
	gotoxy(60, 6);
	printf_s("Then, out of the darkness, several small halberds head towards you.");
	_getch();
	for (int i = 60; i < 130; i++) {
		for (int j = 5; j < 7; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	gotoxy(60, 5);
	if (guardians.killed == 0) {
		switch (meepokobold.killed) {
		case 0: {
			printf_s("<Kobolds> Whe saw, that you didn't kill Meepo. Where are you going? ");
			gotoxy(60, 20);
			printf_s("I want to speak with Yusdrayl(1) I want to kill you all, lizards(2) I return later(3)");
			while (1) {
				char choose = _getch();
				switch (choose) {
				case '1': {
					gotoxy(60, 6);
					printf_s("<%s> I want to speak with Yusdrayl", hero.name);
					Sleep(1500);
					gotoxy(60, 7);
					printf_s("<Kobolds> We will take you to her, but do not even think of attacking");
					Sleep(2500);
					hero.progress += 1;
					stages();
					break;
				}
				case '2': {
					gotoxy(60, 6);
					printf_s("<%s> I want to kill you all, lizards", hero.name);
					Sleep(1000);
					gotoxy(60, 7);
					printf_s("<Kobolds> On the attack, brothers");
					Sleep(2500);
					meepokobold.killed = 1;
					if (stage6() == 3) {
						stages();
					}
					if (stage6() == 3) {
						stages();
					}
					if (stage6() == 3) {
						stages();
					}
					if (stage6() == 3) {
						stages();
					}
					guardians.killed = 1;
					system("cls");
					gotoxy(60, 5);
					printf_s("What you want to do?");
					gotoxy(60, 6);
					printf_s("Go to Yusdrayl(1) Make short rest(2)");
					gotoxy(3, 40);
					printf_s("Type (s) to save game");
					char choose = '0';
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
							gotoxy(60, 5);
							printf_s("What you want to do?");
							gotoxy(60, 6);
							printf_s("Go to Yusdrayl(1) Make short rest(2)");
							break;
						}
						}
					}
					break;
				}
				case '3': {
					hero.progress -= 1;
					stages();
					break;
				}
				}
			}
			break;
		}
		case 1: {
			printf_s("<Kobolds> We know that you killed Meepo, we will take revenge!");
			if (stage6() == 3) {
				stages();
			}
			if (stage6() == 3) {
				stages();
			}
			if (stage6() == 3) {
				stages();
			}
			if (stage6() == 3) {
				stages();
			}
			guardians.killed = 1;
			system("cls");
			gotoxy(60, 5);
			printf_s("What you want to do?");
			gotoxy(60, 6);
			printf_s("Go to Yusdrayl(1) Make short rest(2)");
			gotoxy(3, 40);
			printf_s("Type (s) to save game");
			char choose = '0';
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
					gotoxy(60, 5);
					printf_s("What you want to do?");
					gotoxy(60, 6);
					printf_s("Go to Yusdrayl(1) Make short rest(2)");
					break;
				}
				}
			}
		}
		}
	}
	else {
		char choose = '0';
		printf_s("Go to Yusdrayl(1) Go back(2)");
		while (1) {
			choose = _getch();
			switch (choose) {
			case '1': {
				hero.progress += 1;
				stages();
				break;
			}
			case '2': {
				hero.progress -= 1;
				stages();
				break;
			}
			}

		}
	}
}
void room9() {
	gotoxy(60, 5);
	printf_s("A short throne stands near the west wall, constructed");
	gotoxy(60, 6);
	printf_s("of fallen bits of masonry stacked against an old altar.");
	gotoxy(60, 7);
	printf_s("A small, horned figure in red-dyed robes sits in the throne.");
	gotoxy(60, 8);
	printf_s("The portion of the altar that serves as the throne's back");
	gotoxy(60, 9);
	printf_s("features a carving of a rearing dragon.");
	_getch();
	for (int i = 60; i < 130; i++) {
		for (int j = 5; j < 10; j++) {
			gotoxy(i, j);
			printf_s(" ");
		}
	}
	gotoxy(60, 20);
	printf_s("Hello your majesty(1)");
	char choose = '0';
	while (choose != '1' && choose != '2' && choose != '3' && choose != '4') {
		choose = _getch();
		switch (choose) {
		case '1': {
			gotoxy(60, 5);
			printf_s("<%s> Hello your majesty", hero.name);
			gotoxy(60, 6);
			printf_s("<Yusdrayl> Hello intruder. What brought you to me?");
			Sleep(1500);
			gotoxy(60, 20);
			printf_s("Treasures(1) Thirst for battle(2) Desire to help(3)");
			choose = '0';
			while (choose != '1' && choose != '2' && choose != '3') {
				choose = _getch();
				switch (choose) {
				case '1': {
					gotoxy(60, 7);
					printf_s("<%s> Treasures", hero.name);
					gotoxy(60, 8);
					printf_s("<Yusdrayl> I have something to offer you, but you will help us");
				}
				case '2': {
					gotoxy(60, 7);
					printf_s("<%s> Thirst for battle", hero.name);
					gotoxy(60, 8);
					printf_s("<Yusdrayl> I need someone to die, you're the right one for this job");
				}
				case '3': {
					gotoxy(60, 7);
					printf_s("<%s> Desire to help", hero.name);
					gotoxy(60, 8);
					printf_s("<Yusdrayl> Nice to see a noble person. Fulfill my request and I will repay you");
				}
				}
			}
			Sleep(1000);
			gotoxy(60, 9);
			printf_s("<Yusdrayl> Recently, our dragon has broken the chain and now he is killing all my subjects who woke him up.");
			gotoxy(60, 20);
			printf_s("I will kill dragon by myself(1) I need the support of your warriors(2) I'll think about it and come back(3)");
			if (dragon.killed == 1) {
				gotoxy(60, 22);
				printf_s("I already killed dragon(4)");
			}
			choose = '0';
			while (choose != '1' && choose != '2' && choose != '3' && choose != '4') {
				choose = _getch();
				switch (choose) {
				case '1': {
					gotoxy(60, 10);
					printf_s("<%s> I will kill dragon by myself", hero.name);
					Sleep(1000);
					gotoxy(60, 11);
					printf_s("<Yusdrayl> Let it be so. Come back for a reward when you're done");
					break;
				}
				case '2': {
					helpofkobolds.killed = 1;
					gotoxy(60, 10);
					printf_s("<%s> I need the support of your warriors", hero.name);
					Sleep(1000);
					gotoxy(60, 11);
					printf_s("<Yusdrayl> Okay, I'll give you a couple of warriors. Come back for a reward when you're done");
					break;
				}
				case '3': {
					gotoxy(60, 10);
					printf_s("<%s> I'll think about it and come back", hero.name);
					gotoxy(60, 11);
					printf_s("<%s> Come when you're ready", hero.name);
					hero.progress -= 1;
					stages();
					break;
				}
				case '4': {
					if (dragon.killed == 1) {
						gotoxy(60, 10);
						printf_s("<%s> I already killed dragon", hero.name);
						Sleep(1000);
						gotoxy(60, 11);
						printf_s("<Yusdrayl> Incredible, you are a real hero. Accept this humble gift from us");
						gotoxy(60, 12);
						int reward = roll(4, 10, 5);
						printf_s("Your reward: %d gold and Mystical staff", reward);
						hero.gold += reward;
						money();
						gotoxy(60, 13);
						printf_s("You have %d gold now", hero.gold);
						_getch();
						system("cls");
						gotoxy(60, 5);
						printf_s("Activate Mystical staff(1)");
						choose = '0';
						while (1) {
							choose = _getch();
							if (choose == '1') {
								hero.progress += 1;
								stages();
							}
						}

					}
					break;
				}
				}
			}
			break;
		}
		}
	}
	hero.progress = 6;
	stages();
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
	gotoxy(0, 1);
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
	gotoxy(110, z);
	for (int j = 0; j < 472; j++) {
		if (columns.text2[j] == '\n') {
			z++;
			gotoxy(110, z);
			j++;
		}
		printf_s("%c", columns.text2[j]);
		Sleep(30);
	}
	char s = _getch();
	free(columns.text1);
	free(columns.text2);
	fclose(oldroad);
	fclose(picture);
}
void shop() {
	FILE* shop;

	if ((fopen_s(&shop, "shop.txt", "r")) != 0) {
		exit(1);
	}

	shopman.text1 = (char*)malloc(3000);
	if (shopman.text1 == 0) {
		exit(1);
	}
	int i = 0;
	fscanf_s(shop, "%c", &shopman.text1[i], 1);
	while (shopman.text1[i] != '\0') {
		i++;
		fscanf_s(shop, "%c", &shopman.text1[i], 1);
	}
	gotoxy(0, 1);
	for (int j = 0; j < 2533; j++) {
		printf_s("%c", shopman.text1[j]);
	}
	gotoxy(75, 9);
	printf_s("Every adventure starts from shopping, isn't it?");
	char s = _getch();
	if (s == 's') {
		createsave();
	}
	free(shopman.text1);
	fclose(shop);
	gotoxy(75, 9);
	printf_s("Welcome to my shop! I have everything you need for a deadly adventure. Type - to left shop.");
	gotoxy(75, 11);
	printf_s("Armor              Weapon               Spells                Items");
	int potions = 0;
	char choose = '0';
	int j = 13;
	if (hero.class != 1) {
		gotoxy(75, 13);

		printf_s("(1)%s", shield.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", shield.cost);
		j++;
		gotoxy(75, j);
		printf_s("(2)%s", platearmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", platearmor.cost);
		j++;
		gotoxy(75, j);
		printf_s("(3)%s", splintarmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", splintarmor.cost);
		j++;
		gotoxy(75, j);
		printf_s("(4)%s", chainmail.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", chainmail.cost);
		j++;
		gotoxy(75, j);
		printf_s("(5)%s", ringmailarmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", ringmailarmor.cost);
		j++;
		gotoxy(75, j);
		printf_s("(6)%s", halfplatearmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", halfplatearmor.cost);
		j++;
		gotoxy(75, j);
		printf_s("(7)%s", breastplate.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", breastplate.cost);
		j++;
		gotoxy(75, j);
		printf_s("(8)%s", scalemailarmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", scalemailarmor.cost);
		j++;
		gotoxy(75, j);
		printf_s("(9)%s", chainshirt.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", chainshirt.cost);
		j++;
		gotoxy(75, j);
		printf_s("(q)%s", hidearmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", hidearmor.cost);
		j++;
	}
	if (hero.class == 1) {

		gotoxy(75, j);
		printf_s("(w)%s", studdedleather.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", studdedleather.cost);
		j++;
		gotoxy(75, j);
		printf_s("(e)%s", leatherarmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", leatherarmor.cost);
		j++;
		gotoxy(75, j);
		printf_s("(r)%s", paddedarmor.name);
		j++;
		gotoxy(75, j);
		printf_s(" (%d gold)", paddedarmor.cost);

		j = 13;
		gotoxy(115, j);
		printf_s("(i)%s", eldritchblast.name);
		j++;
		gotoxy(115, j);
		printf_s(" (Free)");
		j++;
		gotoxy(115, j);
		printf_s("(o)%s", faeriefire.name);
		j++;
		gotoxy(115, j);
		printf_s(" (10 gold)");

	}

	gotoxy(95, 13);
	j = 13;
	printf_s("(t)%s", dagger.name);
	j++;
	gotoxy(95, j);
	printf_s(" (%d gold)", dagger.cost);
	j++;
	gotoxy(95, j);
	printf_s("(y)%s", quarterstaff.name);
	j++;
	gotoxy(95, j);
	printf_s(" (%d gold)", quarterstaff.cost);
	j++;
	gotoxy(95, j);
	printf_s("(u)%s", lightcrossbow.name);
	j++;
	gotoxy(95, j);
	printf_s(" (%d gold)", lightcrossbow.cost);


	j = 13;
	gotoxy(135, j);
	printf_s("(p)%s", healingpotion.name);
	j++;
	gotoxy(135, j);
	printf_s(" (%d gold)", healingpotion.cost);
	while (choose != '-') {
		gotoxy(85, 7);
		printf_s("Hero money:  %d gold  %d silver  %d copper   ", hero.gold, hero.silver, hero.copper);
		choose = _getch();
		switch (hero.class) {
		case 1: {
			switch (choose) {
			case 'w': {
				if (hero.equiplist[1] != studdedleather.id)
					if (hero.gold >= studdedleather.cost) {
						equips(studdedleather.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'e': {
				if (hero.equiplist[1] != leatherarmor.id)
					if (hero.gold >= leatherarmor.cost) {
						equips(leatherarmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'r': {
				if (hero.equiplist[1] != paddedarmor.id)
					if (hero.gold >= paddedarmor.cost) {
						equips(paddedarmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}

			case 't': {
				if (hero.gold >= dagger.cost) {
					hero.gold -= dagger.cost;
					for (int i = 0; i < 20; i++) {
						if (hero.weaponlist[i] == '\0') {
							hero.weaponlist[i] = '1';
							break;
						}
					}
					gotoxy(85, 40);
					printf_s("Buyed");
					Sleep(500);
					gotoxy(85, 40);
					printf_s("     ");
				}
				else {
					donthavemoney();
					break;
				}

				break;
			}
			case 'y': {
				if (hero.gold >= quarterstaff.cost) {
					hero.gold -= quarterstaff.cost;
					for (int i = 0; i < 20; i++) {
						if (hero.weaponlist[i] == '\0') {
							hero.weaponlist[i] = '2';
							break;
						}
					}
					gotoxy(85, 40);
					printf_s("Buyed");
					Sleep(500);
					gotoxy(85, 40);
					printf_s("     ");
				}
				else {
					donthavemoney();
					break;
				}

				break;
			}
			case 'u': {
				if (hero.gold >= lightcrossbow.cost) {
					hero.gold -= lightcrossbow.cost;
					for (int i = 0; i < 20; i++) {
						if (hero.weaponlist[i] == '\0') {
							hero.weaponlist[i] = '4';
							break;
						}
					}
					gotoxy(85, 40);
					printf_s("Buyed");
					Sleep(500);
					gotoxy(85, 40);
					printf_s("     ");
				}
				else {
					donthavemoney();
					break;
				}

				break;
			}

			case 'i': {
				if (hero.gold >= 0) {
					hero.gold -= 0;
					for (int i = 0; i < 20; i++) {
						if (hero.spelllist[i] == '\0') {
							hero.spelllist[i] = eldritchblast.id;
							break;
						}
					}
					gotoxy(85, 40);
					printf_s("Buyed");
					Sleep(500);
					gotoxy(85, 40);
					printf_s("     ");
				}
				else {
					donthavemoney();
					break;
				}

				break;
			}
			case 'o': {
				if (hero.gold >= 10) {
					hero.gold -= 10;
					for (int i = 0; i < 20; i++) {
						if (hero.spelllist[i] == '\0') {
							hero.spelllist[i] = faeriefire.id;
							break;
						}
					}
					gotoxy(85, 40);
					printf_s("Buyed");
					Sleep(500);
					gotoxy(85, 40);
					printf_s("     ");
				}
				else {
					donthavemoney();
					break;
				}

				break;
			}

			case 'p': {
				if (hero.gold >= healingpotion.cost) {
					hero.gold -= healingpotion.cost;
					for (int i = 0; i < 20; i++) {
						if (hero.itemlist[i] == '\0') {
							hero.itemlist[i] = healingpotion.id;
							break;
						}
					}

					gotoxy(85, 40);
					printf_s("Buyed");
					Sleep(500);
					gotoxy(85, 40);
					printf_s("     ");
				}
				else {
					donthavemoney();
					break;
				}


				break;
			}
			}
			break;
		}
		case 2: {
			switch (choose) {
			case '1': {
				if (hero.equiplist[3] != shield.id)
					if (hero.gold >= shield.cost) {
						equips(shield.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case '2': {
				if (hero.equiplist[1] != platearmor.id)
					if (hero.gold >= platearmor.cost) {
						equips(platearmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case '3': {
				if (hero.equiplist[1] != splintarmor.id)
					if (hero.gold >= splintarmor.cost) {
						equips(splintarmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case '4': {
				if (hero.equiplist[1] != chainmail.id)
					if (hero.gold >= chainmail.cost) {
						equips(chainmail.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case '5': {
				if (hero.equiplist[1] != ringmailarmor.id)
					if (hero.gold >= ringmailarmor.cost) {
						equips(ringmailarmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}

			case '6': {
				if (hero.equiplist[1] != halfplatearmor.id)
					if (hero.gold >= halfplatearmor.cost) {
						equips(halfplatearmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case '7': {
				if (hero.equiplist[1] != breastplate.id)
					if (hero.gold >= breastplate.cost) {
						equips(breastplate.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case '8': {
				if (hero.equiplist[1] != scalemailarmor.id)
					if (hero.gold >= scalemailarmor.cost) {
						equips(scalemailarmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case '9': {
				if (hero.equiplist[1] != chainshirt.id)
					if (hero.gold >= chainshirt.cost) {
						equips(chainshirt.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'q': {
				if (hero.equiplist[1] != hidearmor.id)
					if (hero.gold >= hidearmor.cost) {
						equips(hidearmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}

			case 'w': {
				if (hero.equiplist[1] != studdedleather.id)
					if (hero.gold >= studdedleather.cost) {
						equips(studdedleather.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'e': {
				if (hero.equiplist[1] != leatherarmor.id)
					if (hero.gold >= leatherarmor.cost) {
						equips(leatherarmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'r': {
				if (hero.equiplist[1] != paddedarmor.id)
					if (hero.gold >= paddedarmor.cost) {
						equips(paddedarmor.id);
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}

			case 't': {
				if (hero.weaponlist[0] != '1')
					if (hero.gold >= dagger.cost) {
						hero.gold -= dagger.cost;
						hero.weaponlist[1] = '1';
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'y': {
				if (hero.weaponlist[1] != '2')
					if (hero.gold >= quarterstaff.cost) {
						hero.gold -= quarterstaff.cost;
						hero.weaponlist[2] = '2';
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'u': {
				if (hero.weaponlist[3] != '4')
					if (hero.gold >= lightcrossbow.cost) {
						hero.gold -= lightcrossbow.cost;
						hero.weaponlist[4] = '4';
						gotoxy(85, 40);
						printf_s("Buyed");
						Sleep(500);
						gotoxy(85, 40);
						printf_s("     ");
					}
					else {
						donthavemoney();
						break;
					}

				break;
			}
			case 'i': {
				if (hero.gold >= 0) {
					hero.gold -= 0;
					for (int i = 0; i < 20; i++) {
						if (hero.spelllist[i] == '\0') {
							hero.spelllist[i] == eldritchblast.id;
							break;
						}
					}
					gotoxy(85, 40);
					printf_s("Buyed");
					Sleep(500);
					gotoxy(85, 40);
					printf_s("     ");
				}
				else {
					donthavemoney();
					break;
				}

				break;
			}

			}
			break;
		}
		}

	}
	system("cls");
}
int stage0() {
	char control = 0;
	int rounds = 0;
	rulegoblin(1);
	goblin();
	clearchat();
	while (1) {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 'e') {
			system("cls");
			showequip();
		}
		if (control == 'm') {
			system("cls");
			makemap();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i' && control != 'e' && control != 'm') {
			goblin();
			clearchat();
		}

		if (actions(&control, &rounds) == 2) {
			return 2;
		}

	}
}
int stage2() {
	char control = 0;
	int rounds = 0;
	rulerat(1);
	rat();
	clearchat();
	while (1) {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 'e') {
			system("cls");
			showequip();
		}
		if (control == 'm') {
			system("cls");
			makemap();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i' && control != 'e' && control != 'm') {
			rat();
			clearchat();
		}

		switch (actions(&control, &rounds)) {
		case 2: {
			return 2;
			break;
		}
		case 3: {
			return 3;
			break;
		}
		}
	}
}
int stage3() {
	char control = 0;
	int rounds = 0;
	ruleskeleton(1);
	skeleton();
	clearchat();
	while (1) {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 'e') {
			system("cls");
			showequip();
		}
		if (control == 'm') {
			system("cls");
			makemap();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i' && control != 'e' && control != 'm') {
			skeleton();
			clearchat();
		}

		switch (actions(&control, &rounds)) {
		case 2: {
			return 2;
			break;
		}
		case 3: {
			return 3;
			break;
		}
		}
	}
}
int stage4() {
	for (int i = 0; i < 20; i++) {
		if (hero.weaponlist[i] == magicalshortsword.id) {
			hero.weaponlist[i] = '\0';
		}
	}
	char control = 0;
	int rounds = 0;
	rulesword(1);
	sword();
	clearchat();
	while (1) {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 'e') {
			system("cls");
			showequip();
		}
		if (control == 'm') {
			system("cls");
			makemap();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i' && control != 'e' && control != 'm') {
			sword();
			clearchat();
		}

		switch (actions(&control, &rounds)) {
		case 3: {
			return 3;
			break;
		}
		case 2: {
			return 2;
			break;
		}
		}
	}
}
int stage5() {
	char control = 0;
	int rounds = 0;
	ruledragon(1);
	calcryx();
	clearchat();
	while (1) {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 'e') {
			system("cls");
			showequip();
		}
		if (control == 'm') {
			system("cls");
			makemap();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i' && control != 'e' && control != 'm') {
			calcryx();
			clearchat();
		}

		switch (actions(&control, &rounds)) {
		case 2: {
			return 2;
			break;
		}
		case 3: {
			return 3;
			break;
		}
		default: {
			if (control != 'i' && control != 'e' && control != 'm' && control != 'b')
				if (helpofkobolds.killed == 1) {
					if (monster.hits >= 16) {
						gotoxy(3, 10);
						int dmg = roll(4, 4, 0);
						printf_s("Kobolds throw their spears at dragon");
						Sleep(1500);
						gotoxy(3, 11);
						printf_s("%d damage", dmg);
						Sleep(1500);
						monster.hits -= dmg;
						clearchat();
					}
					else {
						gotoxy(3, 10);
						printf_s("The dragon roars loudly,");
						gotoxy(3, 11);
						printf_s("causing the kobolds to faint");
						Sleep(1500);
						clearchat();
					}
				}
			break;
		}
		}

	}
}
int stage6() {
	char control = 0;
	int rounds = 0;
	rulekobold(1);
	kobold();
	clearchat();
	while (1) {
		control = _getch();
		if (control == 'i') {
			system("cls");
			characterlist();
		}
		if (control == 'e') {
			system("cls");
			showequip();
		}
		if (control == 'm') {
			system("cls");
			makemap();
		}
		if (control == 27) {
			system("cls");
		}
		if (control != 'i' && control != 'e' && control != 'm') {
			kobold();
			clearchat();
		}

		if (actions(&control, &rounds) == 2) {
			return 2;
		}

	}
}
void stages() {
	system("cls");
	levels();
	switch (hero.progress) {
	case 0: {
		//ashardalon();
		//picture();
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
	case 5: {
		room5();
	}
	case 6: {
		room6();
	}
	case 7: {
		room7();
	}
	case 8: {
		room8();
	}
	case 9: {
		room9();
	}
	}
}