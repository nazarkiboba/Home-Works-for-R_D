#pragma once
#include "Weapon.h"
#include <string>

class Player
{
    std::string name;
    float health;
    Weapon* weapon;
public:
    enum class PlayerClass { Assault, Support, Sniper, Medic } playerClass;
    Player(std::string name, float health, PlayerClass playerClass, Weapon* weapon);
    void setWeapon(Weapon* newWeapon);
    Weapon* getWeapon() const;
    void printPlayerInfo() const;
    friend class Team;
};
