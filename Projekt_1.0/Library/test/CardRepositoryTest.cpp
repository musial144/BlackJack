#include "CardRepository.h"
#include <boost/test/unit_test.hpp>
#include "../include/Typedefs.h"

using namespace std;
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(CardRepositoryTestSuite)


    BOOST_AUTO_TEST_CASE(addTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("As", "Kier"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));

        bool status;

        status=cardRepo->add(card1);
        BOOST_REQUIRE_EQUAL(status,true);
        status=cardRepo->add(card2);
        BOOST_REQUIRE_EQUAL(status,true);
        status=cardRepo->add(card3);
        BOOST_REQUIRE_EQUAL(status,true);
        status=cardRepo->add(card4);
        BOOST_REQUIRE_EQUAL(status,true);

        BOOST_TEST_MESSAGE(cardRepo->getInfo());

    }


    BOOST_AUTO_TEST_CASE(subTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("As", "Kier"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));


        cardRepo->add(card1);
        cardRepo->add(card2);
        cardRepo->add(card3);
        cardRepo->add(card4);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(),4);

        bool status;

        status=cardRepo->sub(card1);
        BOOST_REQUIRE_EQUAL(status,true);
        status=cardRepo->sub(card2);
        BOOST_REQUIRE_EQUAL(status,true);
        status=cardRepo->sub(card3);
        BOOST_REQUIRE_EQUAL(status,true);
        status=cardRepo->sub(card4);
        BOOST_REQUIRE_EQUAL(status,true);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(),0);
    }

    BOOST_AUTO_TEST_CASE(shuffleTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("Dwojka", "Kier"));
        cardPtr card2(new Card("Trojka", "Karo"));
        cardPtr card3(new Card("Czworka", "Trefl"));
        cardPtr card4(new Card("Piatka", "Pik"));
        cardPtr card5(new Card("Szostka", "Pik"));
        cardPtr card6(new Card("Siodemka", "Pik"));
        cardPtr card7(new Card("Osemka", "Pik"));


        cardRepo->add(card1);
        cardRepo->add(card2);
        cardRepo->add(card3);
        cardRepo->add(card4);
        cardRepo->add(card5);
        cardRepo->add(card6);
        cardRepo->add(card7);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(),7);

        cardRepo->shuffle();

        bool ifShuffle=false;
        for(auto i=0; i<cardRepo->getSizeDeck(); i++)
        {
            if(cardRepo->getTopValue() != (i+2))
            {
                ifShuffle=true;
                break;
            }
            cardRepo->popCard();
        }
        BOOST_REQUIRE_EQUAL(ifShuffle, true);
    }

    BOOST_AUTO_TEST_CASE(getSizeDeckTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("As", "Kier"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));


        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(),0);

        cardRepo->add(card1);
        cardRepo->add(card2);
        cardRepo->add(card3);
        cardRepo->add(card4);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(),4);
    }

    BOOST_AUTO_TEST_CASE(popCardTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("As", "Kier"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));


        cardRepo->add(card1);
        cardRepo->add(card2);
        cardRepo->add(card3);
        cardRepo->add(card4);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(),4);

        BOOST_REQUIRE_EQUAL(cardRepo->popCard()->getValue(), 11);
        BOOST_REQUIRE_EQUAL(cardRepo->popCard()->getValue(), 4);
        BOOST_REQUIRE_EQUAL(cardRepo->popCard()->getValue(), 3);
        BOOST_REQUIRE_EQUAL(cardRepo->popCard()->getValue(), 2);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(),0);
    }

    BOOST_AUTO_TEST_CASE(getTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("As", "Kier"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));


        cardRepo->add(card1);
        cardRepo->add(card2);
        cardRepo->add(card3);
        cardRepo->add(card4);

        BOOST_REQUIRE_EQUAL(cardRepo->get(0)->getValue(), 11);
        BOOST_REQUIRE_EQUAL(cardRepo->get(2)->getValue(), 3);
        BOOST_REQUIRE_EQUAL(cardRepo->get(1)->getValue(), 4);
        BOOST_REQUIRE_EQUAL(cardRepo->get(3)->getValue(), 2);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(), 4);
    }

    BOOST_AUTO_TEST_CASE(getTopValueTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("As", "Kier"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));


        cardRepo->add(card1);
        cardRepo->add(card2);
        cardRepo->add(card3);
        cardRepo->add(card4);

        BOOST_REQUIRE_EQUAL(cardRepo->getTopValue(), 11);
        cardRepo->popCard();
        BOOST_REQUIRE_EQUAL(cardRepo->getTopValue(), 4);
        cardRepo->popCard();
        BOOST_REQUIRE_EQUAL(cardRepo->getTopValue(), 3);
        cardRepo->popCard();
        BOOST_REQUIRE_EQUAL(cardRepo->getTopValue(), 2);

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(), 1);
    }

    BOOST_AUTO_TEST_CASE(clearDeckTest) {
        cardRepoPtr cardRepo(new CardRepository());
        cardPtr card1(new Card("As", "Kier"));
        cardPtr card2(new Card("Krol", "Karo"));
        cardPtr card3(new Card("Dama", "Trefl"));
        cardPtr card4(new Card("Walet", "Pik"));


        cardRepo->add(card1);
        cardRepo->add(card2);
        cardRepo->add(card3);
        cardRepo->add(card4);


        cardRepo->clearDeck();

        BOOST_REQUIRE_EQUAL(cardRepo->getSizeDeck(), 0);
    }


BOOST_AUTO_TEST_SUITE_END()