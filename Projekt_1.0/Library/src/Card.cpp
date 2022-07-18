//
// Created by student on 14.06.2020.
//

#include "../include/Card.h"

using namespace std;

Card::Card(const std::string& type, string suit): type(type), suit(suit)
{
    if(type=="As") value=11;
    if(type=="Dwojka") value=2;
    if(type=="Trojka") value=3;
    if(type=="Czworka") value=4;
    if(type=="Piatka") value=5;
    if(type=="Szostka") value=6;
    if(type=="Siodemka") value=7;
    if(type=="Osemka") value=8;
    if(type=="Dziewiatka") value=9;
    if(type=="Dziesiatka") value=10;
    if(type=="Walet") value=2;
    if(type=="Dama") value=3;
    if(type=="Krol") value=4;
}

Card::~Card() = default;

string Card::getSuit() const {
    return suit;
}

int Card::getValue() const {
    return value;
}
string Card::getCardType() const
{
    return type;
}


