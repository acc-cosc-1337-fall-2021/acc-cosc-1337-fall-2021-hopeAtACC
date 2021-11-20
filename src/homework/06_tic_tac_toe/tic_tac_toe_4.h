#ifndef tic_tac_toe_4_h
#define tic_tac_toe_4_h

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

using std::unique_ptr;


class Tic_tac_toe_4 : public Tic_tac_toe {

    private:

    bool check_column_win() override;
    bool check_diagonal_win() override;
    bool check_row_win() override;

    public:

    Tic_tac_toe_4() : Tic_tac_toe(4) {

    }

    //add a new constructor 
    Tic_tac_toe_4(vector<string> p, string winner) : Tic_tac_toe(p, winner){
    
    }


};

#endif