#include <iostream>
#include <ostream>
#include <string>
#include "player.h"
#include "item.h"
#include "game.h"
#pragma once

int main() {
	std::string name;
	std::cout << "Adventurer, please enter your name: ";
	std::cin >> name;

	Game game(name);

	Player player(name);
	player.greet();

	Dragon fireDragon;

	//initialize items for player
	
	Potion healingPotion;
	Weapon sword;

	player.weapons.push_back(std::make_unique<Weapon>(sword));

	//Here we must add the initialized objects to the player inventory/class vector

	std::cout << player.weapons.at(0)->description << std::endl;

	return 0;
}


/* Stuff that must be done:
Give player some items to start with.
Give them a description of said items (can be found when the game is paused)
Add the ability to pause the game.

1. Integrate combat
2. Make 3 boss dragons (and sorcerers?)
	- These have different attacks (randomizer, maybe algorithm later down the line)
3. Add portions
4. Add different weapons with different abilities
5. Mystical items (at least the tree of the original game)
6. Keep the evil, smart scientist crabs which work for the sorcerer
7. Make the sea of cnidaria ACTUALLY under water
8. FIgure out how to organise properly into files?
*/


//the old randomizer that controlled the attacks of the dragon
/*
void combat() {
	srand(time(0));
	int randomNum = rand() % 3;

	if (randomNum == 0) {
		dragonBreath(player);
	}
	else if (randomNum == 1) {
		tailWhip(player);
	}
	else if (randomNum == 2) {
		ramAttack(player);
	}
}
*/