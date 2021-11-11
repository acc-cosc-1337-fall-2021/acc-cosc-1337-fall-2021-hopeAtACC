#include "tic_tac_toe_3.h"

using std::string; using std::vector; using std::ostream; using std::istream; using std::endl; using std::cout;


bool Tic_tac_toe_3::check_column_win()
{
    for (int i = 0; i<= 8; i++)
    {
        if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
        {
            return true;
        } 
        else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
        {
            return true;
        }
        else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
        {
            return true;
        }
        else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
        {
            return true;
        } 
        else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
        {
            return true;
        }
        else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
        {
            return true;
        }
    }
    return false;
}

bool Tic_tac_toe_3::check_row_win()
{
    for (int i = 0; i<= 8; i++)
    {
        if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
        {
            return true;
        } 
        else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
        {
            return true;
        }
        else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
        {
            return true;
        }
        else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
        {
            return true;
        } 
        else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
        {
            return true;
        }
        else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
        {
            return true;
        }
    }
    return false;
}

bool Tic_tac_toe_3::check_diagonal_win()
{
    for (int i = 0; i<= 8; i++)
    {
        if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
        {
            return true;
        } 
        else if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
        {
            return true;
        }
        else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
        {
            return true;
        }
        else if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
        {
            return true;
        }
    }
    return false;
}
/*
    ostream& operator<<(ostream& out, const unique_ptr<Tic_tac_toe>& game) {

        string board;

        for (int i = 0; i <= 8; i += 3) {
            board += game->pegs[i] + "|" + game->pegs[i+1] + "|" + game->pegs[i+2] + "\n";
        }

        out << endl << board << endl;

        return out;
    };
    
    istream& operator>>(istream& in, const unique_ptr<Tic_tac_toe>& game) {

        int position;

		do {
				cout << "Choose a board position from 1 - 9: ";
				in >> position;

		} while (position > 9 || position < 1);//keep asking user question if they don't provide an integer from 1-9


		while (game->pegs[position - 1] != " ") {

			cout << "That position has already been chosen.  Please pick a new one: ";
			in >> position;
		}

        game->mark_board(position);

        return in;
    };
*/
