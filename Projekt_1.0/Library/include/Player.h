//
// Created by student on 13.06.2020.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

class Player
{
    int id;
    int points;
    bool inGame;
public:
    Player(int id, int points, bool inGame);
    virtual ~Player();
    static char choose(char key);
    bool getInGame();
    int getId();
    int getPoints();
    void setInGame();
    void setOffGame();
    void setPoints(int);


};
#endif //BLACKJACK_PLAYER_H
