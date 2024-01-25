#include <iostream>
#include <vector>

class Weapon {
public:
    std::string name;
    float damage;
    float range;
};

class Player {
public:
    std::string name;
    float health;
    enum class PlayerClass { Assault, Support, Sniper, Medic } playerClass;
    Weapon* weapon;

    void setWeapon(Weapon* newWeapon) {
        weapon = newWeapon;
    }

    Weapon* getWeapon() const {
        return weapon;
    }

    void printPlayerInfo() {
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
};

class Team {
public:
    std::string teamName;
    int numOfPlayers;
    std::vector<Player*> players;

    bool addPlayer(Player* newPlayer) {
        if (numOfPlayers < 10) {
            players.push_back(newPlayer);
            numOfPlayers++;
            return true;
        }
        else {
            return false;
        }
    }

    bool removePlayer(Player* playerToRemove) {
        for (auto it = players.begin(); it != players.end(); ++it) {
            if (*it == playerToRemove) {
                players.erase(it);
                numOfPlayers--;
                return true;
            }
        }
        return false;
    }
};

class Rectangle {
public:
    float length;
    float height;

    Rectangle() : length(0), height(0) {}

    Rectangle(float l, float h) : length(l), height(h) {}

    float getArea() {
        return length * height;
    }

    float getPerimeter() {
        return 2 * (length + height);
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(5, 10);

    std::cout << "Rectangle 1: Area = " << rect1.getArea() << ", Perimeter = " << rect1.getPerimeter() << std::endl;
    std::cout << "Rectangle 2: Area = " << rect2.getArea() << ", Perimeter = " << rect2.getPerimeter() << std::endl;

    Weapon ak47 = { "AK-47", 50.0f, 200.0f };
    Weapon m4a1 = { "M4A1", 40.0f, 150.0f };

    Player player1 = { "John", 100.0f, Player::PlayerClass::Assault, &ak47 };
    Player player2 = { "Alice", 90.0f, Player::PlayerClass::Medic, &m4a1 };

    player1.printPlayerInfo();
    player2.printPlayerInfo();

    Team team1;
    team1.teamName = "Team 1";

    team1.addPlayer(&player1);
    team1.addPlayer(&player2);

    team1.removePlayer(&player2);

    return 0;
}