#include "Player.h"
#include <iostream>

Player::Player(std::string name, float health, PlayerClass playerClass, Weapon* weapon): name(name), health(health), playerClass(playerClass), weapon(weapon) {}
void Player::setWeapon(Weapon* newWeapon)
{
    weapon = newWeapon;
}
Weapon* Player::getWeapon() const
{
    return weapon;
}
void Player::printPlayerInfo() const 
{
    std::cout << "Name: " << name << ", Health: " << health << ", Class: ";
    switch (playerClass) {
    case PlayerClass::Assault:
        std::cout << "Assault";
        break;
    case PlayerClass::Support:
        std::cout << "Support";
        break;
    case PlayerClass::Sniper:
        std::cout << "Sniper";
        break;
    case PlayerClass::Medic:
        std::cout << "Medic";
        break;
    }
    std::cout << ", Weapon: " << weapon->name << ", Damage: " << weapon->damage << ", Range: " << weapon->range << std::endl;
}
