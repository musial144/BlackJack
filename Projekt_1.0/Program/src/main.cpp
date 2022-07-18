#include <iostream>
#include "../include/Table.h"
#include "../include/Player.h"
#include "CardManager.h"
#include "CardRepository.h"
#include "../include/Card.h"
#include "PlayerManager.h"
#include "PlayerRepository.h"
#include "../include/Hand.h"
#include "Typedefs.h"
#include <vector>
#include <memory>


using namespace std;

int main() {

    playerRepoPtr players (new PlayerRepository());
    playerManPtr playersMan (new PlayerManager(players));
    playersMan->createPlayers();
    cardRepoPtr cards(new CardRepository());
    cardManPtr cardMan(new CardManager(cards));
    vector <Hand> rece;
    Hand reka1(1);
    rece.push_back(reka1);
    Hand reka2(2);
    rece.push_back(reka2);
    Hand reka3(3);
    rece.push_back(reka3);
    Hand reka4(4);
    rece.push_back(reka4);
    Hand reka5(5);
    rece.push_back(reka5);
    cout<<reka2.toString();
    int  iloscgraczy=0;
    char wybor=0;
    char akcja=0;
    char gra=0;
    cout<<"1.Zagraj"<<endl<<"2.Wyjdz"<<endl;
    cin>>wybor;
    while(wybor!='2')
    {
        if(wybor=='1') {
            cout<<"1.Nowa gra"<<endl<<"2.Wczytaj"<<endl;
            cin>>gra;
            if(gra=='1') {
                int a=0;
                cout << "Podaj ilosc graczy [od 1 do 5]" << endl;
                while(a<1||a>5)
                {cin >> a;}
                Table::setOnPlayers(playersMan, a);
            }
            if(gra=='2') {Table::load(playersMan);};
                iloscgraczy=playersMan->ifSomebodyPlays();
                cout << playersMan->getInfo();
            cardMan->clearDeckByManager();
            cardMan->createDeck();
            cardMan->shuffleByManager();
            while(playersMan->ifSomebodyPlays()>0)
            {
                if(playersMan->findByManager(1)->getPoints() < 21 && playersMan->findByManager(1)->getInGame()) {cout<<"Wpisz [1] jesli chcesz dobrac karte"<<endl; cout<<"Wpisz [2] jesli chcesz zapisac i wylaczyc"<<endl;
                cin>>akcja;
                if(playersMan->findByManager(1)->choose(akcja)=='2') {Table::save(playersMan, iloscgraczy); break; }
                if(playersMan->findByManager(1)->choose(akcja)=='1')
                {
                    Table::clearScreen();
                    Table::addPoints(playersMan->findByManager(1), playersMan->findByManager(1)->getPoints()+cardMan->getValueFromTop());
                    rece[0].addToHand(cardMan->popByManager());
                    cout<<"Twoje karty to: "<<endl<<rece[0].toString();
                 } else playersMan->findByManager(1)->setOffGame();}
                    else playersMan->findByManager(1)->setOffGame();
                 if(iloscgraczy>1) for(auto i=2;i<=iloscgraczy;i++)
                 {
                  if(playersMan->findByManager(i)->getPoints() < 18 && playersMan->findByManager(i)->getInGame())
                  {
                      Table::addPoints(playersMan->findByManager(i), playersMan->findByManager(i)->getPoints()+cardMan->getValueFromTop());
                      rece[i-1].addToHand(cardMan->popByManager());
                  } else playersMan->findByManager(i)->setOffGame();
                 }
            for(auto i=2;i<=iloscgraczy;i++)
            {
                if(playersMan->findByManager(i)->getPoints() == 21) break;
            }
      }
      for(auto i=1;i<=iloscgraczy;i++)
      {
          if(playersMan->findByManager(i)->getInGame())   playersMan->findByManager(i)->setOffGame();
      }
      cout << playersMan->getInfo();
      if(playersMan->findByManager(1)->choose(akcja)=='1') cout<<endl<<Table::whoWins(playersMan, iloscgraczy);
                for(auto i=1;i<=iloscgraczy;i++)
                {
                    playersMan->findByManager(i)->setPoints(0);
                    rece[i-1].clear();
                }
      cout<<endl<<endl;
      cardMan->clearDeckByManager();
        }
        if(wybor=='2') break;
        cout<<"1.Zagraj"<<endl<<"2.Wyjdz"<<endl;
        cin>>wybor;
    }

    return 0;
}






