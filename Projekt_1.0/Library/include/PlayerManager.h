#ifndef BLACKJACK_PLAYERMANAGER_H
#define BLACKJACK_PLAYERMANAGER_H
#include <memory>
#include "Player.h"
#include "PlayerRepository.h"
#include <string>
#include "Typedefs.h"

class PlayerManager {
private:
    playerRepoPtr currentPlayer;
public:
    PlayerManager(playerRepoPtr repo);
    virtual ~PlayerManager();
    bool addByManager(playerPtr player);
    bool subByManager(playerPtr player);
    void createPlayers();
    std::string getInfo();
    playerPtr findByManager(int number);
    int ifSomebodyPlays();
    int theHighestScore();



};

#endif //BLACKJACK_PLAYERMANAGER_H
