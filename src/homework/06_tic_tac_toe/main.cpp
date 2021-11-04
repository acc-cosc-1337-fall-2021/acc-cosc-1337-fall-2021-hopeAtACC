#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; using std::vector; using std::endl;

int main() 
{

	Tic_tac_toe_manager manager;

	string first_player;
	char choice = 'Y';
	int o;
	int x;
	int t;

	do{

		Tic_tac_toe game;

		do
		{
			cout << "Choose X or O to start Game: ";
			cin >> first_player;

		} while (first_player != "X" && first_player != "O");//keep asking user question if they don't provide an X or O

		game.start_game(first_player);//start game with user X or O
		
		while(game.game_over() == false)
		{

			cin >> game;
			cout << game;
			
		}

		manager.save_game(game);

		manager.get_winner_total(o, x, t);
		
		if (game.get_winner() == "X" || game.get_winner() == "O") {
			cout << endl << "Congratulations, " << game.get_winner() << ", you won!" << endl;
		}
		else {
			cout << "It's a tie!" << endl;
		}

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