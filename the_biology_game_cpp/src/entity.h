#pragma once

class Entity {
public:
	int hp;

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
