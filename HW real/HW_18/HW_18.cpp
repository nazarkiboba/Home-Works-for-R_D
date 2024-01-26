#include <iostream>
#include <cmath>
#include <string>

class Weapon {
public:
    std::string name;
    float damage;
    float effectiveRange;
    std::string damageLevel;

    Weapon(std::string name, float damage, float effectiveRange, std::string damageLevel) :
        name(name), damage(damage), effectiveRange(effectiveRange), damageLevel(damageLevel) {}
};

class Player {
public:
    std::string name;
    float health;
    class PlayerClass {
    public:
        virtual ~PlayerClass() {}
        virtual float calculateDamage(float baseDamage) const {
            return baseDamage;
        }
    };

    class Defender : public PlayerClass {
    public:
        float calculateDamage(float baseDamage) const override {
            return baseDamage - 10.0f;
        }
    };

    class Attacker : public PlayerClass {
    public:
        float calculateDamage(float baseDamage) const override {
            return baseDamage + 10.0f;
        }
    };

    const PlayerClass* playerClass;
    Weapon* weapon;

    Player(std::string name, float health, const PlayerClass* playerClass, Weapon* weapon) :
        name(name), health(health), playerClass(playerClass), weapon(weapon) {}

    void attack(const Player& target, int distance) {
        float actualDamage = weapon->damage;

        if (distance > weapon->effectiveRange) {
            actualDamage *= 0.5f; // Decrease damage if target is beyond effective range
        }

        actualDamage = playerClass->calculateDamage(actualDamage);

        target.health == target.health-actualDamage;

        std::cout << name << " attacked " << target.name << " with weapon " << weapon->name << " with damage " << actualDamage << ", updated health: " << target.health << std::endl;
    }
};

int main() {
    Weapon ak47("AK-47", 50.0f, 200.0f, "High");
    Weapon pistol("Pistol", 30.0f, 100.0f, "Low");

    Player::Defender defender;
    Player::Attacker attacker;

    Player player1("Player 1", 100.0f, &defender, &ak47);
    Player player2("Player 2", 100.0f, &attacker, &pistol);

    player1.attack(player2, 150); // Player 1 attacks Player 2 beyond effective range
    player2.attack(player1, 50);  // Player 2 attacks Player 1 within effective range

    return 0;
}