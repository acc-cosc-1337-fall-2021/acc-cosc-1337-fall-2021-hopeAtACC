#include "tic_tac_toe_4.h"

using std::string; using std::vector; using std::ostream; using std::istream; using std::endl; using std::cout; using std::unique_ptr;

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/

bool Tic_tac_toe_4::check_column_win()
{
    for (int i = 0; i<= 15; i++)
    {
        if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" && pegs[12] == "X")
        {
            return true;
        } 
        else if (pegs[1] == "X" && pegs[5] == "X" && pegs[9] == "X" && pegs[13] == "X")
        {
            return true;
        }
        else if (pegs[2] == "X" && pegs[6] == "X" && pegs[10] == "X" && pegs[14] == "X")
        {
            return true;
        }
        else if (pegs[3] == "X" && pegs[7] == "X" && pegs[11] == "X" && pegs[15] == "X")
        {
            return true;
        }
        
        else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" && pegs[12] == "O")
        {
            return true;
        } 
        else if (pegs[1] == "O" && pegs[5] == "O" && pegs[9] == "O" && pegs[13] == "O")
        {
            return true;
        }
        else if (pegs[2] == "O" && pegs[6] == "O" && pegs[10] == "O" && pegs[14] == "O")
        {
            return true;
        }
        else if (pegs[3] == "O" && pegs[7] == "O" && pegs[11] == "O" && pegs[15] == "O")
        {
            return true;
        }
    }
    return false;
}
/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool Tic_tac_toe_4::check_row_win()
{
    for (int i = 0; i<= 15; i++)
    {
        if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X")
        {
            return true;
        } 
        else if (pegs[4] == "X" && pegs[5] == "X" && pegs[6] == "X" && pegs[7] == "X")
        {
            return true;
        }
        else if (pegs[8] == "X" && pegs[9] == "X" && pegs[10] == "X"&& pegs[11] == "X")
        {
            return true;
        }
        else if (pegs[12] == "X" && pegs[13] == "X" && pegs[14] == "X"&& pegs[15] == "X")
        {
            return true;
        }
        else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O" && pegs[3] == "O")
        {
            return true;
        } 
        else if (pegs[4] == "O" && pegs[5] == "O" && pegs[6] == "O" && pegs[7] == "O")
        {
            return true;
        }
        else if (pegs[8] == "O" && pegs[9] == "O" && pegs[10] == "O" && pegs[11] == "O")
        {
            return true;
        }
        else if (pegs[12] == "O" && pegs[13] == "O" && pegs[14] == "O" && pegs[15] == "O")
        {
            return true;
        }
    }
    return false;
}
/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool Tic_tac_toe_4::check_diagonal_win()
{
    for (int i = 0; i<= 15; i++)
    {
        if (pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X")
        {
            return true;
        } 
        else if (pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X")
        {
            return true;
        }
        else if (pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O")
        {
            return true;
        }
        else if (pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O")
        {
            return true;
        }
    }
    return false;
}
/*
    ostream& operator<<(ostream& out, const unique_ptr<Tic_tac_toe>& game) {

        string board;

        for (int i = 0; i <= 15; i += 4) {
            board += game->pegs[i] + "|" + game->pegs[i+1] + "|" + game->pegs[i+2] + "|" + game->pegs[i+3] + "\n";
        }

        out << endl << board << endl;

        return out;
    };
    
    istream& operator>>(istream& in, const unique_ptr<Tic_tac_toe>& game) {

        int position;

		do {
				cout << "Choose a board position from 1 - 16: ";
				in >> position;

		} while (position > 16 || position < 1);//keep asking user question if they don't provide an integer from 1-16


		while (game->pegs[position - 1] != " ") {

			cout << "That position has already been chosen.  Please pick a new one: ";
			in >> position;
		}

        game->mark_board(position);

        return in;
    };
*/
