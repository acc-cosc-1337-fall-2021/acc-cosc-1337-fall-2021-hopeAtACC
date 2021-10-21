#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::vector; using std::endl;

int main() 
{
	Tic_tac_toe game;

	string first_player;
	int position;
	char choice = 'Y';

	do{
			
		do
		{
			cout << "Choose X or O to start Game: ";
			cin >> first_player;

		} while (first_player != "X" && first_player != "O");

		game.start_game(first_player);
				
		while(game.game_over() == false)
		{
			do
			{
				cout << "Choose a board position from 1 - 9: ";
				cin >> position;

			} while (position > 9 || position < 1);


			game.mark_board(position);

			game.display_board();

		}

		cout << "Would you like to play again? ";
		cin >> choice;

	} 
	while (choice == 'Y' || choice == 'y');
	

	return 0;
}