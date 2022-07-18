#include <boost/test/unit_test.hpp>
#include "../include/Card.h"
#include "../include/Typedefs.h"
#include <string>
using namespace std;
using namespace boost::unit_test;


BOOST_AUTO_TEST_SUITE(CardTestSuite)

    BOOST_AUTO_TEST_CASE(CardTest) {


    string type[13] = {"Dwojka", "Trojka", "Czworka", "Piatka", "Szostka", "Siodemka", "Osemka", "Dziewiatka", "Dziesiatka", "Walet", "Dama", "Krol", "As"};
    string color[4] = {"Kier", "Karo", "Trefl", "Pik"};
    int value=2;

    for(auto& i: type)
    {
        for(auto& j: color)
        {
            cardPtr card(new Card(i,j));
            BOOST_REQUIRE_EQUAL(card->getSuit(),j);
            BOOST_REQUIRE_EQUAL(card->getCardType(), i);

            if(i=="Walet")
            {
                BOOST_REQUIRE_EQUAL(card->getValue(), 2);
            }
            else if(i=="Dama")
            {
                BOOST_REQUIRE_EQUAL(card->getValue(), 3);
            }
            else if(i=="Krol")
            {
                BOOST_REQUIRE_EQUAL(card->getValue(), 4);
            }
            else if(i=="As")
            {
                BOOST_REQUIRE_EQUAL(card->getValue(), 11);
            }
            else
            {
                BOOST_REQUIRE_EQUAL(card->getValue(), value);
            }
        }
        value++;
    }

    }


BOOST_AUTO_TEST_SUITE_END()