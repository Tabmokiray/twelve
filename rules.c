#include "rules.h"
void rulerat(int num) {
	if (num == 1) {
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
		monster.level = Rat.level;
	}
	if (num == 2) {
		monster2.modStr = Rat.modStr;
		monster2.modDex = Rat.modDex;
		monster2.modCon = Rat.modCon;
		monster2.modInt = Rat.modInt;
		monster2.modWis = Rat.modWis;
		monster2.modCha = Rat.modCha;
		monster2.armorclass = Rat.armorclass;
		monster2.hits = Rat.hits;
		monster2action.accur1 = Rataction.accur1;
		monster2action.damage1 = Rataction.damage1;
		monster2action.accur2 = Rataction.accur2;
		monster2action.damage2 = Rataction.damage2;
		strcpy_s(monster2.name, 10, Rat.name);
		monster2.proficiency = Rat.proficiency;
		monster2.level = Rat.level;
	}
}
void rulebandit(int num) {
	if (num == 1) {
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
		monster.level = Bandit.level;
	}
	if (num == 2) {
		monster2.modStr = Bandit.modStr;
		monster2.modDex = Bandit.modDex;
		monster2.modCon = Bandit.modCon;
		monster2.modInt = Bandit.modInt;
		monster2.modWis = Bandit.modWis;
		monster2.modCha = Bandit.modCha;
		monster2.armorclass = Bandit.armorclass;
		monster2.hits = Bandit.hits;
		monster2action.accur1 = Banditaction.accur1;
		monster2action.damage1 = Banditaction.damage1;
		monster2action.accur2 = Banditaction.accur2;
		monster2action.damage2 = Banditaction.damage2;
		strcpy_s(monster2.name, 7, Bandit.name);
		monster2.proficiency = Bandit.proficiency;
		monster2.level = Bandit.level;
	}
}
void rulegoblin(int num) {
	if (num == 1) {
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
		monster.level = Goblin.level;
	}
	if (num == 2) {
		monster2.modStr = Goblin.modStr;
		monster2.modDex = Goblin.modDex;
		monster2.modCon = Goblin.modCon;
		monster2.modInt = Goblin.modInt;
		monster2.modWis = Goblin.modWis;
		monster2.modCha = Goblin.modCha;
		monster2.armorclass = Goblin.armorclass;
		monster2.hits = Goblin.hits;
		monster2action.accur1 = Goblinaction.accur1;
		monster2action.damage1 = Goblinaction.damage1;
		monster2action.accur2 = Goblinaction.accur2;
		monster2action.damage2 = Goblinaction.damage2;
		strcpy_s(monster2.name, 7, Goblin.name);
		monster2.proficiency = Goblin.proficiency;
		monster2.level = Goblin.level;
	}
}
void ruleskeleton(int num) {
	if (num == 1) {
		monster.modStr = Skeleton.modStr;
		monster.modDex = Skeleton.modDex;
		monster.modCon = Skeleton.modCon;
		monster.modInt = Skeleton.modInt;
		monster.modWis = Skeleton.modWis;
		monster.modCha = Skeleton.modCha;
		monster.armorclass = Skeleton.armorclass;
		monster.hits = Skeleton.hits;
		monsteraction.accur1 = Skeletonaction.accur1;
		monsteraction.damage1 = Skeletonaction.damage1;
		monsteraction.accur2 = Skeletonaction.accur2;
		monsteraction.damage2 = Skeletonaction.damage2;
		strcpy_s(monster.name, 9, Skeleton.name);
		monster.proficiency = Skeleton.proficiency;
		monster.level = Skeleton.level;
	}
	if (num == 2) {
		monster2.modStr = Skeleton.modStr;
		monster2.modDex = Skeleton.modDex;
		monster2.modCon = Skeleton.modCon;
		monster2.modInt = Skeleton.modInt;
		monster2.modWis = Skeleton.modWis;
		monster2.modCha = Skeleton.modCha;
		monster2.armorclass = Skeleton.armorclass;
		monster2.hits = Skeleton.hits;
		monster2action.accur1 = Skeletonaction.accur1;
		monster2action.damage1 = Skeletonaction.damage1;
		monster2action.accur2 = Skeletonaction.accur2;
		monster2action.damage2 = Skeletonaction.damage2;
		strcpy_s(monster2.name, 9, Skeleton.name);
		monster2.proficiency = Skeleton.proficiency;
		monster2.level = Skeleton.level;
	}
}
void rulesword(int num) {
	if (num == 1) {
		monster.modStr = Sword.modStr;
		monster.modDex = Sword.modDex;
		monster.modCon = Sword.modCon;
		monster.modInt = Sword.modInt;
		monster.modWis = Sword.modWis;
		monster.modCha = Sword.modCha;
		monster.armorclass = Sword.armorclass;
		monster.hits = Sword.hits;
		monsteraction.accur1 = Swordaction.accur1;
		monsteraction.damage1 = Swordaction.damage1;
		monsteraction.accur2 = Swordaction.accur2;
		monsteraction.damage2 = Swordaction.damage2;
		strcpy_s(monster.name, 20, Sword.name);
		monster.proficiency = Sword.proficiency;
		monster.level = Sword.level;
	}
	if (num == 2) {
		monster2.modStr = Sword.modStr;
		monster2.modDex = Sword.modDex;
		monster2.modCon = Sword.modCon;
		monster2.modInt = Sword.modInt;
		monster2.modWis = Sword.modWis;
		monster2.modCha = Sword.modCha;
		monster2.armorclass = Sword.armorclass;
		monster2.hits = Sword.hits;
		monster2action.accur1 = Swordaction.accur1;
		monster2action.damage1 = Swordaction.damage1;
		monster2action.accur2 = Swordaction.accur2;
		monster2action.damage2 = Swordaction.damage2;
		strcpy_s(monster2.name, 20, Sword.name);
		monster2.proficiency = Sword.proficiency;
		monster2.level = Sword.level;
	}
}
void ruledragon(int num) {
	if (num == 1) {
		monster.modStr = Dragon.modStr;
		monster.modDex = Dragon.modDex;
		monster.modCon = Dragon.modCon;
		monster.modInt = Dragon.modInt;
		monster.modWis = Dragon.modWis;
		monster.modCha = Dragon.modCha;
		monster.armorclass = Dragon.armorclass;
		monster.hits = Dragon.hits;
		monsteraction.accur1 = Dragonaction.accur1;
		monsteraction.damage1 = Dragonaction.damage1;
		strcpy_s(monsteraction.action1, 5, Dragonaction.action1);
		monsteraction.accur2 = Dragonaction.accur2;
		monsteraction.damage2 = Dragonaction.damage2;
		strcpy_s(monsteraction.action2, 12, Dragonaction.action2);
		strcpy_s(monster.name, 7, Dragon.name);
		monster.proficiency = Dragon.proficiency;
		monster.level = Dragon.level;
	}
	if (num == 2) {
		monster2.modStr = Dragon.modStr;
		monster2.modDex = Dragon.modDex;
		monster2.modCon = Dragon.modCon;
		monster2.modInt = Dragon.modInt;
		monster2.modWis = Dragon.modWis;
		monster2.modCha = Dragon.modCha;
		monster2.armorclass = Dragon.armorclass;
		monster2.hits = Dragon.hits;
		monster2action.accur1 = Dragonaction.accur1;
		monster2action.damage1 = Dragonaction.damage1;
		monster2action.accur2 = Dragonaction.accur2;
		monster2action.damage2 = Dragonaction.damage2;
		strcpy_s(monster2.name, 7, Dragon.name);
		monster2.proficiency = Dragon.proficiency;
		monster2.level = Dragon.level;
	}
}
void ruleimp(int num) {
	if (num == 1) {
		monster.modStr = Imp.modStr;
		monster.modDex = Imp.modDex;
		monster.modCon = Imp.modCon;
		monster.modInt = Imp.modInt;
		monster.modWis = Imp.modWis;
		monster.modCha = Imp.modCha;
		monster.armorclass = Imp.armorclass;
		monster.hits = Imp.hits;
		monsteraction.accur1 = Impaction.accur1;
		monsteraction.damage1 = Impaction.damage1;
		strcpy_s(monsteraction.action1, strlen(Impaction.action1), Impaction.action1);
		monsteraction.accur2 = Impaction.accur2;
		monsteraction.damage2 = Impaction.damage2;
		strcpy_s(monsteraction.action2, strlen(Impaction.action2), Impaction.action2);
		strcpy_s(monster.name, strlen(Imp.name), Imp.name);
		monster.proficiency = Imp.proficiency;
		monster.level = Imp.level;
	}
	if (num == 2) {
		monster2.modStr = Imp.modStr;
		monster2.modDex = Imp.modDex;
		monster2.modCon = Imp.modCon;
		monster2.modInt = Imp.modInt;
		monster2.modWis = Imp.modWis;
		monster2.modCha = Imp.modCha;
		monster2.armorclass = Imp.armorclass;
		monster2.hits = Imp.hits;
		monster2action.accur1 = Impaction.accur1;
		monster2action.damage1 = Impaction.damage1;
		strcpy_s(monster2action.action1, strlen(Impaction.action1), Impaction.action1);
		monster2action.accur2 = Impaction.accur2;
		monster2action.damage2 = Impaction.damage2;
		strcpy_s(monster2action.action2, strlen(Impaction.action2), Impaction.action2);
		strcpy_s(monster2.name, strlen(Imp.name), Imp.name);
		monster2.proficiency = Imp.proficiency;
		monster2.level = Imp.level;
	}
}
void rulefamiliar() {

	familiar.modStr = Imp.modStr;
	familiar.modDex = Imp.modDex;
	familiar.modCon = Imp.modCon;
	familiar.modInt = Imp.modInt;
	familiar.modWis = Imp.modWis;
	familiar.modCha = Imp.modCha;
	familiar.armorclass = Imp.armorclass;
	familiar.hits = Imp.hits;
	familiaraction.accur1 = Impaction.accur1;
	familiaraction.damage1 = Impaction.damage1;
	strcpy_s(familiaraction.action1, strlen(Impaction.action1), Impaction.action1);
	familiaraction.accur2 = Impaction.accur2;
	familiaraction.damage2 = Impaction.damage2;
	strcpy_s(familiaraction.action2, strlen(Impaction.action2), Impaction.action2);
	strcpy_s(familiar.name, strlen(Imp.name), Imp.name);
	familiar.proficiency = Imp.proficiency;
	familiar.level = Imp.level;
	modif();
}
/*
void rulemon1(int id) {
	switch (id) {
	case 0: {
		rulegoblin(1);
		break;
	}
	case 1: {
		rulebandit(1);
		break;
	}
	case 2: {
		rulerat(1);
		break;
	}
	case 3: {
		ruleskeleton(1);
		break;
	}
	case 4: {
		rulesword(1);
		break;
	}
	}
}
void rulemon2(int id) {
	switch (id) {
	case 0: {
		rulegoblin(2);
		break;
	}
	case 1: {
		rulebandit(2);
		break;
	}
	case 2: {
		rulerat(2);
		break;
	}
	case 3: {
		ruleskeleton(2);
		break;
	}
	case 4: {
		rulesword(2);
		break;
	}
	}
}
*/
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

	healingpotion.damage = d4;
	healingpotion.amount = 2;
	healingpotion.mods = 2;
	healingpotion.cost = 50;
	healingpotion.amount = 0;
	healingpotion.description = (char*)malloc(100);
	strcpy_s(healingpotion.description, 36, "Healing potion restore 2d4 + 2 hits");
	healingpotion.id = '1';
	strcpy_s(healingpotion.name, 15, "Healing potion");
	strcpy_s(healingpotion.typeofdamage, 8, "healing");

	eldritchblast.level = 0;
	eldritchblast.amount = 1;
	eldritchblast.damage = d10;
	strcpy_s(eldritchblast.name, 15, "Eldritch blast");
	eldritchblast.description = (char*)malloc(400);
	strcpy_s(eldritchblast.description, 310, "A beam of crackling energy streaks toward a creature within range.\nMake a ranged spell attack against the target.\nOn a hit, the target takes 1d10 force damage.\nThe spell creates more than one beam when you reach higher levels :\ntwo beams at 5th level, three beams at 11th level,\nand four beams at 17th level.");
	eldritchblast.id = '1';
	strcpy_s(eldritchblast.typeofdamage, 6, "force");
	magearmor.level = 1;
	magearmor.amount = 0;
	magearmor.damage = 0;
	strcpy_s(magearmor.name, 11, "Mage armor");
	magearmor.description = (char*)malloc(260);
	magearmor.id = '2';
	strcpy_s(magearmor.description, 260, "You touch a willing creature who isn't wearing armor,\nand a protective magical force surrounds it until the spell ends.\nThe target's base AC becomes 13 + its Dexterity modifier.\nThe spell ends if the target dons armor or if you dismiss the spell as an action.");
	faeriefire.level = 1;
	faeriefire.amount = 0;
	faeriefire.damage = 0;
	strcpy_s(faeriefire.name, 12, "Faerie fire");
	faeriefire.description = (char*)malloc(500);
	strcpy_s(faeriefire.description, 468, "Each object in a 20-foot cube within range is outlined in blue, green,\nor violet light (your choice). Any creature in the area when the spell is cast is also\noutlined in light if it fails a Dexterity saving throw.\nFor the duration, objects and affected creatures shed dim light in a 10-foot radius.\nAny attack roll against an affected creature or object has advantage if\nthe attacker can see it, and the affected creature or object\ncan't benefit from being invisible.");
	faeriefire.id = '3';
	strcpy_s(faeriefire.typeofdamage, 1, "");
	findfamiliar.level = 1;
	findfamiliar.amount = 0;
	findfamiliar.damage = 0;
	strcpy_s(findfamiliar.name, 14, "Find familiar");
	findfamiliar.description = (char*)malloc(388);
	strcpy_s(findfamiliar.description, 388, "You gain the service of a familiar, a spirit that takes an animal form you choose:\nbat, cat, crab, frog (toad), hawk, lizard, octopus, owl, poisonous snake, fish (quipper),\nrat, raven, sea horse, spider, or weasel. Appearing in an unoccupied\nspace within range, the familiar has the statistics of the chosen form, though it is a celestial,\nfey, or fiend (your choice) instead of a beast.");
	findfamiliar.id = '4';

	strcpy_s(feyancestry.name, 13, "Fey ancestry");
	feyancestry.description = (char*)malloc(500);
	strcpy_s(feyancestry.description, 488, "Starting at 1st level, your patron bestows upon you the ability to project\nthe beguiling and fearsome presence of the fey.\nAs an action, you can cause each creature in a 10-foot cube\noriginating from you to make a Wisdom saving throw against your warlock spell save DC.\nThe creatures that fail their saving throws are all charmed or frightened by you (your choice) until the end of your next turn.\nOnce you use this feature, you can't use it again until you finish a short or long rest.");
	feyancestry.id = '1';
	strcpy_s(darkonesblessing.name, 20, "Dark One's blessing");
	darkonesblessing.description = (char*)malloc(200);
	strcpy_s(darkonesblessing.description, 175, "Starting at 1st level, when you reduce a hostile creature to 0 hit points,\nyou gain temporary hit points equal\nto your Charisma modifier + your warlock level (minimum of 1).");
	darkonesblessing.id = '2';
	strcpy_s(summonblade.name, 13, "Summon blade");
	summonblade.description = (char*)malloc(500);
	strcpy_s(summonblade.description, 41, "You summon a melee weapon of your choice");
	summonblade.id = '3';
	strcpy_s(imp.name, 10, "Imp sting");
	imp.id = '4';

	dagger.damage = d4;
	dagger.finnese = 1;
	dagger.mods = 0;
	dagger.id = '1';
	strcpy_s(dagger.name, 7, "Dagger");
	dagger.cost = 2;

	magicalshortsword.damage = d6;
	magicalshortsword.mods = 1;
	magicalshortsword.finnese = 1;
	magicalshortsword.id = '3';
	strcpy_s(magicalshortsword.name, 20, "Magical short sword");
	magicalshortsword.cost = 500;

	quarterstaff.damage = d8;
	quarterstaff.finnese = 0;
	quarterstaff.mods = 0;
	quarterstaff.id = '2';
	strcpy_s(quarterstaff.name, 13, "Quarterstaff");
	quarterstaff.cost = 1;

	lightcrossbow.damage = d8;
	lightcrossbow.finnese = 0;
	lightcrossbow.mods = 0;
	lightcrossbow.id = '4';
	strcpy_s(lightcrossbow.name, 15, "Light crossbow");
	lightcrossbow.cost = 25;

	shield.startarmor = 2;
	shield.type = 0;
	strcpy_s(shield.name, 7, "Shield");
	shield.id = '5';
	shield.cost = 10;

	platearmor.startarmor = 18;
	platearmor.type = 3;
	strcpy_s(platearmor.name, 12, "Plate armor");
	platearmor.id = '6';
	platearmor.cost = 1500;
	splintarmor.startarmor = 17;
	splintarmor.type = 3;
	strcpy_s(splintarmor.name, 13, "Splint armor");
	splintarmor.id = '7';
	splintarmor.cost = 200;
	chainmail.startarmor = 16;
	chainmail.type = 3;
	strcpy_s(chainmail.name, 11, "Chain mail");
	chainmail.id = '8';
	chainmail.cost = 75;
	ringmailarmor.startarmor = 14;
	ringmailarmor.type = 3;
	strcpy_s(ringmailarmor.name, 16, "Ring mail armor");
	ringmailarmor.id = '9';
	ringmailarmor.cost = 30;

	halfplatearmor.startarmor = 15;
	halfplatearmor.type = 2;
	strcpy_s(halfplatearmor.name, 17, "Half plate armor");
	halfplatearmor.id = 'q';
	halfplatearmor.cost = 750;
	breastplate.startarmor = 14;
	breastplate.type = 2;
	strcpy_s(breastplate.name, 13, "Breast plate");
	breastplate.id = 'w';
	breastplate.cost = 400;
	scalemailarmor.startarmor = 14;
	scalemailarmor.type = 2;
	strcpy_s(scalemailarmor.name, 17, "Scale mail armor");
	scalemailarmor.id = 'e';
	scalemailarmor.cost = 50;
	chainshirt.startarmor = 13;
	chainshirt.type = 2;
	strcpy_s(chainshirt.name, 12, "Chain shirt");
	chainshirt.id = 'r';
	chainshirt.cost = 50;
	hidearmor.startarmor = 12;
	hidearmor.type = 2;
	strcpy_s(hidearmor.name, 11, "Hide armor");
	hidearmor.id = 't';
	hidearmor.cost = 10;

	studdedleather.startarmor = 12;
	studdedleather.type = 1;
	strcpy_s(studdedleather.name, 16, "Studded leather");
	studdedleather.id = 'y';
	studdedleather.cost = 45;
	leatherarmor.startarmor = 11;
	leatherarmor.type = 1;
	strcpy_s(leatherarmor.name, 14, "Leather armor");
	leatherarmor.id = 'u';
	leatherarmor.cost = 10;
	paddedarmor.startarmor = 11;
	paddedarmor.type = 1;
	strcpy_s(paddedarmor.name, 13, "Padded armor");
	paddedarmor.id = 'i';
	paddedarmor.cost = 5;

	agonizingblast.id = '1';
	strcpy_s(agonizingblast.name, 16, "Agonizing blast");
	agonizingblast.description = (char*)malloc(90);
	strcpy_s(agonizingblast.description, 90, "When you cast eldritch blast, add your Charisma modifier\nto the damage it deals on a hit.");
	armorofshadows.id = '2';
	strcpy_s(armorofshadows.name, 17, "Armor of shadows");
	armorofshadows.description = (char*)malloc(100);
	strcpy_s(armorofshadows.description, 100, "You can cast mage armor on yourself at will,\nwithout expending a spell slot or material components.");
	beguilinginfluence.id = '3';
	strcpy_s(beguilinginfluence.name, 20, "Beguiling influence");
	beguilinginfluence.description = (char*)malloc(61);
	strcpy_s(beguilinginfluence.description, 61, "You gain proficiency in the Deception and Persuasion skills.");

	blade.id = '3';
	strcpy_s(blade.name, 18, "Pact of the Blade");
	blade.description = (char*)malloc(1174);
	strcpy_s(blade.description, 1176, "You can use your action to create a pact weapon in your empty hand.\nYou can choose the form that this melee weapon takes each time you create it.\nYou are proficient with it while you wield it.This weapon counts as magical for the purpose of\n overcoming resistanceand immunity to nonmagical attacksand damage.\nYour pact weapon disappears if it is more than 5 feet away\nfrom you for 1 minute or more.It also disappears if you use\nthis feature again, if you dismiss the weapon(no action required), or if you die.\nYou can transform one magic weapon into your pact weapon by\nperforming a special ritual while you hold the weapon.\nYou perform the ritual over the course of 1 hour, which can be done during a short rest.\nYou can then dismiss the weapon, shunting it into an extradimensional\nspace, and it appears whenever you create your pact weapon thereafter.\nYou can't affect an artifact or a sentient weapon in this way.\nThe weapon ceases being your pact weapon if you die, if you perform the 1-hour ritual on a different weapon,\nor if you use a 1-hour ritual to break your bond to it. The weapon appears at your feet if it is in the\nextradimensional space when the bond breaks.");
	chain.id = '4';
	strcpy_s(chain.name, 18, "Pact of the Chain");
	chain.description = (char*)malloc(443);
	strcpy_s(chain.description, 443, "You learn the find familiar spell and can cast it as a ritual. The spell doesn't count against your number of spells known.\nWhen you cast the spell, you can choose one of the normal forms for your\nfamiliar or one of the following special forms :\nimp, pseudodragon, quasit, or sprite.\nAdditionally, when you take the Attack action, you can forgo one of your\nown attacks to allow your familiar\nto use its reaction to make one attack of its own.");
	tome.description = '3';
	strcpy_s(tome.name, 17, "Pact of the Tome");
	tome.description = (char*)malloc(644);
	strcpy_s(tome.description, 644, "Your patron gives you a grimoire called a Book of Shadows. When you gain this feature,\nchoose three cantrips from any class's spell list. The cantrips do\nnot need to be from the same spell list.\nWhile the book is on your person, you can cast those cantrips at will. They don't count against\nyour number of cantrips known. Any cantrip you cast with this feature is considered a warlock cantrip for you.\nIf you lose your Book of Shadows, you can perform a 1-hour ceremony to receive a replacement from your patron.\nThis ceremony can be performed during a short or long rest, and it\ndestroys the previous book. The book turns to ash when you die.");

	list.pactbladeweaponlist[0] = '1';
	list.pactbladeweaponlist[1] = '2';

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
	Rataction.damage1 = roll(1, d4, Ratstat.modDex);
	Rataction.accur1 = roll(1, d20, Rat.proficiency + Ratstat.modDex);

	Sword.armorclass = 15;
	Sword.hits = 30;
	Sword.proficiency = 3;
	Sword.level = 1;
	Swordstat.Strength = 15;
	Swordstat.Dexterity = 16;
	Swordstat.Constitution = 12;
	Swordstat.Intellect = 15;
	Swordstat.Wisdom = 10;
	Swordstat.Charisma = 15;
	modif();
	strcpy_s(Sword.name, 20, magicalshortsword.name);
	strcpy_s(Swordaction.action1, 8, "Strike");
	Swordaction.damage1 = roll(1, d6, Swordstat.modDex);
	Swordaction.accur1 = roll(1, d20, Sword.proficiency + Swordstat.modDex);

	Skeleton.armorclass = 13;
	Skeleton.hits = 13;
	Skeleton.proficiency = 2;
	Skeleton.level = 0;
	Skeletonstat.Strength = 10;
	Skeletonstat.Dexterity = 14;
	Skeletonstat.Constitution = 15;
	Skeletonstat.Intellect = 6;
	Skeletonstat.Wisdom = 8;
	Skeletonstat.Charisma = 5;
	modif();
	strcpy_s(Skeleton.name, 9, "Skeleton");
	strcpy_s(Skeletonaction.action1, 12, "Short sword");
	Skeletonaction.damage1 = roll(1, d6, Skeletonstat.modDex);
	Skeletonaction.accur1 = roll(1, d20, Skeleton.proficiency + Skeletonstat.modDex);

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
	Goblinaction.damage1 = roll(1, d6, Goblinstat.modDex);
	Goblinaction.accur1 = roll(1, d20, Goblin.proficiency + Goblinstat.modDex);

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
	Banditaction.damage1 = roll(1, d6, Banditstat.modDex);
	Banditaction.accur1 = roll(1, d20, Bandit.proficiency + Banditstat.modDex);

	Dragon.armorclass = 16;
	Dragon.hits = 32;
	Dragon.proficiency = 2;
	Dragon.level = 1;
	Dragonstat.Strength = 14;
	Dragonstat.Dexterity = 10;
	Dragonstat.Constitution = 14;
	Dragonstat.Intellect = 5;
	Dragonstat.Wisdom = 10;
	Dragonstat.Charisma = 11;
	modif();
	strcpy_s(Dragon.name, 7, "Dragon");
	strcpy_s(Dragonaction.action1, 5, "Bite");
	Dragonaction.damage1 = roll(1, d10, Dragonstat.modStr) + roll(1, d4, 0);
	Dragonaction.accur1 = roll(1, d20, Dragon.proficiency + Dragonstat.modStr);
	strcpy_s(Dragonaction.action2, 12, "Cold breath");
	Dragonaction.damage2 = roll(3, d8, 0);
	Dragonaction.accur2 = 12;

	Imp.armorclass = 13;
	Imp.hits = 10;
	Imp.proficiency = 2;
	Imp.level = 1;
	Impstat.Strength = 6;
	Impstat.Dexterity = 17;
	Impstat.Constitution = 13;
	Impstat.Intellect = 11;
	Impstat.Wisdom = 12;
	Impstat.Charisma = 14;
	modif();
	strcpy_s(Imp.name, 4, "Imp");
	strcpy_s(Impaction.action1, 6, "Sting");
	Impaction.damage1 = roll(1, d4, Impstat.modDex);
	Impaction.accur1 = roll(1, d20, Imp.proficiency + Impstat.modDex);
	strcpy_s(Impaction.action2, 13, "Invisibility");
	Impaction.damage2 = roll(3, d6, 0);
	Impaction.accur2 = 11;

}
void modif() {
	familiarstat.modStr = (familiarstat.Strength - 10) / 2;
	familiarstat.modDex = (familiarstat.Dexterity - 10) / 2;
	familiarstat.modConst = (familiarstat.Constitution - 10) / 2;
	familiarstat.modInt = (familiarstat.Intellect - 10) / 2;
	familiarstat.modWis = (familiarstat.Wisdom - 10) / 2;
	familiarstat.modCha = (familiarstat.Charisma - 10) / 2;

	Impstat.modStr = (Impstat.Strength - 10) / 2;
	Impstat.modDex = (Impstat.Dexterity - 10) / 2;
	Impstat.modConst = (Impstat.Constitution - 10) / 2;
	Impstat.modInt = (Impstat.Intellect - 10) / 2;
	Impstat.modWis = (Impstat.Wisdom - 10) / 2;
	Impstat.modCha = (Impstat.Charisma - 10) / 2;

	Dragonstat.modStr = (Dragonstat.Strength - 10) / 2;
	Dragonstat.modDex = (Dragonstat.Dexterity - 10) / 2;
	Dragonstat.modConst = (Dragonstat.Constitution - 10) / 2;
	Dragonstat.modInt = (Dragonstat.Intellect - 10) / 2;
	Dragonstat.modWis = (Dragonstat.Wisdom - 10) / 2;
	Dragonstat.modCha = (Dragonstat.Charisma - 10) / 2;

	Swordstat.modStr = (Swordstat.Strength - 10) / 2;
	Swordstat.modDex = (Swordstat.Dexterity - 10) / 2;
	Swordstat.modConst = (Swordstat.Constitution - 10) / 2;
	Swordstat.modInt = (Swordstat.Intellect - 10) / 2;
	Swordstat.modWis = (Swordstat.Wisdom - 10) / 2;
	Swordstat.modCha = (Swordstat.Charisma - 10) / 2;

	Skeletonstat.modStr = (Skeletonstat.Strength - 10) / 2;
	Skeletonstat.modDex = (Skeletonstat.Dexterity - 10) / 2;
	Skeletonstat.modConst = (Skeletonstat.Constitution - 10) / 2;
	Skeletonstat.modInt = (Skeletonstat.Intellect - 10) / 2;
	Skeletonstat.modWis = (Skeletonstat.Wisdom - 10) / 2;
	Skeletonstat.modCha = (Skeletonstat.Charisma - 10) / 2;

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
	int lootgold = (roll(2, 10, 0)) * monster.level;
	int lootsilver = roll(2, 10, 0) * (monster.level + 1);
	int lootcopper = roll(2, 10, 0) * (monster.level + 2);
	int xp = monster.level * 150 + 50;
	if (monster.level == 0) {
		xp = 150;
	}
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
	Sleep(5000);
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
		warlock2();
		stages();
	}
	if (hero.xp >= 900 && hero.level == 2) {
		for (int i = 0; i < 5; i++) {
			gotoxy(i, 6);
			printf_s(".");
		}
		hero.level = 3;
		gotoxy(3, 8);
		printf_s("Congratulations! Your level is %d", hero.level);
		warlock3();
		stages();
	}
}
void warlock2() {
	system("cls");
	gotoxy(50, 5);
	printf_s("Your patron %s is pleased with your success and bestows a particle of his ancient knowledge", hero.archetypename);
	gotoxy(50, 6);
	printf_s("Choose two Eldritch invocations:");
	gotoxy(50, 8);
	int j = 9;
	printf_s("(1)%s", agonizingblast.name);
	gotoxy(55, j);
	for (int i = 0; i < strlen(agonizingblast.description); i++) {
		if (agonizingblast.description[i] == '\n') {
			j++;
			i++;
			gotoxy(55, j);
		}
		printf_s("%c", agonizingblast.description[i]);
	}
	j = 12;
	gotoxy(50, 11);
	printf_s("(2)%s", armorofshadows.name);
	gotoxy(55, j);
	for (int i = 0; i < strlen(armorofshadows.description); i++) {
		if (armorofshadows.description[i] == '\n') {
			j++;
			i++;
			gotoxy(55, j);
		}
		printf_s("%c", armorofshadows.description[i]);
	}
	j = 15;
	gotoxy(50, 14);
	printf_s("(3)%s", beguilinginfluence.name);
	gotoxy(55, j);
	for (int i = 0; i < strlen(beguilinginfluence.description); i++) {
		if (beguilinginfluence.description[i] == '\n') {
			j++;
			i++;
			gotoxy(55, j);
		}
		printf_s("%c", beguilinginfluence.description[i]);
	}
	char s = '0';
	int inv = 0;
	while (inv != 2) {
		s = _getch();
		switch (s) {
		case '1': {
			warlock.eldritchinvocations[0] = agonizingblast.id;
			inv++;
			eldritchblast.mods += hero.modCha;
			gotoxy(48, 8);
			printf_s(">");
			break;
		}
		case '2': {
			warlock.eldritchinvocations[1] = armorofshadows.id;
			inv++;
			for (int i = 0; i < 20; i++) {
				if (hero.spelllist[i] == '\0') {
					hero.spelllist[i] = magearmor.id;
					break;
				}
			}
			gotoxy(48, 11);
			printf_s(">");
			break;
		}
		case '3': {
			warlock.eldritchinvocations[2] = beguilinginfluence.id;
			inv++;
			hero.prdeception = 1;
			hero.prpersusassion = 1;
			gotoxy(48, 14);
			printf_s(">");
			break;
		}
		}
	}
	Sleep(1000);
	hero.hits += 5 + hero.modConst;
	hero.tekhits = hero.hits;
	hero.spellslots1 = 2;
	stages();
}
void warlock3() {
	system("cls");
	gotoxy(20, 5);
	printf_s("For faithful service, the patron gives you a gift - a symbol of your contract.");
	gotoxy(20, 6);
	printf_s("Choose one:");
	gotoxy(20, 7);
	printf_s("(1)%s", blade.name);
	int j = 8;
	gotoxy(20, j);
	for (int i = 0; i < strlen(blade.description); i++) {
		if (blade.description[i] == '\n') {
			j++;
			i++;
			gotoxy(20, j);
		}
		printf_s("%c", blade.description[i]);
	}
	j++;
	gotoxy(20, j);
	printf_s("(2)%s", chain.name);
	j++;
	gotoxy(20, j);
	for (int i = 0; i < strlen(chain.description); i++) {
		if (chain.description[i] == '\n') {
			j++;
			i++;
			gotoxy(20, j);
		}
		printf_s("%c", chain.description[i]);
	}
	j++;
	gotoxy(20, j);
	printf_s("(3)%s", tome.name);
	j++;
	gotoxy(20, j);

	for (int i = 0; i < strlen(tome.description); i++) {
		if (tome.description[i] == '\n') {
			j++;
			i++;
			gotoxy(20, j);
		}
		printf_s("%c", tome.description[i]);
	}
	char choose = '0';
	while (choose != '1' && choose != '2' && choose != '3') {
		switch (choose) {
		case '1': {
			hero.ablist[1] = '3';
			break;
		}
		case '2': {
			hero.ablist[1] = '4';
			for (int i = 0; i < 20; i++) {
				if (hero.spelllist[i] == '\0') {
					hero.spelllist[i] = '4';
					break;
				}
			}
			break;
		}
		case '3': {

			break;
		}
		}

		warlock.pactboon = choose;
	}
	hero.hits += 5 + hero.modConst;
	hero.tekhits = hero.hits;
	hero.spellslots1 = 0;
	hero.spellslots2 = 2;
	stages();
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
int roll(int amount, int dice, int mods) {
	int roll = 0;
	for (int i = 0; i < amount; i++) {
		roll += rand() % dice + 1;
	}
	return (roll + mods);
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
void condition(int* attack) {
	switch (monster.condition) {
	case 1: {//Frightend//disadvantage
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
	case 3: {//advantage
		int a = monsteraction.accur1;
		int b = monsteraction.accur1;
		if (a < b) {
			*attack = b;
		}
		else {
			*attack = a;
		}
		break;
	}
	}
}
void equips(int id) {
	//0-head 1-chest 2-bracers 3-lefthand 4-righthand 5-cape 6-feet 7-rings
	if (id == '5') {
		if (hero.equiplist[3] != '0') {
			if (hero.equiplist[3] == '5') {
				hero.gold += shield.cost;
			}
		}
	}
	if (id != '5') {
		if (hero.equiplist[1] != '0') {
			switch (hero.equiplist[1]) {
			case '6': {
				hero.gold += platearmor.cost;
				break;
			}
			case '7': {
				hero.gold += splintarmor.cost;
				break;
			}
			case '8': {
				hero.gold += chainmail.cost;
				break;
			}
			case '9': {
				hero.gold += ringmailarmor.cost;
				break;
			}
			case 'q': {
				hero.gold += halfplatearmor.cost;
				break;
			}
			case 'w': {
				hero.gold += breastplate.cost;
				break;
			}
			case 'e': {
				hero.gold += scalemailarmor.cost;
				break;
			}
			case 'r': {
				hero.gold += chainshirt.cost;
				break;
			}
			case 't': {
				hero.gold += hidearmor.cost;
				break;
			}
			case 'y': {
				hero.gold += studdedleather.cost;
				break;
			}
			case 'u': {
				hero.gold += leatherarmor.cost;
				break;
			}
			case 'i': {
				hero.gold += paddedarmor.cost;
				break;
			}
			}
		}
	}
	switch (id) {
	case '5': {
		hero.equiplist[3] = shield.id;
		strcpy_s(hero.equiplefthand, 7, shield.name);
		hero.armormod += shield.startarmor;
		hero.gold -= shield.cost;
		break;
	}
	case '6': {
		hero.equiplist[1] = platearmor.id;
		strcpy_s(hero.equipchest, 12, platearmor.name);
		hero.armorclass = platearmor.startarmor + hero.armormod;
		hero.gold -= platearmor.cost;
		break;
	}
	case '7': {
		hero.equiplist[1] = splintarmor.id;
		strcpy_s(hero.equipchest, 13, splintarmor.name);
		hero.armorclass = splintarmor.startarmor + hero.armormod;
		hero.gold -= splintarmor.cost;
		break;
	}
	case '8': {
		hero.equiplist[1] = chainmail.id;
		strcpy_s(hero.equipchest, 11, chainmail.name);
		hero.armorclass = chainmail.startarmor + hero.armormod;
		hero.gold -= chainmail.cost;
		break;
	}
	case '9': {
		hero.equiplist[1] = ringmailarmor.id;
		strcpy_s(hero.equipchest, 16, ringmailarmor.name);
		hero.armorclass = ringmailarmor.startarmor + hero.armormod;
		hero.gold -= ringmailarmor.cost;
		break;
	}
	case 'q': {
		hero.equiplist[1] = halfplatearmor.id;
		strcpy_s(hero.equipchest, 17, halfplatearmor.name);
		if (hero.modDex < 3)
			hero.armorclass = halfplatearmor.startarmor + hero.armormod + hero.modDex;
		else {
			hero.armorclass = halfplatearmor.startarmor + hero.armormod;
		}
		hero.gold -= halfplatearmor.cost;
		break;
	}
	case 'w': {
		hero.equiplist[1] = breastplate.id;
		strcpy_s(hero.equipchest, 13, breastplate.name);
		if (hero.modDex < 3)
			hero.armorclass = breastplate.startarmor + hero.armormod + hero.modDex;
		else {
			hero.armorclass = breastplate.startarmor + hero.armormod;
		}
		hero.gold -= breastplate.cost;
		break;
	}
	case 'e': {
		hero.equiplist[1] = scalemailarmor.id;
		strcpy_s(hero.equipchest, 17, scalemailarmor.name);
		if (hero.modDex < 3)
			hero.armorclass = scalemailarmor.startarmor + hero.armormod + hero.modDex;
		else {
			hero.armorclass = scalemailarmor.startarmor + hero.armormod;
		}
		hero.gold -= scalemailarmor.cost;
		break;
	}
	case 'r': {
		hero.equiplist[1] = chainshirt.id;
		strcpy_s(hero.equipchest, 12, chainshirt.name);
		if (hero.modDex < 3)
			hero.armorclass = chainshirt.startarmor + hero.armormod + hero.modDex;
		else {
			hero.armorclass = scalemailarmor.startarmor + hero.armormod;
		}
		hero.gold -= scalemailarmor.cost;
		break;
	}
	case 't': {
		hero.equiplist[1] = hidearmor.id;
		strcpy_s(hero.equipchest, 11, hidearmor.name);
		if (hero.modDex < 3)
			hero.armorclass = hidearmor.startarmor + hero.armormod + hero.modDex;
		else {
			hero.armorclass = hidearmor.startarmor + hero.armormod;
		}
		hero.gold -= hidearmor.cost;
		break;
	}
	case 'y': {
		hero.equiplist[1] = studdedleather.id;
		strcpy_s(hero.equipchest, 16, studdedleather.name);
		hero.armorclass = studdedleather.startarmor + hero.armormod + hero.modDex;
		hero.gold -= studdedleather.cost;
		break;
	}
	case 'u': {
		hero.equiplist[1] = leatherarmor.id;
		strcpy_s(hero.equipchest, 14, leatherarmor.name);
		hero.armorclass = leatherarmor.startarmor + hero.armormod + hero.modDex;
		hero.gold -= leatherarmor.cost;
		break;
	}
	case 'i': {
		hero.equiplist[1] = paddedarmor.id;
		strcpy_s(hero.equipchest, 13, paddedarmor.name);
		hero.armorclass = paddedarmor.startarmor + hero.armormod + hero.modDex;
		hero.gold -= paddedarmor.cost;
		break;
	}
	}
}
void showequip() {
	system("cls");
	gotoxy(60, 5);
	printf_s("Head [%s]", hero.equphead);
	gotoxy(60, 7);
	printf_s("Chest [%s]", hero.equipchest);
	gotoxy(60, 9);
	printf_s("Bracers [%s]", hero.equipbracers);
	gotoxy(60, 11);
	printf_s("Left hand [%s]", hero.equiplefthand);
	gotoxy(60, 13);
	printf_s("Right hand [");
	for (int i = 0; i < strlen(hero.weaponlist); i++) {
		switch (hero.weaponlist[i]) {
		case '1': {
			printf_s("%s ", dagger.name);
			break;
		}
		case '2': {
			printf_s("%s ", quarterstaff.name);
			break;
		}
		case '3': {
			printf_s("%s ", magicalshortsword.name);
			break;
		}
		case '4': {
			printf_s("%s ", lightcrossbow.name);
			break;
		}
		}
	}
	printf_s("]");
	gotoxy(60, 15);
	printf_s("Cape [%s]", hero.equipcape);
	gotoxy(60, 17);
	printf_s("Feet [%s]", hero.equipcape);
	gotoxy(60, 19);
	printf_s("Rings [%s]", hero.equiprings);

}
void weapons(int z, int* damage, int* attack, char* damagetype) {
	switch (z) {
	case 1: {
		strcpy_s(damagetype, 9, "piercing");
		if (hero.modDex > hero.modStr) {
			*damage = dagger.damage + hero.modDex;
			*attack = roll(1, 20, hero.modDex + hero.proficiency);
			if (hero.advantage == 1) {
				int a = roll(1, 20, hero.modDex + hero.proficiency);
				int b = roll(1, 20, hero.modDex + hero.proficiency);
				if (a < b) {
					*attack = b;
				}
				else {
					*attack = a;
				}
			}
			if (*attack == 20 + hero.modDex + hero.proficiency) {
				*damage = dagger.damage + dagger.damage + hero.modDex;
				hero.crit = 1;
			}
		}
		else {
			*damage = dagger.damage + hero.modStr;
			*attack = roll(1, 20, hero.modStr + hero.proficiency);
			if (hero.advantage == 1) {
				int a = roll(1, 20, hero.modDex + hero.proficiency);
				int b = roll(1, 20, hero.modDex + hero.proficiency);
				if (a < b) {
					*attack = b;
				}
				else {
					*attack = a;
				}
			}
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
		*attack = roll(1, 20, hero.modStr + hero.proficiency);
		if (hero.advantage == 1) {
			int a = roll(1, 20, hero.modStr + hero.proficiency);
			int b = roll(1, 20, hero.modStr + hero.proficiency);
			if (a < b) {
				*attack = b;
			}
			else {
				*attack = a;
			}
		}
		if (*attack == 20 + hero.modStr + hero.proficiency) {
			*damage = quarterstaff.damage + quarterstaff.damage + hero.modStr;
			hero.crit = 1;
		}
		break;
	}
	case 3: {
		strcpy_s(damagetype, 9, "piercing");
		if (hero.modDex > hero.modStr) {
			*damage = magicalshortsword.damage + hero.modDex;
			*attack = roll(1, 20, hero.modDex + hero.proficiency + 1);
			if (hero.advantage == 1) {
				int a = roll(1, 20, hero.modDex + hero.proficiency + 1);
				int b = roll(1, 20, hero.modDex + hero.proficiency + 1);
				if (a < b) {
					*attack = b;
				}
				else {
					*attack = a;
				}
			}
			if (*attack == 20 + hero.modDex + hero.proficiency + 1) {
				*damage = magicalshortsword.damage + magicalshortsword.damage + hero.modDex - 1;
				hero.crit = 1;
			}
		}
		else {
			*damage = magicalshortsword.damage + hero.modStr;
			*attack = roll(1, 20, hero.modStr + hero.proficiency + 1);
			if (hero.advantage == 1) {
				int a = roll(1, 20, hero.modStr + hero.proficiency + 1);
				int b = roll(1, 20, hero.modStr + hero.proficiency + 1);
				if (a < b) {
					*attack = b;
				}
				else {
					*attack = a;
				}
			}
			if (*attack == 20 + hero.modStr + hero.proficiency + 1) {
				*damage = magicalshortsword.damage + magicalshortsword.damage + hero.modStr - 1;
				hero.crit = 1;
			}
		}

		break;
	}
	case 4: {
		strcpy_s(damagetype, 9, "piercing");
		*damage = lightcrossbow.damage + hero.modDex;
		*attack = roll(1, 20, hero.modDex + hero.proficiency);
		if (hero.advantage == 1) {
			int a = roll(1, 20, hero.modDex + hero.proficiency);
			int b = roll(1, 20, hero.modDex + hero.proficiency);
			if (a < b) {
				*attack = b;
			}
			else {
				*attack = a;
			}
		}
		if (*attack == 20 + hero.modDex + hero.proficiency) {
			*damage = lightcrossbow.damage + lightcrossbow.damage + hero.modDex;
			hero.crit = 1;
		}
		break;
	}
	}
}
int abilitydesc(int z, int* damage, int* attack, int* characteristic) {
	for (int j = 24; j < 36; j++) {
		gotoxy(3, j);
		printf_s("|");
		gotoxy(113, j);
		printf_s("|");
	}
	for (int i = 4; i < 113; i++) {
		gotoxy(i, 23);
		printf_s("_");
		gotoxy(i, 35);
		printf_s("_");
	}
	switch (hero.ablist[z]) {
	case '1': {
		*characteristic = 5;
		hero.spelldc = hero.modCha + hero.proficiency + 8;
		int j = 25;
		int f = 6;
		for (int i = 3; i < 310; i++) {
			if (feyancestry.description[i - 3] == '\n') {
				j++;
				f = 6;
				i++;
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
		int j = 25;
		int f = 6;
		for (int i = 3; i < 177; i++) {
			if (darkonesblessing.description[i - 3] == '\n') {
				j++;
				f = 6;
				i++;
			}
			gotoxy(f, j);
			printf_s("%c", darkonesblessing.description[i - 3]);
			f++;

		}
		return 0;
		Sleep(5000);
		break;
	}
	case '3': {
		int j = 25;
		int f = 6;
		for (int i = 3; i < strlen(summonblade.description); i++) {
			if (summonblade.description[i - 3] == '\n') {
				j++;
				f = 6;
				i++;
			}
			gotoxy(f, j);
			printf_s("%c", summonblade.description[i - 3]);
			f++;

		}
		gotoxy(3, 7);
		printf_s("Choose the weapon:");
		j = 8;
		for (int i = 0; i < 2; i++) {
			gotoxy(3, j);
			printf_s("(%d) ", i + 1);
			switch (list.pactbladeweaponlist[i]) {
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
		char choose = '0';
		while (choose != '1' && choose != '2') {
			choose = _getch();
			switch (choose) {
			case '1': {
				for (int i = 0; i < strlen(hero.weaponlist); i++) {
					if (hero.weaponlist[i] != '0') {
						hero.weaponlist[i] = '1';
						break;
					}
				}
				break;
			}
			case '2': {
				for (int i = 0; i < strlen(hero.weaponlist); i++) {
					if (hero.weaponlist[i] != '0') {
						hero.weaponlist[i] = '2';
						break;
					}
				}
				break;
			}
			}
		}
		clearchat();
		gotoxy(3, 3);
		printf_s("A weapon materialized in your hand");
		Sleep(1000);
		gotoxy(3, 3);
		printf_s("                                  ");
		return 0;
		Sleep(5000);
		break;
	}
	case '4': {
		hero.spelldc = hero.modCha + hero.proficiency + 8;
		*attack = Impaction.accur1;
		*damage = Impaction.damage1;

		if (roll(1, 20, monster.modCon) < Impaction.accur2) {
			*damage += Impaction.damage2;
		}
		return 1;
		Sleep(2000);
		break;
	}
	}
}
int spell(int* slot, int* attack, int z, int* damage, char* typeofdamage, int* characteristic) {
	for (int j = 24; j < 36; j++) {
		gotoxy(3, j);
		printf_s("|");
		gotoxy(103, j);
		printf_s("|");
	}
	for (int i = 4; i < 103; i++) {
		gotoxy(i, 23);
		printf_s("_");
		gotoxy(i, 35);
		printf_s("_");
	}
	switch (hero.spelllist[z]) {
	case '1': {
		*attack = roll(1, 20, hero.modCha + hero.proficiency);
		if (hero.advantage == 1) {
			int a = roll(1, 20, hero.modCha + hero.proficiency);
			int b = roll(1, 20, hero.modCha + hero.proficiency);
			if (a < b) {
				*attack = b;
			}
			else {
				*attack = a;
			}
		}
		*damage = roll(eldritchblast.amount, eldritchblast.damage, eldritchblast.mode);
		if (*attack == 20 + hero.modCha + hero.proficiency) {
			roll(eldritchblast.amount * 2, eldritchblast.damage, eldritchblast.mode);
			hero.crit = 1;
		}
		strcpy_s(typeofdamage, 6, eldritchblast.typeofdamage);
		int j = 25;
		int f = 6;
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
	case '2': {
		hero.armorclass = 13 + hero.modDex + hero.armormod;
		strcpy_s(typeofdamage, 1, magearmor.typeofdamage);
		int j = 25;
		int f = 6;
		for (int i = 3; i < 263; i++) {
			if (magearmor.description[i - 3] == '\n') {
				j++;
				f = 6;
			}
			gotoxy(f, j);
			printf_s("%c", magearmor.description[i - 3]);
			f++;

		}
		return 0;
		Sleep(2000);
		break;
	}
	case '3': {
		hero.condition = 3;
		*characteristic = 2;
		*slot = 1;
		strcpy_s(typeofdamage, 1, faeriefire.typeofdamage);
		int j = 25;
		int f = 6;
		for (int i = 3; i < 471; i++) {
			if (faeriefire.description[i - 3] == '\n') {
				j++;
				f = 6;
			}
			gotoxy(f, j);
			printf_s("%c", faeriefire.description[i - 3]);
			f++;

		}
		return 2;
		Sleep(2000);
		break;
	}
	case '4': {

		int j = 25;
		int f = 6;
		for (int i = 3; i < strlen(findfamiliar.description); i++) {
			if (findfamiliar.description[i - 3] == '\n') {
				j++;
				f = 6;
			}
			gotoxy(f, j);
			printf_s("%c", findfamiliar.description[i - 3]);
			f++;

		}
		return 0;
		Sleep(2000);
		break;
	}
	}

}
int item(int z, int* damage, int* attack, char* damagetype) {
	for (int j = 24; j < 36; j++) {
		gotoxy(3, j);
		printf_s("|");
		gotoxy(103, j);
		printf_s("|");
	}
	for (int i = 4; i < 103; i++) {
		gotoxy(i, 23);
		printf_s("_");
		gotoxy(i, 35);
		printf_s("_");
	}
	switch (hero.itemlist[z]) {
	case '1': {
		strcpy_s(damagetype, 8, healingpotion.typeofdamage);
		int j = 25;
		int f = 6;
		int d = healingpotion.damage;
		*damage = roll(2, d, 2);
		for (int i = 3; i < 39; i++) {
			if (healingpotion.description[i - 3] == '\n') {
				j++;
				f = 6;
			}
			gotoxy(f, j);
			printf_s("%c", healingpotion.description[i - 3]);
			f++;

		}
		return 0;
		Sleep(2000);
		break;
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
				int hitdice = roll(1, hero.hitdice, hero.modConst);

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
				printf_s("A long rest can only be spent in quiet places where you can sleep.");
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
int amountofspells() {
	return hero.level + 1;
}
/*int initiative(int monsters, char ch, char* control) {
	int tracker[20][20];
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			tracker[i][j] = 0;
		}
	}
	tracker[0][0] = rand() % 20 + 1 + hero.modDex;
	tracker[0][1] = rand() % 20 + 1 + monster.modDex;
	if (monsters > 1) {
		tracker[0][2] = rand() % 20 + 1 + monster2.modDex;
	}
	int temp = 0;
	for (int i = 0; i < monsters + 1; i++) {
		for (int sort = 0; sort < monsters; sort++) {
			if (tracker[0][sort] < tracker[0][sort + 1])
				temp = tracker[0][sort + 1];
			tracker[0][sort + 1] = tracker[0][sort];
			tracker[0][sort] = temp;
		}
	}
	if (monsters == 1) {
		if (tracker[0][0] > tracker[0][1]) {
			tracker[2][0] = tracker[0][0];
			tracker[0][0] = 0;
			tracker[1][1] = tracker[0][1];
			tracker[0][1] = 0;
		}
		else {
			tracker[2][1] = tracker[0][1];
			tracker[0][1] = 0;
			tracker[1][0] = tracker[0][0];
			tracker[0][0] = 0;
		}
	}
	if (monsters == 2) {
		if (tracker[0][0] > tracker[0][1]) {
			if (tracker[0][0] > tracker[0][2]) {
				if (tracker[0][1] > tracker[0][2]) {
					tracker[3][0] = tracker[0][0];
					tracker[0][0] = 0;
					tracker[2][1] = tracker[0][1];
					tracker[0][1] = 0;
					tracker[1][2] = tracker[0][2];
					tracker[0][2] = 0;
					//0->1->2
				}
				else {
					tracker[3][0] = tracker[0][0];
					tracker[0][0] = 0;
					tracker[2][2] = tracker[0][2];
					tracker[0][2] = 0;
					tracker[1][1] = tracker[0][1];
					tracker[0][1] = 0;
					//0->2->1
				}
			}
			else {
				if (tracker[0][0] < tracker[0][2]) {
					tracker[3][1] = tracker[0][1];
					tracker[0][1] = 0;
					tracker[2][2] = tracker[0][2];
					tracker[0][2] = 0;
					tracker[1][0] = tracker[0][0];
					tracker[0][0] = 0;
					//1->2->0
				}
			}
		}
		else {
			if (tracker[0][1] > tracker[0][2]) {
				if (tracker[0][0] > tracker[0][2]) {
					tracker[3][1] = tracker[0][1];
					tracker[0][1] = 0;
					tracker[2][0] = tracker[0][0];
					tracker[0][0] = 0;
					tracker[1][2] = tracker[0][2];
					tracker[0][2] = 0;
					//1->0->2
				}
				else {
					tracker[3][1] = tracker[0][1];
					tracker[0][1] = 0;
					tracker[2][2] = tracker[0][2];
					tracker[0][2] = 0;
					tracker[1][0] = tracker[0][0];
					tracker[0][0] = 0;
					//1->2->0
				}
			}
			else {
				if (tracker[0][0] < tracker[0][2]) {
					tracker[3][2] = tracker[0][2];
					tracker[0][2] = 0;
					tracker[2][1] = tracker[0][1];
					tracker[0][1] = 0;
					tracker[1][0] = tracker[0][0];
					tracker[0][0] = 0;
					//2->1->0
				}
			}
		}

	}
	if (fight(tracker, monsters, ch, &control) == 1) {
		return 1;
	}

}
int hero1action(char* control, char ch) {
	gotoxy(135, 21);
	printf_s("Choose enemy (L) or (R)");
	control = _getch();
	gotoxy(135, 21);
	printf_s("                       ");
	if (control == 'l') {

	}
	if (control == 'r') {
		if (hero2action(&control, ch) == 1) {
			return 1;
		}
	}
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
	if (*control == '1') {
		gotoxy(3, 3);
		printf_s("Choose the weapon: (B) to back");
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
			case '4': {
				printf_s("%s", lightcrossbow.name);
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
			Sleep(1000);
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
						if (temphits < 1) {
							temphits = 1;
						}
						printf_s("After death of monster you recieve %d temporary hits", temphits);
						hero.temphits = temphits;
						Sleep(5000);
						break;
					}
					}
				}
				for (int i = 0; i < 180; i++) {
					for (int j = 0; j < 35; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
		}
		else {
			clearchat();
			*control = '0';
		}
	}
	if (*control == '2') {
		gotoxy(3, 3);
		printf_s("Choose the ability: (B) to back");
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
					savingthrow = roll(1, 20, monster.modStr);
					break;
				}
				case 2: {
					savingthrow = roll(1, 20, monster.modDex);
					break;
				}
				case 3: {
					savingthrow = roll(1, 20, monster.modCon);
					break;
				}
				case 4: {
					savingthrow = roll(1, 20, monster.modInt);
					break;
				}
				case 5: {
					savingthrow = roll(1, 20, monster.modWis);
					break;
				}
				case 6: {
					savingthrow = roll(1, 20, monster.modCha);
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
				for (int i = 0; i < 150; i++) {
					for (int j = 0; j < 30; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
			clearchat();
		}
		else {
			clearchat();
			*control = '0';
		}
	}
	if (*control == '3') {
		gotoxy(3, 3);
		printf_s("Choose the spell: (B) to back");
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
			int attack = 0;
			int type = spell(&attack, choose, &damage, &typeofdamage);
			Sleep(3000);
			clearchat();
			int savingthrow;
			if (type == 1) {
				gotoxy(3, j);
				j++;
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
					if (hero.crit == 1) {
						gotoxy(3, 7);
						printf_s("CRIT!!!");
						hero.crit = 0;
						Sleep(2000);
					}
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
						Sleep(1500);
						gotoxy(3, 6);
						int temphits = hero.modCha + hero.level;
						printf_s("After death of monster you recieve %d temporary hits", temphits);
						Sleep(1500);
						hero.temphits = temphits;
						break;
					}
					}
				}
				for (int i = 0; i < 170; i++) {
					for (int j = 0; j < 32; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
		}
		else {
			clearchat();
			*control = '0';
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
			int type = item(choose, &damage, &attack, &typeofdamage);
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
				for (int i = 0; i < 150; i++) {
					for (int j = 0; j < 30; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
		}
		else {
			clearchat();
			*control = '0';
		}
	}
}
int hero2action(char* control, char ch) {
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
	if (*control == '1') {
		gotoxy(3, 3);
		printf_s("Choose the weapon: (B) to back");
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
			case '4': {
				printf_s("%s", lightcrossbow.name);
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
			Sleep(1000);
			if (attack < monster2.armorclass) {
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
				monster2.hits -= damage;
				Sleep(1500);
			}

			clearchat();
			if (monster2.hits < 1) {
				gotoxy(3, 5);
				printf_s("You win!");
				Sleep(1500);
				for (int i = 0; i < strlen(hero.ablist) + 1; i++) {
					switch (hero.ablist[i]) {
					case '2': {
						abilitydesc(0, 0, 6);
						gotoxy(3, 6);
						int temphits = hero.modCha + hero.level;
						if (temphits < 1) {
							temphits = 1;
						}
						printf_s("After death of monster you recieve %d temporary hits", temphits);
						hero.temphits = temphits;
						Sleep(5000);
						break;
					}
					}
				}
				for (int i = 0; i < 180; i++) {
					for (int j = 0; j < 35; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
		}
		else {
			clearchat();
			*control = '0';
		}
	}
	if (*control == '2') {
		gotoxy(3, 3);
		printf_s("Choose the ability: (B) to back");
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
				if (attack < monster2.armorclass) {
					gotoxy(3, j);
					j++;
					printf_s("Failed");
					Sleep(1500);
				}
				else {
					gotoxy(3, j);
					j++;
					printf_s("You deal %d force damage", damage);
					monster2.hits -= damage;
					Sleep(1500);
				}
			}
			if (type == 2) {
				gotoxy(3, j);
				j++;
				switch (characteristic) {
				case 1: {
					savingthrow = roll(1, 20, monster2.modStr);
					break;
				}
				case 2: {
					savingthrow = roll(1, 20, monster2.modDex);
					break;
				}
				case 3: {
					savingthrow = roll(1, 20, monster2.modCon);
					break;
				}
				case 4: {
					savingthrow = roll(1, 20, monster2.modInt);
					break;
				}
				case 5: {
					savingthrow = roll(1, 20, monster2.modWis);
					break;
				}
				case 6: {
					savingthrow = roll(1, 20, monster2.modCha);
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
						monster2.hits -= damage;
					}
					gotoxy(3, j);
					j++;
					switch (hero.mode) {
					case 1: {
						printf_s("The monster is frightend");
						monster2.condition = 1;
						break;
					}
					case 2: {
						printf_s("The monster is charmed");
						monster2.condition = 2;
						break;
					}
					}
					Sleep(1500);
				}
			}
			clearchat();
			if (monster2.hits < 1) {
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
				for (int i = 0; i < 150; i++) {
					for (int j = 0; j < 30; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
			clearchat();
		}
		else {
			clearchat();
			*control = '0';
		}
	}
	if (*control == '3') {
		gotoxy(3, 3);
		printf_s("Choose the spell: (B) to back");
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
			int attack = 0;
			int type = spell(&attack, choose, &damage, &typeofdamage);
			Sleep(3000);
			clearchat();
			int savingthrow;
			if (type == 1) {
				gotoxy(3, j);
				j++;
				printf_s("You try to attack with the spell: %d...", attack);
				Sleep(1500);
				if (attack < monster2.armorclass) {
					gotoxy(3, j);
					j++;
					printf_s("Failed");
					Sleep(1500);
				}
				else {
					gotoxy(3, j);
					j++;
					printf_s("You deal %d %s damage", damage, typeofdamage);
					if (hero.crit == 1) {
						gotoxy(3, 7);
						printf_s("CRIT!!!");
						hero.crit = 0;
						Sleep(2000);
					}
					monster2.hits -= damage;
					Sleep(1500);
				}
			}
			clearchat();
			if (monster2.hits < 1) {
				gotoxy(3, j);
				j++;
				printf_s("You win!");
				Sleep(1500);
				for (int i = 0; i < strlen(hero.ablist) + 1; i++) {
					switch (hero.ablist[i]) {
					case '2': {
						abilitydesc(0, 0, 6);
						Sleep(1500);
						gotoxy(3, 6);
						int temphits = hero.modCha + hero.level;
						printf_s("After death of monster you recieve %d temporary hits", temphits);
						Sleep(1500);
						hero.temphits = temphits;
						break;
					}
					}
				}
				for (int i = 0; i < 170; i++) {
					for (int j = 0; j < 32; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
		}
		else {
			clearchat();
			*control = '0';
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
			int type = item(choose, &damage, &attack, &typeofdamage);
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
			if (monster2.hits < 1) {
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
				for (int i = 0; i < 150; i++) {
					for (int j = 0; j < 30; j++) {
						gotoxy(i, j);
						printf_s(" ");
					}
				}
				loot();
				Sleep(1500);
				return 1;
			}
		}
		else {
			clearchat();
			*control = '0';
		}
	}
}
int mon1action(char* control, char ch) {
	if (monster.hits > 0) {
		if ((*control == '1' || *control == '2' || *control == '3' || *control == '4') && ((ch != 'b') && (*control != 'l') && (*control != 'r'))) {
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
	else {
		return 1;
	}
}
int mon2action(char* control, char ch) {
	if (monster2.hits > 0) {
		if ((*control == '1' || *control == '2' || *control == '3' || *control == '4') && (ch != 'b')) {
			gotoxy(3, 3);
			printf_s("%s turn!", monster2.name);
			Sleep(1500);
			gotoxy(3, 4);
			int attack = monster2action.accur1;
			condition(&attack);
			printf_s("%s trying to Attack: %d...", monster2.name, attack);
			Sleep(1500);
			if (attack < hero.armorclass) {
				gotoxy(3, 5);
				printf_s("Failed");
				Sleep(1500);
			}
			else {
				gotoxy(3, 5);
				int damage = monster2action.damage1;
				printf_s("%s deal %d slashing damage", monster2.name, damage);
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
				printf_s("%s wins!", monster2.name);
				Sleep(1500);
				hero.tekhits = hero.hits;
				return 2;
			}

		}
	}
	else {
		return 1;
	}
}
int fight(int** tracker, int monsters, char ch, char* control) {
	int dead1 = 0;
	int dead2 = 0;
	if (monsters > 1) {
		dead2 = 0;
	}

	while (dead1 + dead2 != 2) {
		for (int i = 3; i > 0; i--) {
			for (int j = 2; j >= 0; j--) {
				if (tracker[i][j] > 0) {
					switch (j) {
					case 0: {
						//hero
						if (hero1action(&control, ch) == 1) {
							return 1;
						}
						break;
					}
					case 1: {
						//mon1
						switch (mon1action(&control, ch)) {
						case 1: {
							dead1 = 1;
							break;
						}
						case 2: {
							return 1;
							break;
						}
						}
						break;
					}
					case 2: {
						//mon2
						switch (mon2action(&control, ch)) {
						case 1: {
							dead2 = 1;
							break;
						}
						case 2: {
							return 1;
							break;
						}
						}
						break;
					}
					}
				}
			}
		}
	}
}
*/
void profinskills() {
	if (hero.pracrobatic == 1)
		hero.acrobatic += hero.proficiency;
	if (hero.pranimalhandling == 1)
		hero.animalhandling += hero.proficiency;
	if (hero.prarcana == 1)
		hero.arcana += hero.proficiency;
	if (hero.prathletics == 1)
		hero.athletics += hero.proficiency;
	if (hero.prdeception == 1)
		hero.deception += hero.proficiency;
	if (hero.prhistory == 1)
		hero.history += hero.proficiency;
	if (hero.prinimidation == 1)
		hero.intimidation += hero.proficiency;
	if (hero.prinsight == 1)
		hero.insight += hero.proficiency;
	if (hero.prinvestigation == 1)
		hero.investigation += hero.proficiency;
	if (hero.prmedicine == 1)
		hero.medicine += hero.proficiency;
	if (hero.prnature == 1)
		hero.nature += hero.proficiency;
	if (hero.prperception == 1)
		hero.perception += hero.proficiency;
	if (hero.prperformance == 1)
		hero.performance += hero.proficiency;
	if (hero.prpersusassion == 1)
		hero.persuassion += hero.proficiency;
	if (hero.prreligion == 1)
		hero.religion += hero.proficiency;
	if (hero.prsaveCha == 1)
		hero.saveCha += hero.proficiency;
	if (hero.prsaveCon == 1)
		hero.saveCon += hero.proficiency;
	if (hero.prsaveDex == 1)
		hero.saveDex += hero.proficiency;
	if (hero.prsaveInt == 1)
		hero.saveInt += hero.proficiency;
	if (hero.prsaveStr == 1)
		hero.saveStr += hero.proficiency;
	if (hero.prsaveWis == 1)
		hero.saveWis += hero.proficiency;
	if (hero.prsleightofhand == 1)
		hero.sleightofhand += hero.proficiency;
	if (hero.prstealth == 1)
		hero.stealth += hero.proficiency;
	if (hero.prsurvival == 1)
		hero.survival += hero.proficiency;
}
void skills() {
	if (hero.class == 1) {
		hero.prsaveWis = 1;
		hero.prsaveCha = 1;
	}
	if (hero.class == 2) {
		hero.prsaveStr = 1;
		hero.prsaveDex = 1;
	}
	hero.saveStr += hero.modStr;
	hero.saveDex += hero.modDex;
	hero.saveCon += hero.modConst;
	hero.saveInt += hero.modInt;
	hero.saveWis += hero.modWis;
	hero.saveCha += hero.modCha;

	hero.acrobatic += hero.modDex;
	hero.animalhandling += hero.modWis;
	hero.arcana += hero.modInt;
	hero.athletics += hero.modStr;
	hero.deception += hero.modCha;
	hero.history += hero.modInt;
	hero.insight += hero.modWis;
	hero.intimidation += hero.modCha;
	hero.investigation += hero.modInt;
	hero.medicine += hero.modWis;
	hero.nature += hero.modInt;
	hero.perception += hero.modWis;
	hero.performance += hero.modCha;
	hero.persuassion += hero.modCha;
	hero.religion += hero.modInt;
	hero.sleightofhand += hero.modDex;
	hero.stealth += hero.modDex;
	hero.survival += hero.modWis;
}
void characterlist() {
	system("cls");
	for (int i = 1; i < 79; i++) {
		gotoxy(i, 3);
		printf_s("_");
		gotoxy(i, 43);
		printf_s("_");
	}
	for (int j = 4; j < 44; j++) {
		gotoxy(0, j);
		printf_s("|");
		gotoxy(79, j);
		printf_s("|");
	}

	for (int i = 81; i < 159; i++) {
		gotoxy(i, 3);
		printf_s("_");
		gotoxy(i, 43);
		printf_s("_");
	}
	for (int j = 4; j < 44; j++) {
		gotoxy(80, j);
		printf_s("|");
		gotoxy(159, j);
		printf_s("|");
	}
	for (int i = 81; i < 159; i++) {
		gotoxy(i, 7);
		printf_s("_");

	}
	gotoxy(110, 2);
	printf_s("Spell list");
	gotoxy(88, 5);
	printf_s("%s", hero.spellcaster);
	gotoxy(110, 5);
	printf_s("+ %d", hero.spellac);
	gotoxy(126, 5);
	printf_s("%d", hero.spelldc);
	gotoxy(82, 6);
	printf_s("Spell characteristic    Spell accuracy    Spell DC");
	gotoxy(84, 8);
	printf_s("Cantrips:");
	int j = 10;
	gotoxy(82, j);
	for (int i = 0; i < 20; i++) {
		gotoxy(82, j);
		if (hero.spelllist[i] == '\0') {
			break;
		}
		switch (hero.spelllist[i]) {
		case '1': {
			printf_s("%s", eldritchblast.name);
			break;
		}
		}
		j++;
	}
	gotoxy(84, 16);
	printf_s("1-st level spells:");
	j = 10;
	gotoxy(82, j);
	for (int i = 0; i < 20; i++) {
		gotoxy(82, j);
		if (hero.spelllist[i] == '\0') {
			break;
		}
		switch (hero.spelllist[i]) {
		case '2': {
			printf_s("%s", magearmor.name);
			break;
		}
		case '3': {
			printf_s("%s", faeriefire.name);
			break;
		}
		case '4': {
			printf_s("%s", findfamiliar.name);
		}
		}
		j++;
	}
	gotoxy(30, 2);
	printf_s("Character list");
	gotoxy(2, 5);
	printf_s("%s", hero.name);
	gotoxy(2, 6);
	printf_s("Hero name");
	gotoxy(42, 5);
	printf_s("%s", hero.classname);
	gotoxy(42, 6);
	printf_s("Class");
	gotoxy(58, 6);
	printf_s("Level");
	gotoxy(59, 5);
	printf_s("%d", hero.level);
	gotoxy(65, 6);
	printf_s("XP: %d", hero.xp);
	gotoxy(50, 5);
	printf_s("%s", hero.archetypename);
	for (int i = 1; i < 79; i++) {
		gotoxy(i, 7);
		printf_s("_");
	}
	for (int j = 8; j < 32; j++) {
		gotoxy(14, j);
		printf_s("|");
	}
	for (int i = 1; i < 14; i++) {
		gotoxy(i, 31);
		printf_s("_");
	}
	gotoxy(38, 9);
	printf_s("Armor Class");
	gotoxy(39, 10);
	printf_s("%d", hero.armorclass);
	gotoxy(38, 11);
	printf_s("Initiative");
	gotoxy(39, 12);
	printf_s("%d", hero.modDex);
	gotoxy(69, 9);
	printf_s("Temp. Hits");
	gotoxy(72, 10);
	printf_s("%d", hero.temphits);
	gotoxy(59, 9);
	printf_s("Hits");
	gotoxy(60, 10);
	printf_s("%d/%d", hero.tekhits, hero.hits);
	gotoxy(59, 11);
	printf_s("Hit dice");
	gotoxy(60, 12);
	printf_s("d%d", hero.hits - hero.modConst);
	gotoxy(2, 8);
	printf_s("Strength");
	gotoxy(2, 9);
	printf_s("%d", hero.Strength);
	gotoxy(2, 10);
	printf_s("%d Mod", hero.modStr);
	gotoxy(2, 12);
	printf_s("Dexterity");
	gotoxy(2, 13);
	printf_s("%d", hero.Dexterity);
	gotoxy(2, 14);
	printf_s("%d Mod", hero.modDex);
	gotoxy(2, 16);
	printf_s("Constitution");
	gotoxy(2, 17);
	printf_s("%d", hero.Constitution);
	gotoxy(2, 18);
	printf_s("%d Mod", hero.modConst);
	gotoxy(2, 20);
	printf_s("Intellect");
	gotoxy(2, 21);
	printf_s("%d", hero.Intellect);
	gotoxy(2, 22);
	printf_s("%d Mod", hero.modInt);
	gotoxy(2, 24);
	printf_s("Wisdom");
	gotoxy(2, 25);
	printf_s("%d", hero.Wisdom);
	gotoxy(2, 26);
	printf_s("%d Mod", hero.modWis);
	gotoxy(2, 28);
	printf_s("Charisma");
	gotoxy(2, 29);
	printf_s("%d", hero.Charisma);
	gotoxy(2, 30);
	printf_s("%d Mod", hero.modCha);
	gotoxy(2, 33);
	printf_s("Gold: %d", hero.gold);
	gotoxy(2, 34);
	printf_s("Silver: %d", hero.silver);
	gotoxy(2, 35);
	printf_s("Copper: %d", hero.copper);
	int i = 18;
	j = 8;
	gotoxy(i, j);
	printf_s("Str save        %d", hero.saveStr);
	j++;
	gotoxy(i, j);
	printf_s("Dex save        %d", hero.saveDex);
	j++;
	gotoxy(i, j);
	printf_s("Con save        %d", hero.saveCon);
	j++;
	gotoxy(i, j);
	printf_s("Int save        %d", hero.saveInt);
	j++;
	gotoxy(i, j);
	printf_s("Wis save        %d", hero.saveWis);
	j++;
	gotoxy(i, j);
	printf_s("Cha save        %d", hero.saveCha);
	j++;
	gotoxy(i, j);
	printf_s("Acrobatics      %d", hero.acrobatic);
	j++;
	gotoxy(i, j);
	printf_s("Animal Handling %d", hero.animalhandling);
	j++;
	gotoxy(i, j);
	printf_s("Arcana          %d", hero.arcana);
	j++;
	gotoxy(i, j);
	printf_s("Athletics       %d", hero.athletics);
	j++;
	gotoxy(i, j);
	printf_s("Deception       %d", hero.deception);
	j++;
	gotoxy(i, j);
	printf_s("History         %d", hero.history);
	j++;
	gotoxy(i, j);
	printf_s("Insight         %d", hero.insight);
	j++;
	gotoxy(i, j);
	printf_s("Intimidation    %d", hero.intimidation);
	j++;
	gotoxy(i, j);
	printf_s("Investigation   %d", hero.investigation);
	j++;
	gotoxy(i, j);
	printf_s("Medicine        %d", hero.medicine);
	j++;
	gotoxy(i, j);
	printf_s("Nature          %d", hero.nature);
	j++;
	gotoxy(i, j);
	printf_s("Perception      %d", hero.perception);
	j++;
	gotoxy(i, j);
	printf_s("Performance     %d", hero.performance);
	j++;
	gotoxy(i, j);
	printf_s("Persuassion     %d", hero.persuassion);
	j++;
	gotoxy(i, j);
	printf_s("Religion        %d", hero.religion);
	j++;
	gotoxy(i, j);
	printf_s("Sleight of Hand %d", hero.sleightofhand);
	j++;
	gotoxy(i, j);
	printf_s("Stealth         %d", hero.stealth);
	j++;
	gotoxy(i, j);
	printf_s("Survival        %d", hero.survival);

	j = 34;
	gotoxy(52, j - 1);
	printf_s("Abilities");
	for (int i = 0; i < strlen(hero.ablist); i++) {
		gotoxy(54, j);
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
	j = 34;
	gotoxy(33, j - 1);
	printf_s("Items");
	for (int i = 0; i < strlen(hero.itemlist); i++) {
		gotoxy(35, j);
		switch (hero.itemlist[i]) {
		case '1': {
			printf_s("%s", healingpotion.name);
			break;
		}
		}
		j++;
	}
	j = 34;
	gotoxy(16, j - 1);
	printf_s("Weapons");
	for (int i = 0; i < strlen(hero.weaponlist); i++) {
		gotoxy(18, j);
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
}