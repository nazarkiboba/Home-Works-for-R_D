#pragma once
#include <string>

class Weapon {
private:
    std::string name;
    float damage;
    float effectiveRange;
    std::string damageLevel;

public:
    Weapon(std::string name, float damage, float effectiveRange, std::string damageLevel);

    std::string getName() const;
    float getDamage() const;
    float getEffectiveRange() const;
    std::string getDamageLevel() const;
};
