//
// Created by student on 15.06.2020.
//

#ifndef BLACKJACK_CARDMANAGER_H
#define BLACKJACK_CARDMANAGER_H
#include <memory>
#include "CardRepository.h"
#include <string>
#include "Typedefs.h"

class CardManager {
private:
    cardRepoPtr currentCard;
public:
    CardManager(cardRepoPtr repo);
    virtual ~CardManager();
    bool addByManager(cardPtr card);
    bool subByManager(cardPtr card);
    void createDeck();
    void shuffleByManager();
    std::string getInfo();
    cardPtr getByManager(int index);
    int getSizeDeckByManager();
    cardPtr popByManager();
    int getValueFromTop();
    void clearDeckByManager();

};


#endif //BLACKJACK_CARDMANAGER_H
