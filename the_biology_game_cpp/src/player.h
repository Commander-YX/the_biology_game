#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
public:
    std::string name;
    int hp = 100;

    Player(const std::string& name);

    void greet();
};

#endif