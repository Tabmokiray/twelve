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
void skeleton() {
	system("cls");
	int i = 70;
	gotoxy(i, 3);
	printf_s("    -@##:");
	gotoxy(i, 4);
	printf_s("   .=#=*:");
	gotoxy(i, 5);
	printf_s("  =#######:");
	gotoxy(i, 6);
	printf_s(" ## ### ##");
	gotoxy(i, 7);
	printf_s(" *########*");
	gotoxy(i, 8);
	printf_s("   # # #.");
	gotoxy(i, 9);
	printf_s(" ....##....");
	gotoxy(i, 10);
	printf_s("--:**##+**-:");
	gotoxy(i, 11);
	printf_s("=* :*##=* *=");
	gotoxy(i, 12);
	printf_s("#+ +###@#.*@");
	gotoxy(i, 13);
	printf_s("     *=");
	gotoxy(i, 14);
	printf_s("    #:-#.");
	gotoxy(i, 15);
	printf_s("    #--@");
	gotoxy(i, 16);
	printf_s("   .#:-#");
}
void sword(){
	system("cls");
	int i = 70;
	gotoxy(i, 3);
	printf_s("       ..");
	gotoxy(i, 4);
	printf_s("      =##=");
	gotoxy(i, 5);
	printf_s("     .#  #.");
	gotoxy(i, 6);
	printf_s("     .#  #.");
	gotoxy(i, 7);
	printf_s("     .#  #.");
	gotoxy(i, 8);
	printf_s("     .#  #.");
	gotoxy(i, 9);
	printf_s("     .#  #.");
	gotoxy(i, 10);
	printf_s("     .#  #.");
	gotoxy(i, 11);
	printf_s("     .#  #.");
	gotoxy(i, 12);
	printf_s("  #@###  ####@#");
	gotoxy(i, 13);
	printf_s("    #@.  .@#");
	gotoxy(i, 14);
	printf_s("      .##.");
	gotoxy(i, 15);
	printf_s("      .##.");
	gotoxy(i, 16);
	printf_s("     .####.");
}
void msword() {
	system("cls");
	FILE* sword;

	if ((fopen_s(&sword, "magicsword.txt", "r")) != 0) {
		exit(1);
	}

	magicsword.text1 = (char*)malloc(1000);
	if (magicsword.text1 == 0) {
		exit(1);
	}
	int i = 0;

	fscanf_s(sword, "%c", &magicsword.text1[i], 1);
	while (magicsword.text1[i] != '\0') {
		i++;
		fscanf_s(sword, "%c", &magicsword.text1[i], 1);
	}
	int z = 3;
	gotoxy(50, z);
	for (int j = 0; j < 900; j++) {
		if (magicsword.text1[j] == '\n') {
			j++;
			z++;
			gotoxy(50, z);
		}
		printf_s("%c", magicsword.text1[j]);
	}
	free(magicsword.text1);
	fclose(sword);
}