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
	printf_s("         .          .:*@####+.");
	gotoxy(i, 4);
	printf_s("        -#@..:################:");
	gotoxy(i, 5);
	printf_s("        *@*####################-..");
	gotoxy(i, 6);
	printf_s("       +##################@-....--*");
	gotoxy(i, 7);
	printf_s("     :####=.  :#@-####+.   .#####.");
	gotoxy(i, 8);
	printf_s("   .@@:.-     *- .#+.    .#######:");
	gotoxy(i, 9);
	printf_s(" +               *+    ..########+");
	gotoxy(i, 10);
	printf_s(": /=/     /=/    -#* .+##########+");
	gotoxy(i, 11);
	printf_s(":                 .+##############");
	gotoxy(i, 12);
	printf_s(":    /.           @*  -=##########");
	gotoxy(i, 13);
	printf_s(" :  .           .+#.");
	gotoxy(i, 14);
	printf_s("  .  *++.*   .=#-");
	gotoxy(i, 15);
	printf_s("    .*++.*   #+");
	gotoxy(i, 16);
	printf_s("     .     @.");
	gotoxy(i, 17);
	printf_s("      .+++.");
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
void sword() {
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
void ashardalon() {
	system("cls");
	FILE* dragon;

	if ((fopen_s(&dragon, "dragon.txt", "r")) != 0) {
		exit(1);
	}

	reddragon.text1 = (char*)malloc(5000);
	if (reddragon.text1 == 0) {
		exit(1);
	}
	int i = 0;

	fscanf_s(dragon, "%c", &reddragon.text1[i], 1);
	while (reddragon.text1[i] != '\0') {
		i++;
		fscanf_s(dragon, "%c", &reddragon.text1[i], 1);
	}
	int z = 1;
	gotoxy(0, z);
	for (int j = 0; j < 4407; j++) {
		if (reddragon.text1[j] == '\n') {
			j++;
			z++;
			gotoxy(0, z);
		}
		printf_s("%c", reddragon.text1[j]);
	}
	free(reddragon.text1);
	fclose(dragon);
	FILE* intro;

	if ((fopen_s(&intro, "intro.txt", "r")) != 0) {
		exit(1);
	}

	intr.text1 = (char*)malloc(350);
	if (intr.text1 == 0) {
		exit(1);
	}
	i = 0;

	fscanf_s(intro, "%c", &intr.text1[i], 1);
	while (intr.text1[i] != '\0') {
		i++;
		fscanf_s(intro, "%c", &intr.text1[i], 1);
	}
	z = 15;
	gotoxy(72, z);
	for (int j = 0; j < 344; j++) {
		if (intr.text1[j] == '\n') {
			j++;
			z++;
			gotoxy(72, z);
		}
		printf_s("%c", intr.text1[j]);
		Sleep(30);
	}
	free(intr.text1);
	fclose(intro);
	_getch();
	system("cls");
}
void dragon() {
	system("cls");
	int i = 60;
	gotoxy(i, 3);
	printf_s("                        ...                           ");
	gotoxy(i, 4);
	printf_s("                  ..:-.+##@#####@@*-..");
	gotoxy(i, 5);
	printf_s("                -######=*+-:##-##=*=####*.");
	gotoxy(i, 6);
	printf_s("            .:+##=:.      :#+*#=..=##=.-###=");
	gotoxy(i, 7);
	printf_s("       .-=+##+-..###-     =#-#@..##..*##@:.");
	gotoxy(i, 8);
	printf_s("     -###+=-.   .@##+    .##:#+.:#+-##-.");
	gotoxy(i, 9);
	printf_s("   .@#=..         .      -##########=");
	gotoxy(i, 10);
	printf_s(" .+#=.        .-:..      .###+--:*@###.");
	gotoxy(i, 11);
	printf_s(" -#=...-*=#############:  *#*=##=.. .+##.");
	gotoxy(i, 12);
	printf_s(" :######**:#+...++.*###- .@#.  .+##-. .+##.");
	gotoxy(i, 13);
	printf_s(" .:-..-@###########+.    *#+     .:##:. .+#@.");
	gotoxy(i, 14);
	printf_s("   -##=*-...   .      .*##:        .:##.  -##.");
	gotoxy(i, 15);
	printf_s("   .+#+@########+-:*@####=-..        .=#+. :#+");
	gotoxy(i, 16);
	printf_s("    .+###:#:   .@###=-. .*@##=..      .+#:  =#:");
	gotoxy(i, 17);
	printf_s("     .-##-        ..:##-..  .*##@.     .##. .#@.");
	gotoxy(i, 18);
	printf_s("                     .@###@-.  .+##=.   .##- =#.");
	gotoxy(i, 19);
	printf_s("                      -#+.:##+.   .+#=.  .##.*#*");
	gotoxy(i, 20);
	printf_s("                      -#+   .@#@.   :#@.  .##.#@.");
	gotoxy(i, 21);
	printf_s("                     .+#*     -##.   -#@.  -#@#@");
	gotoxy(i, 22);
	printf_s("                   -+##-       -#=   .*#*.  *##@");
	gotoxy(i, 23);
	printf_s("                   +*.         .=#-   .##.   @#@");
	gotoxy(i, 24);
	printf_s("                                -#=    +#-   .#@.");
}
void meepo() {
	system("cls");
	FILE* mepo;

	if ((fopen_s(&mepo, "meepo.txt", "r")) != 0) {
		exit(1);
	}

	meep.text1 = (char*)malloc(5000);
	if (meep.text1 == 0) {
		exit(1);
	}
	int i = 0;

	fscanf_s(mepo, "%c", &meep.text1[i], 1);
	while (meep.text1[i] != '\0') {
		i++;
		fscanf_s(mepo, "%c", &meep.text1[i], 1);
	}
	int z = 3;
	gotoxy(0, z);
	for (int j = 0; j < 4602; j++) {
		if (meep.text1[j] == '\n') {
			j++;
			z++;
			gotoxy(0, z);
		}
		printf_s("%c", meep.text1[j]);
	}
	free(meep.text1);
	fclose(mepo);
}
void kitty() {
	int i = 110;
	int j = 2;
	gotoxy(i, j);
	j++;
	printf_s("        _.:*=##**++.");
	gotoxy(i, j);
	j++;
	printf_s("..:+===@            *@+*::-.");
	gotoxy(i, j);
	j++;
	printf_s("#_                        _#");
	gotoxy(i, j);
	j++;
	printf_s(" =_                       +");
	gotoxy(i, j);
	j++;
	printf_s(" \@\                    :@|");
	gotoxy(i, j);
	j++;
	printf_s("   +-   ##        ##   *-  Armorclass: %d  ", familiar.armorclass);
	gotoxy(i, j);
	j++;
	printf_s("   -*  #*.#      #*.#  *-  Hits: %d  ", familiar.hits);
	gotoxy(i, j);
	j++;
	printf_s("    @\  ##        ##   #|   Name: %s", Imp.name);
	gotoxy(i, j);
	j++;
	printf_s("     @-       ^       =_");
	gotoxy(i, j);
	j++;
	printf_s("      |==========+===*_");
	gotoxy(i, j);
	j++;
	printf_s("      _#             _@:_      _");
	gotoxy(i, j);
	j++;
	printf_s("      |@               _@\   *:_-=_");
	gotoxy(i, j);
	j++;
	printf_s("       +-               _@|   *- |@");
	gotoxy(i, j);
	j++;
	printf_s("        =.   _   -*      .+  -=_ _#");
	gotoxy(i, j);
	j++;
	printf_s("        ::   #   -*      |@ _=\  =. ");
	gotoxy(i, j);
	j++;
	printf_s("        _#|  #  **_      _#@+_ |@.  ");
	gotoxy(i, j);
	j++;
	printf_s("         *:  #  +.       \-:+@*");
	gotoxy(i, j);
	j++;
	printf_s("         _+#+ =@#####@##*_     ");
}
void kobold() {
	system("cls");
	int i = 65;
	int j = 3;
	gotoxy(i, j);
	printf_s("         _*@@#+@\\");
	j++;
	gotoxy(i, j);
	printf_s("        =@#####=-");
	j++;
	gotoxy(i, j);
	printf_s("       _@    .  @_");
	j++;
	gotoxy(i, j);
	printf_s("        @        =+:");
	j++;
	gotoxy(i, j);
	printf_s("       _@+@@@*_\\-+=_+");
	j++;
	gotoxy(i, j);
	printf_s("     |@=@#+#@##=@\\                  _:***");
	j++;
	gotoxy(i, j);
	printf_s("    -=###=@##=@#=@\\               _=###+_");
	j++;
	gotoxy(i, j);
	printf_s("  _*=@+=@###@#|*@=@.      ___ _\\+#@+-_");
	j++;
	gotoxy(i, j);
	printf_s(" +=@===#####=@_  *=-@.\\*@-_ ___");
	j++;
	gotoxy(i, j);
	printf_s(" -@==@@######+@|:@@##@:");
	j++;
	gotoxy(i, j);
	printf_s("   _+=@#=@===@#=@_");
	j++;
	gotoxy(i, j);
	printf_s("_-=+-#:#=*_ .@##@\\");
	j++;
	gotoxy(i, j);
	printf_s("     _\\@**   |=::");
	j++;
	gotoxy(i, j);
	printf_s("      |#=*    \\@+@._");
	j++;
	gotoxy(i, j);
	printf_s("");
	j++;
	gotoxy(i, j);
	printf_s("    _\@-@_     _@:+#@");
	j++;
	gotoxy(i, j);
	printf_s("  _@.@@#\      _#-=+");
	j++;
	gotoxy(i, j);
	printf_s("    |:_@_");
}