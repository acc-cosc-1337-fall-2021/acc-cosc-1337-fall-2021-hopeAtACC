#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h

#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

using std::string; using std::vector; using std::unique_ptr;

class Tic_tac_toe_manager {
    //private attributes
    private: 

        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        vector<unique_ptr<Tic_tac_toe>> games;

        //private member functions
        void update_winner_count(string winner);
    

    //public member functions
    public: 

        void save_game(unique_ptr<Tic_tac_toe>& obj);
        friend ostream& operator<<(std::ostream& out, Tic_tac_toe_manager& manager);
        void get_winner_total(int& o, int& w, int& t);

};

#endif