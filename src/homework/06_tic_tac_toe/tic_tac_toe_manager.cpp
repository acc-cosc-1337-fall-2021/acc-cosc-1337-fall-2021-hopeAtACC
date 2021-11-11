#include "Tic_tac_toe_manager.h"
#include <memory>
#include <iostream>

using std::move; using std::make_unique; using std::unique_ptr;

void Tic_tac_toe_manager::save_game(unique_ptr<Tic_tac_toe>& obj) {
    
    update_winner_count(obj->get_winner());
    games.push_back(move(obj));

};


void Tic_tac_toe_manager::get_winner_total(int& o, int& x, int& t) {

    o = o_win;
    x = x_win;
    t = ties;

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

ostream& operator<<(std::ostream& out, Tic_tac_toe_manager& manager) {

    //Overload <<-Loop through vector of TicTacToe and call the TicTacToe cout overload.
    for (const auto& game : manager.games) {
        
        out << game;
    }

    return out;

};