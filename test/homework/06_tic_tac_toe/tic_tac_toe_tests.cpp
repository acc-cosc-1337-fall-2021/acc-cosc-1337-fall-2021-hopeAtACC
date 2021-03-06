#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "catch.hpp"

TEST_CASE("Verify first player for X") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();
	object->start_game("X");
	REQUIRE(object->get_player() == "X");
}

TEST_CASE("Verify first player for O") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();
	object->start_game("O");
	REQUIRE(object->get_player() == "O");
}

TEST_CASE("Verify win by first column") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	object->mark_board(5);
	REQUIRE(object->game_over() == true);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by second column") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(3);
	REQUIRE(object->game_over() == true);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by third column") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	object->mark_board(5);
	REQUIRE(object->game_over() == true);
	object->mark_board(4);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by first row") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(3);
	REQUIRE(object->game_over() == true);
	object->mark_board(5);
	REQUIRE(object->game_over() == true);
	object->mark_board(4);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by second row") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(2);
	REQUIRE(object->game_over() == true);
	object->mark_board(3);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by third row") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(8);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	object->mark_board(5);
	REQUIRE(object->game_over() == true);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(2);
	REQUIRE(object->game_over() == true);
	object->mark_board(3);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win from diagonally top left") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(2);
	REQUIRE(object->game_over() == true);
	object->mark_board(3);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win from diagonally top right") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(2);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify Tic_tac_toe game_over") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(1);
	object->mark_board(3);
	object->mark_board(7);
	object->mark_board(9);
	object->mark_board(6);
	object->mark_board(4);
	object->mark_board(5);
	object->mark_board(2);
	object->mark_board(8);
	REQUIRE(object->get_winner() == "C");
}

TEST_CASE("Verify Tic_tac_toe_manager get_winner_total for tie") {
	Tic_tac_toe_manager manager;
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();
	int o = 0;
	int x = 0;
	int t = 0;
	object->start_game("X");
	object->mark_board(1);
	object->mark_board(3);
	object->mark_board(7);
	object->mark_board(9);
	object->mark_board(6);
	object->mark_board(4);
	object->mark_board(5);
	object->mark_board(2);
	object->mark_board(8);
	REQUIRE(object->get_winner() == "C");
	manager.save_game(object);
	manager.get_winner_total(o, x, t);
	REQUIRE(o == 0);
	REQUIRE(x == 0);
	REQUIRE(t == 1);
}

TEST_CASE("Verify Tic_tac_toe_manager get_winner_total for x") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("X");
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(2);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
	
	Tic_tac_toe_manager manager;

	int o = 0;
	int x = 0;
	int t = 0;

	manager.save_game(object);
	manager.get_winner_total(o, x, t);
	REQUIRE(o == 0);
	REQUIRE(x == 1);
	REQUIRE(t == 0);
	
}

TEST_CASE("Verify Tic_tac_toe_manager get_winner_total for o") {
	
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_3>();

	object->start_game("O");
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == true);
	object->mark_board(9);
	REQUIRE(object->game_over() == true);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	object->mark_board(6);
	REQUIRE(object->game_over() == true);
	object->mark_board(2);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "O");
	
	Tic_tac_toe_manager manager;

	int o = 0;
	int x = 0;
	int t = 0;

	manager.save_game(object);
	manager.get_winner_total(o, x, t);
	REQUIRE(o == 1);
	REQUIRE(x == 0);
	REQUIRE(t == 0);
}

/*Tests for 4x4 Board*/

TEST_CASE("Verify first player for X 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();
	object->start_game("X");
	REQUIRE(object->get_player() == "X");
}

TEST_CASE("Verify first player for O 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();
	object->start_game("O");
	REQUIRE(object->get_player() == "O");
}

