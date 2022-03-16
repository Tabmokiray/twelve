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
	Sleep(1500);
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