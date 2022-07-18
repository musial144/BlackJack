//
// Created by student on 14.06.2020.
//

#include "CardRepository.h"
#include <algorithm>
#include "CardRepositoryException.h"
using namespace std;

bool CardRepository::add(cardPtr card) {
    cardVector.push_back(card);
    return true;
}

bool CardRepository::sub(cardPtr card) {
    if(cardVector.empty()) throw CardRepositoryException(CardRepositoryException::exceptionCardNullPtr);
            int rozmiar;
            rozmiar=cardVector.size();
            cardVector.erase(remove(cardVector.begin(),cardVector.end(),card));
    return rozmiar > cardVector.size();
}

void CardRepository::shuffle() {
    srand(time(0));
    for(auto i=0; i<256; i++)
    {

        int a=rand() % getSizeDeck();
        int b=rand() % getSizeDeck();

        if(a != b) {
            swap(cardVector[a], cardVector[b]);
        }
    }
}

string CardRepository::getInfo() {
    ostringstream sout;
    for(auto & i : cardVector)
    {
        sout<<i->getCardType()<<", "<<i->getSuit()<<", Wartosc: "<<i->getValue()<<endl;
    }

    return sout.str();
}

cardPtr CardRepository::get(int index) {
    if(index<0||index>cardVector.size()) throw CardRepositoryException(CardRepositoryException::exceptionCardNotExist);
    return cardVector[index];
}

int CardRepository::getSizeDeck() {
    return cardVector.size();
}

cardPtr CardRepository::popCard()
{
    if(cardVector.empty()) throw CardRepositoryException(CardRepositoryException::exceptionDeckIsEmpty);
    cardPtr s;
    s = cardVector[0];
    sub(s);
    return s;
}
int CardRepository::getTopValue()
{
    if(cardVector.empty()) throw CardRepositoryException(CardRepositoryException::exceptionDeckIsEmpty);
    return cardVector[0]->getValue();
}
void CardRepository::clearDeck()
{
    cardVector.clear();
}
CardRepository::CardRepository() = default;



