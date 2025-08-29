#include <iostream>
#include <string>
#include "player.h"

int main()
{
	std::string name;
	std::cout << "Adventurer, please enter your name: ";
	std::cin >> name;

	Player player(name);
	player.greet();

	return 0;
}
