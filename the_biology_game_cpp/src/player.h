#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <memory>

#pragma once

class GameLoop {
public:

	//insert something that maintains the game/tells the player has died

	bool playerAlive() {
		return 0;
	}

};

class Combat {
public:
	void attack(Player& combatant1, Entity& combatant2) {

		while (combatant1.hp > 0 && combatant2.hp > 0) {
			//Player chooses a weapon and attacks the entity
			//Entity responds with an attack based on the randomizer
			combatant2.takeDamage(10);
			combatant1.takeDamage(10);
			std::cout << "You have successfully defeated" << "(insert name/string)" << "!" << std::endl;
		}
	}
};

class Entity {
public:
	int hp = 100;

	virtual void takeDamage(int amount) {
		hp -= amount;
		if (hp < 0) hp = 0;
	}
};

class Dragon : public Entity {
public:

	//definition of the value of the dragon attacks
	int dragonBreath = -20;
	int tailWhip = -10;
	int ramAttack = -5;

};

class Sorcerer : public Entity {
	//insert stuff
};
 
//Maker it such that the items from the following classes are stored in the vector of player. Also consider making a base class and using inheritance for the items.

class Weapon {
public:

	//Make multiple attacks/defences and/or make the below attributes instead of methods?

	std::string weaponDescription;

	void attack1();

	void defence();

};

class Potion {
public:
	std::string potionDescription;
	int healing;
	float attackBuff;
	std::string ability;
};

class MagicalItem {
public:
	std::string itemDescription;
};


class Player : public Entity {
public:
    std::string name;

    std::vector<std::unique_ptr<Potion>> potions;
    std::vector<std::unique_ptr<Weapon>> weapons;
    std::vector<std::unique_ptr<MagicalItem>> magicalItems;

    Player(const std::string& name);

    void greet();
};



#endif