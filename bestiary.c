#include "bestiary.h"
void goblin() {
	system("cls");
	int i = 50;
	gotoxy(i, 3);
	printf_s("    ^          ^");
	gotoxy(i, 4);
	printf_s("   / \\        / \\");
	gotoxy(i, 5);
	printf_s(" /*   *------*   *\\");
	gotoxy(i, 6);
	printf_s("|  (@)        (@)  |");
	gotoxy(i, 7);
	printf_s(" \\       /        /");
	gotoxy(i, 8);
	printf_s("  \\              /");
	gotoxy(i, 9);
	printf_s("   \\___  ~~  ___/");
	gotoxy(i, 10);
	printf_s("       \\____/");
}
void bandit() {
	system("cls");
	int i = 50;
	gotoxy(i, 3);
	printf_s("   _______________");
	gotoxy(i, 4);
	printf_s("  / ---       --- \\");
	gotoxy(i, 5);
	printf_s(" |  /-/       /-/  |");
	gotoxy(i, 6);
	printf_s("(|        /        |)");
	gotoxy(i, 7);
	printf_s(" |        '        |           ______");
	gotoxy(i, 8);
	printf_s("  \\               /           \\    |");
	gotoxy(i, 9);
	printf_s("   \\__  ___    __/  /||||______\\   |");
	gotoxy(i, 10);
	printf_s("      \\_______/    /  _/-----------|");
	gotoxy(i, 11);
	printf_s("       _/   \\_    /  /");
	gotoxy(i, 12);
	printf_s("      /       \\__/  /");
}
int spell(int z) {
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
	switch (hero.spelllist[z]) {
	case '1': {

		int j = 19;
		int f = 3;
		for (int i = 3; i < 310; i++) {
			if (eldritchblast.description[i - 3] == '\n') {
				j++;
				f = 3;
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