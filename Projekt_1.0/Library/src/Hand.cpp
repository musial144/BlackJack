//
// Created by student on 20.06.2020.
//

#include "../include/Hand.h"
#include <sstream>
using namespace std;
Hand::Hand(int id): id(id) {}
Hand::~Hand() = default;
bool Hand::addToHand(const cardPtr& card)
{
    handVector.push_back(card);
    return true;
}
std::string Hand::toString()
{
    ostringstream sout;
    for(auto & i : handVector)
    {
        sout<<i->getSuit()<<" "<<i->getCardType()<<endl;
    }
    return sout.str();
}
void Hand::clear()
{
    handVector.clear();
}