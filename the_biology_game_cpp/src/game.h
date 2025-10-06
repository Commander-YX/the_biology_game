#pragma once
#include "player.h"
#include <type_traits>
#include <iostream>

class Game {
private:
	Player player;
public:

    Game(const std::string& name) : player(name) {}


	void run() {
		while (true) {
			if (player.isAlive() == false) {
				std::cout << "You died." << std::endl;
				break;
			}
		}
	}

};
