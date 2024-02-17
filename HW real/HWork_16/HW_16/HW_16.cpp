#include <iostream>
#include "Rectangle.h"
#include "Player.h"
#include "Team.h"

int main()
{
    Rectangle rect1(20.0f,25.0f);
    Rectangle rect2(5.0f, 10.0f);

    std::cout << "Rectangle 1: Area = " << rect1.getArea() << ", Perimeter = " << rect1.getPerimeter() << std::endl;
    std::cout << "Rectangle 2: Area = " << rect2.getArea() << ", Perimeter = " << rect2.getPerimeter() << std::endl;

    Weapon ak47 = { "AK-47", 50.0f, 200.0f };
    Weapon m4a1 = { "M4A1", 40.0f, 150.0f };
    Player player1("John", 100.0f, Player::PlayerClass::Assault, &ak47);
    Player player2("Alice", 90.0f, Player::PlayerClass::Medic, &m4a1);

    Team team1;
    team1.getName() = "Team 1";

    player1.printPlayerInfo();
    player2.printPlayerInfo();

    team1.addPlayer(&player1);
    team1.addPlayer(&player2);
    team1.removePlayer(&player2);
}

