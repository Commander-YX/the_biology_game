#pragma once
#include <string>
#include <iostream>

class Item {
public:
    std::string description;
};

class Weapon : public Item {
public:
	//Make multiple attacks/defences and/or make the below attributes instead of methods?
	std::string description = "something";

	void attack1();

	void defence();

};

class Potion : public Item {
public:
	int healing;
	float attackBuff;
	std::string ability;
};

class MagicalItem : public Item {
public:

};
