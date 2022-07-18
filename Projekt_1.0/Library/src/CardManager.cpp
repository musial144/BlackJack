//
// Created by student on 15.06.2020.
//


#include "CardManager.h"
#include "CardRepository.h"

using namespace std;

bool CardManager::addByManager(cardPtr card) {
    currentCard->add(card);
    return true;
}
CardManager::CardManager(cardRepoPtr repo): currentCard(repo) {}

void CardManager::createDeck() {

    string figure[13]= {"Dwojka", "Trojka", "Czworka", "Piatka", "Szostka", "Siodemka", "Osemka", "Dziewiatka", "Dziesiatka", "Walet", "Dama", "Krol", "As"};
    string color[4]= {"Pik", "Trefl", "Kier", "Karo"};
    for(const auto & i : figure)
    {
        for(const auto & j : color)
        {
            cardPtr card(new Card(i, j));
            addByManager(card);
        }
    }
}

bool CardManager::subByManager(cardPtr card) {

    return currentCard->sub(card);
}

void CardManager::shuffleByManager() {
    currentCard->shuffle();
}

std::string CardManager::getInfo() {
    return currentCard->getInfo();
}

cardPtr CardManager::getByManager(int index)
{
    return currentCard->get(index);
}

int CardManager::getSizeDeckByManager() {
    return currentCard->getSizeDeck();
}

cardPtr CardManager::popByManager()
{
    return currentCard->popCard();
}
int CardManager::getValueFromTop()
{
        return currentCard->getTopValue();
}

CardManager::~CardManager() = default;

void CardManager::clearDeckByManager()
{
    currentCard->clearDeck();
}
