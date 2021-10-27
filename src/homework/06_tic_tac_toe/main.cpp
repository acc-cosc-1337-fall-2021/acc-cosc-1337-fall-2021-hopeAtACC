#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::vector; using std::endl;

int main() 
{
	//create object of Tic_tac_toe class
	Tic_tac_toe game;

	string first_player;
	int pegChecker[9] = {0};//this will check for repeated positions later
	int position;
	char choice = 'Y';

	do{
		
		do
		{
			cout << "Choose X or O to start Game: ";
			cin >> first_player;

		} while (first_player != "X" && first_player != "O");//keep asking user question if they don't provide an X or O

		game.start_game(first_player);//start game with user X or O
		
		while(game.game_over() == false)
		{
			do
			{
				cout << "Choose a board position from 1 - 9: ";
				cin >> position;

			} while (position > 9 || position < 1);//keep asking user question if they don't provide an integer from 1-9

			//keep asking user to type a position if they type one already in pegChecker array
			//if they already did that index will have a value of 1
			while (pegChecker[position - 1] == 1) {
				cout << "That position has already been chosen.  Please pick a new one: ";
				cin >> position;
			}
		
			game.mark_board(position);

			//change index position - 1 from a zero to a one in pegChecker array
			pegChecker[position - 1] = 1;
			
			game.display_board();
			
		}
		//clears out array for the next round by filling it with zeroes again
		std::fill( std::begin(pegChecker), std::end(pegChecker), 0 );
		if (game.get_winner() == "X" || game.get_winner() == "O") {
			cout << "Congratulations, " << game.get_winner() << ", you won!" << endl;
		}
		else {
			cout << "It's a tie!" << endl;
		}

		cout << "Would you like to play again? ";
		cin >> choice;

	} 
	while (choice == 'Y' || choice == 'y');
	

	return 0;
}