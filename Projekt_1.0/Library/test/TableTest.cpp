#include <boost/test/unit_test.hpp>
#include "../include/Table.h"
#include "../include/Typedefs.h"

using namespace std;
using namespace boost::unit_test;


BOOST_AUTO_TEST_SUITE(TableTestSuite)

    BOOST_AUTO_TEST_CASE(TableTest) {

    playerPtr player1(new Player(1, 0, true));
    playerPtr player2(new Player(2, 0, true));
    playerPtr player3(new Player(3, 0, true));
    playerRepoPtr playerRepo(new PlayerRepository());
    playerManPtr playerMan(new PlayerManager(playerRepo));

    bool status;

    status=playerMan->addByManager(player1);
    BOOST_REQUIRE_EQUAL(status, true);
    status=playerMan->addByManager(player2);
    BOOST_REQUIRE_EQUAL(status, true);
    status=playerMan->addByManager(player3);
    BOOST_REQUIRE_EQUAL(status, true);

    Table::addPoints(player1,6);
    Table::addPoints(player2,8);
    Table::addPoints(player3,10);

    BOOST_REQUIRE_EQUAL(player1->getPoints(),6);
    BOOST_REQUIRE_EQUAL(player2->getPoints(),8);
    BOOST_REQUIRE_EQUAL(player3->getPoints(),10);


   BOOST_TEST_MESSAGE(Table::whoWins(playerMan, 3));

   status=true;
   status=Table::fexist("PikTestowyDoSprawdzaniaCzyTakiIstnieje.txt");
   BOOST_REQUIRE_EQUAL(status, false);

    }

    BOOST_AUTO_TEST_CASE(addPointsTest) {

        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));

        Table::addPoints(player1,10);
        Table::addPoints(player2,20);
        Table::addPoints(player3,30);

        BOOST_REQUIRE_EQUAL(player1->getPoints(),10);
        BOOST_REQUIRE_EQUAL(player2->getPoints(),20);
        BOOST_REQUIRE_EQUAL(player3->getPoints(),30);
    }

    BOOST_AUTO_TEST_CASE(whoWinsTest) {

        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));
        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));


        playerMan->addByManager(player1);
        playerMan->addByManager(player2);
        playerMan->addByManager(player3);

        Table::addPoints(player1,10);
        Table::addPoints(player2,20);
        Table::addPoints(player3,30);

        BOOST_TEST_MESSAGE(Table::whoWins(playerMan, 2));
    }

    BOOST_AUTO_TEST_CASE(fexistTest) {

    bool status;

    status=true;
    status=Table::fexist("PikTestowyDoSprawdzaniaCzyTakiIstnieje.txt");
    BOOST_REQUIRE_EQUAL(status, false);

    }

    BOOST_AUTO_TEST_CASE(saveTest) {

        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));
        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerMan->addByManager(player1);
        playerMan->addByManager(player2);
        playerMan->addByManager(player3);

        playerMan->findByManager(2)->setPoints(15);

        Table::save(playerMan,3);
    }

    BOOST_AUTO_TEST_CASE(loadTest) {
        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));
        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerMan->addByManager(player1);
        playerMan->addByManager(player2);
        playerMan->addByManager(player3);

        Table::load(playerMan);

        BOOST_REQUIRE_EQUAL(playerMan->findByManager(1)->getPoints(),0);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(2)->getPoints(),15);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(3)->getPoints(),0);
    }

    BOOST_AUTO_TEST_CASE(setOnPlayersTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerManPtr playerMan(new PlayerManager(playerRepo));

        playerMan->createPlayers();

        Table::setOnPlayers(playerMan,3);

        BOOST_REQUIRE_EQUAL(playerMan->findByManager(1)->getInGame(),true);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(2)->getInGame(),true);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(3)->getInGame(),true);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(4)->getInGame(),false);
        BOOST_REQUIRE_EQUAL(playerMan->findByManager(5)->getInGame(),false);
    }

BOOST_AUTO_TEST_SUITE_END()