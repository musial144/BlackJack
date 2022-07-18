//
// Created by student on 21.06.2020.
//

#ifndef BLACKJACK_TYPEDEFS_H
#define BLACKJACK_TYPEDEFS_H


class Player;
class CardManager;
class PlayerRepository;
class Card;
class CardRepository;
class PlayerManager;
class Hand;
class Table;

typedef std::shared_ptr<Card> cardPtr;
typedef std::shared_ptr<CardRepository> cardRepoPtr;
typedef std::shared_ptr<CardManager> cardManPtr;
typedef std::shared_ptr<Player> playerPtr;
typedef std::shared_ptr<PlayerRepository> playerRepoPtr;
typedef std::shared_ptr<PlayerManager> playerManPtr;
typedef std::shared_ptr<Hand> handPtr;




#endif //BLACKJACK_TYPEDEFS_H
