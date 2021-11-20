#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h

#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

using std::string; using std::vector; using std::unique_ptr;

class Tic_tac_toe_manager {
    //private attributes
    private: 

        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        vector<unique_ptr<Tic_tac_toe>> games;
        Tic_tac_toe_data data;

        //private member functions
        void update_winner_count(string winner);
    

    //public member functions
    public: 

        void save_game(unique_ptr<Tic_tac_toe>& obj);
        friend ostream& operator<<(std::ostream& out, Tic_tac_toe_manager& manager);
        void get_winner_total(int& o, int& w, int& t);

        //constructor
        Tic_tac_toe_manager() = default;

        Tic_tac_toe_manager(Tic_tac_toe_data& d) {
            data = d;
            games = d.get_games();
            for (const auto& game : games) {
                this->update_winner_count(game->get_winner());
            }
        }

        //destructor
        ~Tic_tac_toe_manager() {
            data.save_games(games);
        };

};

#endif