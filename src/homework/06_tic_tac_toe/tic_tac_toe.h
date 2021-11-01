#include <iostream>
#include <string>
#include <vector>

using std::string; using std::vector;

class Tic_tac_toe {
    //private attributes
    private: 

        string player;
        string winner;
        vector<string> pegs{" "," ", " ", " ", " ", " ", " ", " ", " "};

        //private member functions
        void set_next_player();
        bool check_board_full();
        void clear_board();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
    

    //public member functions
    public: 

        void start_game(string first_player);
        string get_player() const
        {
            return player;
        }
        void mark_board(int position);
        void display_board() const;
        bool game_over();
        string get_winner()
        {
            return winner;
        }

};