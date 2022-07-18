#include "../include/Player.h"
#include <boost/test/unit_test.hpp>
#include "../include/Typedefs.h"

using namespace std;
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(PlayerTestSuite)

    BOOST_AUTO_TEST_CASE(settersTest) {

        playerPtr player(new Player(1, 0, true));


        player->setOffGame();
        BOOST_REQUIRE_EQUAL(player->getInGame(),false);

        player->setInGame();
        BOOST_REQUIRE_EQUAL(player->getInGame(),true);

        player->setPoints(10);
        BOOST_REQUIRE_EQUAL(player->getPoints(),10);

    }

    BOOST_AUTO_TEST_CASE(gettersTest) {

        playerPtr player(new Player(1, 0, false));

        BOOST_REQUIRE_EQUAL(player->getId(),1);
        BOOST_REQUIRE_EQUAL(player->getPoints(),0);
        BOOST_REQUIRE_EQUAL(player->getInGame(), false);
    }




BOOST_AUTO_TEST_SUITE_END()