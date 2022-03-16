#include "bestiary.h"
void rat() {
	system("cls");
	int i = 65;
	gotoxy(i, 3);
	printf_s("         -@##:");
	gotoxy(i, 4);
	printf_s("         #+  :###====@#+");
	gotoxy(i, 5);
	printf_s("         .@#:     -. ..##.");
	gotoxy(i, 6);
	printf_s("           *#.   -#- @@ :#:");
	gotoxy(i, 7);
	printf_s("          -#+            ##");
	gotoxy(i, 8);
	printf_s("         :#:       :#===@##.");
	gotoxy(i, 9);
	printf_s("        -#*    .::.@=#@*-+*.");
	gotoxy(i, 10);
	printf_s("        @=      .:#-+##*");
	gotoxy(i, 11);
	printf_s("        @+        #* #=#+");
	gotoxy(i, 12);
	printf_s("        @+             +#");
	gotoxy(i, 13);
	printf_s("        #+             +#");
	gotoxy(i, 14);
	printf_s("  *#########@======###@#=");
}
void goblin() {
	system("cls");
	int i = 65;
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
	int i = 65;
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
int spell(int z,int*damage,char*typeofdamage) {
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