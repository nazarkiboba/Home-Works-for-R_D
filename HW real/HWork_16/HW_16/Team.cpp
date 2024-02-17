#include "Team.h"

Team::Team() : numOfPlayers(0) {}
std::string& Team::getName(){ return teamName;}
bool Team::addPlayer(Player* newPlayer)
{
    const int MAX_COUNT_OF_PLAYERS = 10;
    if (numOfPlayers < MAX_COUNT_OF_PLAYERS)
    {
        players.push_back(newPlayer);
        numOfPlayers++;
        return true;
    }
    else
       return false;    
}
bool Team::removePlayer(Player* playerToRemove)
{
    for (auto it = players.begin(); it != players.end(); ++it)
        if (*it == playerToRemove) {
            players.erase(it);
            numOfPlayers--;
            return true;
        }   
    return false;
}
