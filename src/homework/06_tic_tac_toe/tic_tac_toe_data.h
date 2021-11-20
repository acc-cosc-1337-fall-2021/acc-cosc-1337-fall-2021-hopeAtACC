#ifndef tic_tac_toe_data_h
#define tic_tac_toe_data_h

#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <fstream>

using std::unique_ptr; using std::vector; using std::unique_ptr;


class Tic_tac_toe_data {

    public:

    void save_games(const vector<unique_ptr<Tic_tac_toe>>& games);

    vector<unique_ptr<Tic_tac_toe>> get_games();

};

#endif