#include <iostream>
#include <string>
#include <vector>

using std::string; using std::vector;

class Tic_tac_toe {
    //private attributes
    private: 

        string player;
        vector<string> pegs{" "," ", " ", " ", " ", " ", " ", " ", " "};

        //private member functions
        void set_next_player();
        bool check_board_full();
        void clear_board();

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

};