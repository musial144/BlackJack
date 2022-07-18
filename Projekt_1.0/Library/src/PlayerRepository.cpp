//
// Created by student on 20.06.2020.
//

#include "PlayerRepository.h"
#include <algorithm>
#include "PlayerRepositoryException.h"
using namespace std;

bool PlayerRepository::add(playerPtr player) {
    playerVector.push_back(player);
    return true;
}
bool PlayerRepository::sub(playerPtr player) {
    if(playerVector.empty()) throw PlayerRepositoryException(PlayerRepositoryException::exceptionPlayerNullPtr);
    int rozmiar;
    rozmiar=playerVector.size();
    playerVector.erase(remove(playerVector.begin(), playerVector.end(),player));
    return rozmiar > playerVector.size();
}
PlayerRepository::PlayerRepository() = default;

string PlayerRepository::getInfo() {
    ostringstream sout;
    for(auto & i : playerVector)
    {
        sout<<"Gracz "<<i->getId()<<" ma "<<i->getPoints()<<" punktow ";
        if(i->getInGame()) sout<<"aktywny";
        else sout<<"nieaktywny";
        sout<<std::endl;
    }

    return sout.str();
}
playerPtr PlayerRepository::find(int number)
{
    for(auto & i : playerVector)
    {
        if(i->getId()==number)
            return i;
    }
    throw PlayerRepositoryException(PlayerRepositoryException::exceptionPlayerNotExist);
}
int PlayerRepository::allPlays()
{
    int razem=0;
    for(auto & i : playerVector)
    {
       if(i->getInGame()) razem++;
    }
    return razem;
}
int PlayerRepository::topScore()
{
    int maks=0;
    for(auto & i : playerVector)
    {
        if(i->getPoints()>maks && i->getPoints()<=21)
        {
            maks=i->getPoints();
        }
    }
    return maks;
}

