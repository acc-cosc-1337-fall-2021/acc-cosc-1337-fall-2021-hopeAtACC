#ifndef tic_tac_toe_manager.h
#define tic_tac_toe_manager.h

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

using std::string; using std::vector;

class Tic_tac_toe_manager {
    //private attributes
    private: 

        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        vector<Tic_tac_toe> games;

        //private member functions
        void update_winner_count(string winner);
    

    //public member functions
    public: 

        void save_game(Tic_tac_toe obj);
        friend ostream& operator<<(std::ostream& out, const Tic_tac_toe_manager& manager);
        void get_winner_total(int& o, int& w, int& t);

};

#endif