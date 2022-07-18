#include "../include/Hand.h"
#include <boost/test/unit_test.hpp>
#include "../include/Typedefs.h"

using namespace std;
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(HandTestSuite)

    BOOST_AUTO_TEST_CASE(HandTest) {
    handPtr hand(new Hand(1));
    cardPtr card1(new Card("As", "Kier"));
    cardPtr card2(new Card("Krol", "Karo"));
    cardPtr card3(new Card("Dama", "Trefl"));

    bool status;

    status=hand->addToHand(card1);
    BOOST_REQUIRE_EQUAL(status, true);
    status=hand->addToHand(card2);
    BOOST_REQUIRE_EQUAL(status, true);
    status=hand->addToHand(card3);
    BOOST_REQUIRE_EQUAL(status, true);

    BOOST_TEST_MESSAGE(hand->toString());


    }


BOOST_AUTO_TEST_SUITE_END()