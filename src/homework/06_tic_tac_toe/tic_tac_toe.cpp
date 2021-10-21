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
    clear_board();
    player = first_player;    
}

bool Tic_tac_toe::game_over()
{
    return check_board_full();
}

void Tic_tac_toe::mark_board(int position)
{
    int w = position - 1;
    pegs[w] = player;
    set_next_player();
}

void Tic_tac_toe::display_board() const {

    for (int i = 0; i <= 8; i += 3)
    {
        cout <<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2] << endl;
    }

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