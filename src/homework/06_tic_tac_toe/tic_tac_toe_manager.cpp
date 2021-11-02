#include "Tic_tac_toe_manager.h"

void Tic_tac_toe_manager::save_game(Tic_tac_toe obj) {

    games.push_back(obj);
    update_winner_count(obj.get_winner());

};


void Tic_tac_toe_manager::get_winner_total(int& o, int& w, int& t) {

};

void Tic_tac_toe_manager::update_winner_count(string winner) {

    if (winner == "X") {
        x_win++;
    } else if (winner == "O") {
        o_win++;
    } else if (winner == "C") {
        ties++;
    }
    
};

ostream& operator<<(std::ostream& out, const Tic_tac_toe_manager& manager) {

//Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload.    

};