#include <boost/test/unit_test.hpp>
#include "CardManager.h"
#include "../include/Typedefs.h"
#include <string>
using namespace std;
using namespace boost::unit_test;


BOOST_AUTO_TEST_SUITE(CardManagerTestSuite)


    BOOST_AUTO_TEST_CASE(addByManagerTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));
        cardPtr card1(new Card("Dwojka", "Pik"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));

        bool status;

        status = cardMan->addByManager(card1);
        BOOST_REQUIRE_EQUAL(status, true);
        status = cardMan->addByManager(card2);
        BOOST_REQUIRE_EQUAL(status, true);
        status = cardMan->addByManager(card3);
        BOOST_REQUIRE_EQUAL(status, true);
        status = cardMan->addByManager(card4);
        BOOST_REQUIRE_EQUAL(status, true);

        BOOST_TEST_MESSAGE(cardMan->getInfo());
    }



    BOOST_AUTO_TEST_CASE(subByManagerTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));
        cardPtr card1(new Card("Dwojka", "Pik"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);

        cardMan->addByManager(card1);
        cardMan->addByManager(card2);
        cardMan->addByManager(card3);
        cardMan->addByManager(card4);

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 4);

        bool status;

        status = cardMan->subByManager(card1);
        BOOST_REQUIRE_EQUAL(status, true);
        status = cardMan->subByManager(card2);
        BOOST_REQUIRE_EQUAL(status, true);
        status = cardMan->subByManager(card3);
        BOOST_REQUIRE_EQUAL(status, true);
        status = cardMan->subByManager(card4);
        BOOST_REQUIRE_EQUAL(status, true);

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);
    }



    BOOST_AUTO_TEST_CASE(createDeckTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);

        cardMan->createDeck();

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 52);
    }



    BOOST_AUTO_TEST_CASE(shuffleByManagerTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));

        cardMan->createDeck();
        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 52);

        cardMan->shuffleByManager();

        bool ifShuffle=false;

        for(auto i=0; i<cardMan->getSizeDeckByManager(); i++)
        {
            if(cardMan->getValueFromTop() != ((i % 4) + 2))
            {
                ifShuffle=true;
                break;
            }
            cardMan->popByManager();
        }

        BOOST_REQUIRE_EQUAL(ifShuffle, true);

    }



    BOOST_AUTO_TEST_CASE(getByManagerTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));
        cardPtr card1(new Card("Dwojka", "Pik"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);

        cardMan->addByManager(card1);
        cardMan->addByManager(card2);
        cardMan->addByManager(card3);
        cardMan->addByManager(card4);

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 4);

        BOOST_REQUIRE_EQUAL(cardMan->getByManager(0)->getValue(), 2);
        BOOST_REQUIRE_EQUAL(cardMan->getByManager(1)->getValue(), 4);
        BOOST_REQUIRE_EQUAL(cardMan->getByManager(2)->getValue(), 3);
        BOOST_REQUIRE_EQUAL(cardMan->getByManager(3)->getValue(), 2);

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 4);
    }



    BOOST_AUTO_TEST_CASE(getSizeDeckByManagerTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));
        cardPtr card1(new Card("Dwojka", "Pik"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));


        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);

        cardMan->addByManager(card1);
        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 1);

        cardMan->addByManager(card2);
        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 2);

        cardMan->addByManager(card3);
        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 3);

        cardMan->addByManager(card4);
        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 4);
    }



    BOOST_AUTO_TEST_CASE(popByManagerTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));
        cardPtr card1(new Card("Dwojka", "Pik"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);

        cardMan->addByManager(card1);
        cardMan->addByManager(card2);
        cardMan->addByManager(card3);
        cardMan->addByManager(card4);

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 4);

        BOOST_REQUIRE_EQUAL(cardMan->popByManager(), card1);
        BOOST_REQUIRE_EQUAL(cardMan->popByManager(), card2);
        BOOST_REQUIRE_EQUAL(cardMan->popByManager(), card3);
        BOOST_REQUIRE_EQUAL(cardMan->popByManager(), card4);

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);
    }



    BOOST_AUTO_TEST_CASE(getValueFromTopTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));
        cardPtr card1(new Card("Dwojka", "Pik"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);

        cardMan->addByManager(card1);
        cardMan->addByManager(card2);
        cardMan->addByManager(card3);
        cardMan->addByManager(card4);

        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 4);


        BOOST_REQUIRE_EQUAL(cardMan->getValueFromTop(), 2);
        cardMan->popByManager();
        BOOST_REQUIRE_EQUAL(cardMan->getValueFromTop(), 4);
        cardMan->popByManager();
        BOOST_REQUIRE_EQUAL(cardMan->getValueFromTop(), 3);
        cardMan->popByManager();
        BOOST_REQUIRE_EQUAL(cardMan->getValueFromTop(), 2);
        cardMan->popByManager();


        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);
    }


    BOOST_AUTO_TEST_CASE(clearDeckByManagerTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardManPtr cardMan(new CardManager(cardRepo));

        cardMan->createDeck();
        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 52);

        cardMan->clearDeckByManager();
        BOOST_REQUIRE_EQUAL(cardMan->getSizeDeckByManager(), 0);
    }



BOOST_AUTO_TEST_SUITE_END()

