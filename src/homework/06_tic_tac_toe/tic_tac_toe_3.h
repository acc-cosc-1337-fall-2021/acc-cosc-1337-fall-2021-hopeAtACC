#ifndef tic_tac_toe_3_h
#define tic_tac_toe_3_h

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

using std::unique_ptr;

class Tic_tac_toe_3 : public Tic_tac_toe {

    private:

    bool check_column_win() override;
    bool check_diagonal_win() override;
    bool check_row_win() override;

    public:

    Tic_tac_toe_3() : Tic_tac_toe(3) {

    }

};

#endif