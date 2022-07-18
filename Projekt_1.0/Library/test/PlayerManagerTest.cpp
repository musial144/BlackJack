#include "PlayerManager.h"
#include <boost/test/unit_test.hpp>
#include "../include/Typedefs.h"

using namespace std;
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(PlayerManagerTestSuite)


    BOOST_AUTO_TEST_CASE(addByManagerTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));


        bool status;

        status = playerMan->addByManager(player1);
        BOOST_REQUIRE_EQUAL(status, true);
        status = playerMan->addByManager(player2);
        BOOST_REQUIRE_EQUAL(status, true);
        status = playerMan->addByManager(player3);
        BOOST_REQUIRE_EQUAL(status, true);

        BOOST_TEST_MESSAGE(playerMan->getInfo());

    }

    BOOST_AUTO_TEST_CASE(subByManagerTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));


        playerMan->addByManager(player1);
        playerMan->addByManager(player2);
        playerMan->addByManager(player3);

        BOOST_REQUIRE_EQUAL(playerMan->findByManager(3)->getId(),3);

        bool status;

        status = playerMan->subByManager(player1);
        BOOST_REQUIRE_EQUAL(status, true);
        status = playerMan->subByManager(player2);
        BOOST_REQUIRE_EQUAL(status, true);
        status = playerMan->subByManager(player3);
        BOOST_REQUIRE_EQUAL(status, true);

        BOOST_CHECK_THROW(playerMan->findByManager(3),logic_error);
    }


    BOOST_AUTO_TEST_CASE(createPlayersTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerMan->createPlayers();

        BOOST_REQUIRE_EQUAL(playerMan->findByManager(1)->getId(), 1);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(2)->getId(), 2);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(3)->getId(), 3);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(4)->getId(), 4);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(5)->getId(), 5);
        BOOST_CHECK_THROW(playerMan->findByManager(6),logic_error);

    }


    BOOST_AUTO_TEST_CASE(findByManagerTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));


        playerMan->addByManager(player1);
        playerMan->addByManager(player2);
        playerMan->addByManager(player3);

        BOOST_REQUIRE_EQUAL(playerMan->findByManager(3)->getId(), 3);
        BOOST_CHECK_THROW(playerMan->findByManager(4),logic_error);

    }


    BOOST_AUTO_TEST_CASE(ifSomebodyPlaysTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerPtr player1(new Player(1, 0, false));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));

        bool status;

        playerMan->addByManager(player1);
        status=playerMan->ifSomebodyPlays();
        BOOST_REQUIRE_EQUAL(status, false);

        playerMan->addByManager(player2);
        status=playerMan->ifSomebodyPlays();
        BOOST_REQUIRE_EQUAL(status, true);

        playerMan->addByManager(player3);
        status=playerMan->ifSomebodyPlays();
        BOOST_REQUIRE_EQUAL(status, true);

    }


    BOOST_AUTO_TEST_CASE(theHighestScoreTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));


        playerMan->addByManager(player1);
        playerMan->addByManager(player2);
        playerMan->addByManager(player3);

        playerMan->findByManager(1)->setPoints(10);
        playerMan->findByManager(2)->setPoints(15);
        playerMan->findByManager(3)->setPoints(22);

        BOOST_REQUIRE_EQUAL(playerMan->theHighestScore(),15);
    }




BOOST_AUTO_TEST_SUITE_END()