#include "Weapon.h"

Weapon::Weapon(std::string name, float damage, float effectiveRange, std::string damageLevel) :
    name(name), damage(damage), effectiveRange(effectiveRange), damageLevel(damageLevel) {}

std::string Weapon::getName() const {
    return name;
}

float Weapon::getDamage() const {
    return damage;
}

float Weapon::getEffectiveRange() const {
    return effectiveRange;
}

std::string Weapon::getDamageLevel() const {
    return damageLevel;
}
