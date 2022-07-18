//
// Created by student on 20.06.2020.
//

#ifndef BLACKJACK_HAND_H
#define BLACKJACK_HAND_H
#include <memory>
#include <vector>
#include "Card.h"
#include "Typedefs.h"
class Hand;

class Hand {
private:
    std::vector<cardPtr> handVector;
    int id;
public:
    Hand(int id);
    virtual ~Hand();
    bool addToHand(const cardPtr& card);
    void clear();
    std::string toString();
};


#endif //BLACKJACK_HAND_H
