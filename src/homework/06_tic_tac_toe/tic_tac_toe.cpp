#include "tic_tac_toe.h"

using std::cout; using std::endl;

void Tic_tac_toe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else if (player == "O")
    {
        player = "X";
    }
}

void Tic_tac_toe::start_game(string first_player)
{ 
    winner = "C";   
    clear_board();
    player = first_player;    
}

bool Tic_tac_toe::game_over()
{

    if (check_row_win() == true || check_column_win() == true || check_diagonal_win() == true) 
    {
        set_winner();
        return true;
    }

    return check_board_full();
}

void Tic_tac_toe::mark_board(int position)
{
    int w = position - 1;
    pegs[w] = player;
    set_next_player();
}

bool Tic_tac_toe::check_board_full()
{
    int counter = 0;

    for (int i = 0; i <= 8; i++)
    {
        if (pegs[i] != " ")
        {
            counter++;
        }
    }
    if (counter == 9) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

void Tic_tac_toe::clear_board()
{
    for (int i = 0; i <= 8; i++)
    {
        pegs[i] = " ";
    }
}

bool Tic_tac_toe::check_column_win()
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
        else 
        {
            return false;
        }
    }
    //a column wins with marked values 1, 4, 7 or 2, 5, 8, or 3, 6, 9 with O's or X's
}

bool Tic_tac_toe::check_row_win()
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
        else 
        {
            return false;
        }
    }
    //a row wins with marked values 1, 2, 3, or 4, 5, 6, or 7, 8, 9, with O'x or X's
}

bool Tic_tac_toe::check_diagonal_win()
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
        else 
        {
            return false;
        }
    }
    
    //a diagonal wins with marked values 1, 5, 9 or 7, 5, 3, with all O's or X's
}

void Tic_tac_toe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else if (player == "O")
    {
        winner = "X";
    }
    //if player is X set winner to O otherwise set winner to X
}

    ostream& operator<<(ostream& out, Tic_tac_toe& game) {

        string board;

        for (int i = 0; i <= 8; i += 3) {
            board += game.pegs[i] + "|" + game.pegs[i+1] + "|" + game.pegs[i+2] + "\n";
        }

        out << board;

        return out;
    };
    
    istream& operator>>(istream& in, Tic_tac_toe& game) {

        int position;

		do {
				cout << "Choose a board position from 1 - 9: ";
				in >> position;

		} while (position > 9 || position < 1);//keep asking user question if they don't provide an integer from 1-9


		while (game.pegs[position - 1] != " ") {

			cout << "That position has already been chosen.  Please pick a new one: ";
			in >> position;
		}

        game.mark_board(position);

        return in;
    };