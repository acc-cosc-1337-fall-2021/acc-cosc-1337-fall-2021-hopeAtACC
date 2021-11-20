#ifndef tic_tac_toe_h
#define tic_tac_toe_h

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::string; using std::vector; using std::ostream; using std::istream; using std::unique_ptr;

class Tic_tac_toe {

    private: 

        string player;
        string winner;

        void set_next_player();
        bool check_board_full();
        void clear_board();
        void set_winner();
    
    protected: 

        vector<string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
    

    public: 

        void start_game(string first_player);
        string get_player() const
        {
            return player;
        }
        void mark_board(int position);
        bool game_over();
        string get_winner()
        {
            return winner;
        }
        //constructors
        Tic_tac_toe() {};

        Tic_tac_toe(int size) : pegs(size*size, " ") { };

        //add class constructor, initialize the pegs vector with p and initialize winner
        Tic_tac_toe(vector<string>& p, string& win) {
            pegs = p;
            winner = win;
        }

        //add const class function get_pegs that returns a vector of strings, return peg vector
        const vector<string> get_pegs() {
            return pegs;
        }

        friend ostream& operator<<(ostream& out, const unique_ptr<Tic_tac_toe>& game);
        friend istream& operator>>(istream& in, const unique_ptr<Tic_tac_toe>& game);
};

#endif