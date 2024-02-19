#include "Player.h"
#include <iostream>

Player::Defender defender;

float Player::Defender::calculateDamage(float baseDamage) const {
    float calculatedDamage = baseDamage - 10.0f;
    return (calculatedDamage < 0.0f) ? 0.0f : calculatedDamage; // Ensure damage is not negative
}

Player::Attacker attacker;

float Player::Attacker::calculateDamage(float baseDamage) const {
    return baseDamage + 10.0f;
}

Player::Player(std::string name, float health, const PlayerClass* playerClass, Weapon* weapon) :
    name(name), health(health), playerClass(playerClass), weapon(weapon) {}

void Player::attack(const Player& target, int distance) 
{
    float actualDamage = weapon->getDamage();

    if (distance > weapon->getEffectiveRange()) {
        actualDamage *= 0.5f;
    }

    actualDamage = playerClass->calculateDamage(actualDamage);

    target->getHealth -= actualDamage;

    std::cout << name << " attacked " << target.name << " with weapon " << weapon->getName()
        << " with damage " << actualDamage << ", updated health: " << target.health << std::endl;
}
