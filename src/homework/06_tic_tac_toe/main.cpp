#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout; using std::cin; using std::vector; using std::endl; using std::unique_ptr; using std::make_unique;

int main() 
{

	Tic_tac_toe_manager manager;

	string first_player;
	char choice = 'Y';
	int o;
	int x;
	int t;

	int gameStyle;

	do {

		unique_ptr<Tic_tac_toe> game;

		do {

			cout << "Type 3 to play a 3x3 Tic Tac Toe Game or 4 to play a 4x4 game: ";
			cin >> gameStyle;
			if (gameStyle == 3) {
				game = make_unique<Tic_tac_toe_3>();
			} else if (gameStyle == 4) {
				game = make_unique<Tic_tac_toe_4>();

			}		

		} while(gameStyle != 3 && gameStyle != 4);

		do {
			cout << "Choose X or O to start Game: ";
			cin >> first_player;

		} while (first_player != "X" && first_player != "O");//keep asking user question if they don't provide an X or O

		game->start_game(first_player);//start game with user X or O
		
		while(game->game_over() == false)
		{

			cin >> game;
			cout << game;
			
		}
		
		if (game->get_winner() == "X" || game->get_winner() == "O") {
			cout << endl << "Congratulations, " << game->get_winner() << ", you won!" << endl;
		}
		else {
			cout << "It's a tie!" << endl;
		}

		manager.save_game(game);
		manager.get_winner_total(o, x, t);

		cout << endl << "Wins for X:  " << x << endl;
		cout << "Wins for O:  " << o << endl;
		cout << "Ties:  " << t << endl;

		cout << endl << "Would you like to play again? ";
		cin >> choice;

	} 
	while (choice == 'Y' || choice == 'y');


	cout << endl << "Game History: " << endl << manager << endl;
	

	return 0;
}