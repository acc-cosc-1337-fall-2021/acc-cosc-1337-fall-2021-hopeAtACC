#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "tic_tac_toe.h"
#include "catch.hpp"

TEST_CASE("Verify first player for X") {
	Tic_tac_toe object;
	object.start_game("X");
	REQUIRE(object.get_player() == "X");
}

TEST_CASE("Verify first player for O") {
	Tic_tac_toe object;
	object.start_game("O");
	REQUIRE(object.get_player() == "O");
}

TEST_CASE("Verify win by first column") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(1);
	object.mark_board(2);
	object.mark_board(4);
	object.mark_board(3);
	object.mark_board(7);
	object.mark_board(5);
	object.mark_board(6);
	object.mark_board(8);
	object.mark_board(9);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify win by second column") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(2);
	object.mark_board(1);
	object.mark_board(5);
	object.mark_board(4);
	object.mark_board(8);
	object.mark_board(3);
	object.mark_board(7);
	object.mark_board(6);
	object.mark_board(9);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify win by third column") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(3);
	object.mark_board(2);
	object.mark_board(6);
	object.mark_board(1);
	object.mark_board(9);
	object.mark_board(5);
	object.mark_board(4);
	object.mark_board(8);
	object.mark_board(7);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify win by first row") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(1);
	object.mark_board(9);
	object.mark_board(2);
	object.mark_board(6);
	object.mark_board(3);
	object.mark_board(5);
	object.mark_board(4);
	object.mark_board(8);
	object.mark_board(7);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify win by second row") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(4);
	object.mark_board(1);
	object.mark_board(5);
	object.mark_board(9);
	object.mark_board(6);
	object.mark_board(2);
	object.mark_board(3);
	object.mark_board(8);
	object.mark_board(7);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify win by third row") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(7);
	object.mark_board(4);
	object.mark_board(8);
	object.mark_board(1);
	object.mark_board(9);
	object.mark_board(5);
	object.mark_board(6);
	object.mark_board(2);
	object.mark_board(3);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify win from diagonally top left") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(1);
	object.mark_board(7);
	object.mark_board(5);
	object.mark_board(4);
	object.mark_board(9);
	object.mark_board(8);
	object.mark_board(6);
	object.mark_board(2);
	object.mark_board(3);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify win from diagonally top right") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(3);
	object.mark_board(1);
	object.mark_board(5);
	object.mark_board(4);
	object.mark_board(7);
	object.mark_board(9);
	object.mark_board(8);
	object.mark_board(6);
	object.mark_board(2);
	REQUIRE(object.game_over() == true);
}

TEST_CASE("Verify Tic_tac_toe game_over") {
	Tic_tac_toe object;
	object.start_game("X");
	object.mark_board(1);
	object.mark_board(3);
	object.mark_board(7);
	object.mark_board(9);
	object.mark_board(6);
	object.mark_board(4);
	object.mark_board(5);
	object.mark_board(2);
	object.mark_board(8);
	REQUIRE(object.get_winner() == "C");
}

