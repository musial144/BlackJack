//
// Created by student on 20.06.2020.
//

#include "PlayerManager.h"
#include "PlayerRepository.h"
#include <iostream>

using namespace std;

bool PlayerManager::addByManager(playerPtr player) {
    currentPlayer->add(player);
    return true;
}
PlayerManager::PlayerManager(playerRepoPtr repo): currentPlayer(repo) {}

void PlayerManager::createPlayers() {
            playerPtr player1(new Player(1,0,false));
            addByManager(player1);
            playerPtr player2(new Player(2,0,false));
            addByManager(player2);
            playerPtr player3(new Player(3,0,false));
            addByManager(player3);
            playerPtr player4(new Player(4,0,false));
            addByManager(player4);
            playerPtr player5(new Player(5,0,false));
            addByManager(player5);
}

bool PlayerManager::subByManager(playerPtr player) {
        return currentPlayer->sub(player);
}

std::string PlayerManager::getInfo() {
    return currentPlayer->getInfo();
}
playerPtr PlayerManager::findByManager(int number)
{
        return currentPlayer->find(number);
}
int PlayerManager::ifSomebodyPlays()
{
    return currentPlayer->allPlays();
}
int PlayerManager::theHighestScore()
{
    return currentPlayer->topScore();
}

PlayerManager::~PlayerManager() = default;
