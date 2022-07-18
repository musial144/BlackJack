//
// Created by student on 14.06.2020.
//

#ifndef BLACKJACK_CARDREPOSITORY_H
#define BLACKJACK_CARDREPOSITORY_H

#include "Repository.h"
#include "Card.h"
#include <vector>
#include <memory>
#include <boost/random.hpp>
#include <ctime>
#include <sstream>
#include <string>
#include "Typedefs.h"



class CardRepository : public Repository<Card> {
private:
    std::vector<cardPtr> cardVector;
public:
    CardRepository();
    bool add(cardPtr card) override;
    bool sub(cardPtr card) override;
    void shuffle();
    int getSizeDeck();
    cardPtr popCard();
    std::string getInfo() override;
    cardPtr get(int index);
    int getTopValue();
    void clearDeck();
};


#endif //BLACKJACK_CARDREPOSITORY_H
