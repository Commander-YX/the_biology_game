#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <memory>
#include "entity.h"
#include "item.h"

class Player : public Entity {
public:
    std::string name;

    std::vector<std::unique_ptr<Potion>> potions;
    std::vector<std::unique_ptr<Weapon>> weapons;
    std::vector<std::unique_ptr<MagicalItem>> magicalItems;

    Player(const std::string& name);

    void greet();

    bool isAlive();
};
