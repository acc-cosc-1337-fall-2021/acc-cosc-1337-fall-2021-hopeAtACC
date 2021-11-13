#include "tic_tac_toe.h"
#include <memory>

using std::cout; using std::endl; using std::unique_ptr;

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

    for (int i = 0; i <= pegs.size() - 1; i++)
    {
        if (pegs[i] != " ")
        {
            counter++;
        }
    }
    return counter == pegs.size() - 1;
}

void Tic_tac_toe::clear_board()
{
    for (int i = 0; i <= pegs.size() - 1; i++)
    {
        pegs[i] = " ";
    }
}

bool Tic_tac_toe::check_column_win()
{
    for (int i = 0; i<= pegs.size() - 1; i++)
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

bool Tic_tac_toe::check_row_win()
{
    for (int i = 0; i<= pegs.size() - 1; i++)
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

bool Tic_tac_toe::check_diagonal_win()
{
    for (int i = 0; i<= pegs.size() - 1; i++)
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

    ostream& operator<<(ostream& out, const unique_ptr<Tic_tac_toe>& game) {

        string board;

        if (game->pegs.size() == 9) {
            
            for (int i = 0; i <= 8; i += 3) {
            board += game->pegs[i] + "|" + game->pegs[i+1] + "|" + game->pegs[i+2] + "\n";
            }

        } else if (game ->pegs.size() == 16) {
            for (int i = 0; i <= 15; i += 4) {
            board += game->pegs[i] + "|" + game->pegs[i+1] + "|" + game->pegs[i+2] + "|" + game->pegs[i+3] + "\n";
        }
    }
        out << endl << board << endl;
        return out;
};
    
    istream& operator>>(istream& in, const unique_ptr<Tic_tac_toe>& game) {

        int position;

        if (game->pegs.size() == 9) {

            do {
                    cout << "Choose a board position from 1 - 9: ";
                    in >> position;

            } while (position > 9 || position < 1);//keep asking user question if they don't provide an integer from 1-9


            while (game->pegs[position - 1] != " ") {

                cout << "That position has already been chosen.  Please pick a new one: ";
                in >> position;
            }

            game->mark_board(position);

        } else if (game->pegs.size() == 16) {
            
            int position;

            do {
                    cout << "Choose a board position from 1 - 16: ";
                    in >> position;

            } while (position > 16 || position < 1);//keep asking user question if they don't provide an integer from 1-9


            while (game->pegs[position - 1] != " ") {

                cout << "That position has already been chosen.  Please pick a new one: ";
                in >> position;
            }

            game->mark_board(position);

        }

        return in;
};
