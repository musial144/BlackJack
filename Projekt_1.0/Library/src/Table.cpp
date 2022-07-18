//
// Created by student on 13.06.2020.
//

#include <Hand.h>
#include "../include/Table.h"
#include <iostream>
#include <fstream>
#include "TableException.h"
using namespace std;


void Table::addPoints(playerPtr player, int points)
{
        player->setPoints(points);
}
void Table::setOnPlayers(playerManPtr playerMan,int number)
{
    if(number<1||number>5) throw TableException(TableException::exceptionPlayerNotExist);
    for (auto i = 0; i < number; i++)
    {
        playerMan->findByManager(i + 1)->setInGame();
    }
}
string Table::whoWins(playerManPtr playerMan, int quantityPlayers)
{
    int remis=0;
    ostringstream sout;
    sout<<"---Tablica zwyciezcow--- "<<std::endl;
    for(auto i=1;i<=quantityPlayers;i++)
    {
        if(playerMan->findByManager(i)->getPoints()==playerMan->theHighestScore())
        {
            sout<<"Gracz "<<playerMan->findByManager(i)->getId()<<std::endl;
            remis++;
        }
    }
    if(remis==1) sout<<"Brawa dla niego"<<endl<<endl;
    if(remis>1) sout<<"Czyli mamy REMIS!"<<endl<<endl;
    if(remis==0) sout<<"Oj slabiutko, nikt nie wygral"<<endl<<endl;
    return sout.str();
}
void Table::save(playerManPtr playerMan, int numberPlayers)
{
    fstream zapis;
    zapis.open("zapis.txt",ios::out);
    if(zapis.good())
    {
        zapis<<numberPlayers<<endl;
        for(auto i=0;i<numberPlayers;i++)
        {
            zapis<<playerMan->findByManager(i+1)->getPoints()<<endl;
        }
    zapis.close();
    }
    else throw TableException(TableException::exceptionFileError);
}
bool Table::fexist(const char *filename)
{
    bool result=false;
    ifstream ifile(filename);
    if(ifile)
    {
        result=true;
    }
    ifile.close();
    return result;
}
void Table::load(playerManPtr playerMan)
{

    fstream odczyt;
    string napis;
    int i, x=0;
    if(!Table::fexist("zapis.txt")) {ofstream odczyt("zapis.txt");}
    odczyt.open("zapis.txt",ios::in);
    if(odczyt.good()) {
        getline(odczyt, napis);
        i = atoi(napis.c_str());
        for(auto j=1;j<=i;j++){
            getline(odczyt, napis);
            x = atoi(napis.c_str());
            playerMan->findByManager(j)->setPoints(x);
            playerMan->findByManager(j)->setInGame();
        }
    }
    else throw TableException(TableException::exceptionFileError);
}
void Table::clearScreen()
{
    cout << string( 100, '\n' );
}


