//
// Created by student on 20.06.2020.
//

#ifndef BLACKJACK_PLAYERREPOSITORY_H
#define BLACKJACK_PLAYERREPOSITORY_H
#include "Repository.h"
#include "Player.h"
#include <vector>
#include <memory>
#include <sstream>
#include <string>
#include "Typedefs.h"


class PlayerRepository : public Repository<Player> {
private:
    std::vector<playerPtr> playerVector;
public:
    PlayerRepository();
    bool add(playerPtr player) override;
    bool sub(playerPtr player) override;
    std::string getInfo() override;
    playerPtr find(int number);
    int allPlays();
    int topScore();
};
#endif //BLACKJACK_PLAYERREPOSITORY_H
