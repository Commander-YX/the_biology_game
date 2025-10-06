#include <iostream>
#include <string>
#include "player.h"
#pragma once

Player::Player(const std::string& name) : name(name) {}

void Player::greet() {
	std::cout << "Welcome, " << name << "!" << std::endl;
	std::cout << "You are now given some items, using them you must fight the dragon. Yes, really." << std::endl;
}