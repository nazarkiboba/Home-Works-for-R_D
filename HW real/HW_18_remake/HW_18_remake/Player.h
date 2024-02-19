#pragma once
#include <string>
#include "Weapon.h"

class Player 
{
    std::string name;
    float health;
    class PlayerClass
    {
    public:
        virtual ~PlayerClass() {}
        virtual float calculateDamage(float baseDamage) const {
            return baseDamage;
        }
    };


    const PlayerClass* playerClass;
    Weapon* weapon;

public:

    float getHealth() const { return health; }

    class Defender : public PlayerClass
    {
    public:
        float calculateDamage(float baseDamage) const override;

    };

    class Attacker : public PlayerClass 
    {
    public:
        float calculateDamage(float baseDamage) const override;
    };

    Player(std::string name, float health, const PlayerClass* playerClass, Weapon* weapon);

    void attack(const Player& target, int distance);
};
