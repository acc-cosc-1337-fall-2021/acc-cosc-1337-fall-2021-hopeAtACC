#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "tic_tac_toe.h"
#include "catch.hpp"

TEST_CASE("Verify Tic_tac_toe") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(1);
	REQUIRE(object.game_over() == false);
	object.mark_board(2);
	REQUIRE(object.game_over() == false);
	object.mark_board(3);
	REQUIRE(object.game_over() == false);
	object.mark_board(4);
	REQUIRE(object.game_over() == false);
	object.mark_board(5);
	REQUIRE(object.game_over() == false);
	object.mark_board(6);
	REQUIRE(object.game_over() == false);
	object.mark_board(7);
	REQUIRE(object.game_over() == false);
	object.mark_board(8);
	REQUIRE(object.game_over() == false);
	object.mark_board(9);
	REQUIRE(object.game_over() == true);
}

