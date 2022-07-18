    //
// Created by student on 13.06.2020.
//

#ifndef BLACKJACK_TABLE_H
#define BLACKJACK_TABLE_H
#include <vector>
#include <memory>
#include "Player.h"
#include "Typedefs.h"
#include "PlayerManager.h"
#include <string>
#include "Hand.h"

class Table
{
public:
    static void addPoints(playerPtr player, int points);
    static std::string whoWins(playerManPtr playerMan, int numberPlayers);
    static void save(playerManPtr playerMan, int numberPlayers);
    static void load(playerManPtr playerMan);
    static void clearScreen();
    static bool fexist(const char *filename);
    static void setOnPlayers(playerManPtr playerMan,int number);
};
#endif //BLACKJACK_TABLE_H
