//
// Created by student on 14.06.2020.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H


#include <string>

class Card
{
    std::string type;
    std::string suit;
    int value;

public:

    Card(const std::string& type, std::string suit);
    virtual ~Card();
    std::string getSuit() const;
    int getValue() const;
    std::string getCardType() const;
};


#endif //BLACKJACK_CARD_H
