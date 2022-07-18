#include "PlayerRepository.h"
#include <boost/test/unit_test.hpp>
#include "../include/Typedefs.h"

using namespace std;
using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(PlayerRepositoryTestSuite)

    BOOST_AUTO_TEST_CASE(addTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));

        bool status;


        status = playerRepo->add(player1);
        BOOST_REQUIRE_EQUAL(status, true);
        status = playerRepo->add(player2);
        BOOST_REQUIRE_EQUAL(status, true);
        status = playerRepo->add(player3);
        BOOST_REQUIRE_EQUAL(status, true);

        BOOST_TEST_MESSAGE(playerRepo->getInfo());
    }

    BOOST_AUTO_TEST_CASE(subTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));


        playerRepo->add(player1);
        playerRepo->add(player2);
        playerRepo->add(player3);

        BOOST_REQUIRE_EQUAL(playerRepo->find(3)->getId(), 3);

        bool status;

        status=playerRepo->sub(player1);
        BOOST_REQUIRE_EQUAL(status, true);
        status=playerRepo->sub(player2);
        BOOST_REQUIRE_EQUAL(status, true);
        status=playerRepo->sub(player3);
        BOOST_REQUIRE_EQUAL(status, true);

        BOOST_CHECK_THROW(playerRepo->find(3),logic_error);
    }

    BOOST_AUTO_TEST_CASE(findTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerPtr player1(new Player(1, 0, true));
        playerPtr player2(new Player(2, 0, true));
        playerPtr player3(new Player(3, 0, true));

        playerRepo->add(player1);
        playerRepo->add(player2);
        playerRepo->add(player3);

        BOOST_REQUIRE_EQUAL(playerRepo->find(3)->getId(),3);
        BOOST_CHECK_THROW(playerRepo->find(4)->getId(),logic_error);

    }

    BOOST_AUTO_TEST_CASE(allPlaysTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerPtr player1(new Player(1, 0, false));
        playerPtr player2(new Player(2, 0, false));
        playerPtr player3(new Player(3, 0, false));

        playerRepo->add(player1);
        playerRepo->add(player2);
        playerRepo->add(player3);

        bool status;

        status=playerRepo->allPlays();
        BOOST_REQUIRE_EQUAL(status, false);

        playerRepo->find(1)->setInGame();

        status=playerRepo->allPlays();
        BOOST_REQUIRE_EQUAL(status, true);
    }

    BOOST_AUTO_TEST_CASE(topScoreTest) {

        playerRepoPtr playerRepo(new PlayerRepository());
        playerPtr player1(new Player(1, 0, false));
        playerPtr player2(new Player(2, 0, false));
        playerPtr player3(new Player(3, 0, false));

        playerRepo->add(player1);
        playerRepo->add(player2);
        playerRepo->add(player3);

        playerRepo->find(1)->setPoints(15);
        playerRepo->find(2)->setPoints(10);
        playerRepo->find(3)->setPoints(30);

        BOOST_REQUIRE_EQUAL(playerRepo->topScore(),15);
    }


BOOST_AUTO_TEST_SUITE_END()