TEST_CASE("Verify win by first column 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(13);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by second column 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(10);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(14);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by third column 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(11);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(15);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by fourth column 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(8);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(12);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(16);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by first row 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by second row 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(2);
	REQUIRE(object->game_over() == false);
	object->mark_board(8);
	REQUIRE(object->game_over() == true);
	
	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by third row 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(10);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(11);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(12);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win by fourth row 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(13);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(14);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(15);
	REQUIRE(object->game_over() == false);
	object->mark_board(5);
	REQUIRE(object->game_over() == false);
	object->mark_board(16);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win from diagonally top left 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(6);
	REQUIRE(object->game_over() == false);
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(11);
	REQUIRE(object->game_over() == false);
	object->mark_board(8);
	REQUIRE(object->game_over() == false);
	object->mark_board(16);
	REQUIRE(object->game_over() == true);


	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify win from diagonally top right 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(10);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(13);
	REQUIRE(object->game_over() == true);

	REQUIRE(object->get_winner() == "X");
}

TEST_CASE("Verify Tic_tac_toe game_over 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(1);
	object->mark_board(3);
	object->mark_board(2);
	object->mark_board(4);
	object->mark_board(7);
	object->mark_board(6);
	object->mark_board(8);
	object->mark_board(5);
	object->mark_board(9);
	object->mark_board(10);
	object->mark_board(11);
	object->mark_board(12);
	object->mark_board(13);
	object->mark_board(14);
	object->mark_board(15);
	object->mark_board(16);

	REQUIRE(object->get_winner() == "C");
}

TEST_CASE("Verify Tic_tac_toe_manager get_winner_total for tie 4x4") {
	Tic_tac_toe_manager manager;
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();
	int o = 0;
	int x = 0;
	int t = 0;
	object->start_game("X");
	object->mark_board(1);
	object->mark_board(3);
	object->mark_board(2);
	object->mark_board(4);
	object->mark_board(7);
	object->mark_board(6);
	object->mark_board(8);
	object->mark_board(5);
	object->mark_board(9);
	object->mark_board(10);
	object->mark_board(11);
	object->mark_board(12);
	object->mark_board(13);
	object->mark_board(14);
	object->mark_board(15);
	object->mark_board(16);
	REQUIRE(object->get_winner() == "C");
	manager.save_game(object);
	manager.get_winner_total(o, x, t);
	REQUIRE(o == 0);
	REQUIRE(x == 0);
	REQUIRE(t == 1);
}
/*
1    2    3    4
5    6    7    8
9   10   11    12
13  14   15    16
*/
TEST_CASE("Verify Tic_tac_toe_manager get_winner_total for x 4x4") {
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("X");
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(10);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(13);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "X");
	
	Tic_tac_toe_manager manager;

	int o = 0;
	int x = 0;
	int t = 0;

	manager.save_game(object);
	manager.get_winner_total(o, x, t);
	REQUIRE(o == 0);
	REQUIRE(x == 1);
	REQUIRE(t == 0);
	
}

TEST_CASE("Verify Tic_tac_toe_manager get_winner_total for o 4x4") {
	
	std::unique_ptr<Tic_tac_toe> object = std::make_unique<Tic_tac_toe_4>();

	object->start_game("O");
	object->mark_board(4);
	REQUIRE(object->game_over() == false);
	object->mark_board(1);
	REQUIRE(object->game_over() == false);
	object->mark_board(7);
	REQUIRE(object->game_over() == false);
	object->mark_board(3);
	REQUIRE(object->game_over() == false);
	object->mark_board(10);
	REQUIRE(object->game_over() == false);
	object->mark_board(9);
	REQUIRE(object->game_over() == false);
	object->mark_board(13);
	REQUIRE(object->game_over() == true);
	REQUIRE(object->get_winner() == "O");
	
	Tic_tac_toe_manager manager;

	int o = 0;
	int x = 0;
	int t = 0;

	manager.save_game(object);
	manager.get_winner_total(o, x, t);
	REQUIRE(o == 1);
	REQUIRE(x == 0);
	REQUIRE(t == 0);
}



