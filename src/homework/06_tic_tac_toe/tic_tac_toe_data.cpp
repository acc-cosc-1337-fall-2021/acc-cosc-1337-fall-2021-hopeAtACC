#include "tic_tac_toe_data.h"


using std::unique_ptr; using std::vector; using std::ifstream; using std::ofstream; using std::string; using std::getline; using std::make_unique;

void save_games(const vector<unique_ptr<Tic_tac_toe>>& games) {
        
        //open file for writing for each vector of Tic_tac_toe
        ofstream fout;
        fout.open("myFile.txt");

        for (const auto& game : games) {
            
            vector<string> pegs = game->get_pegs();

            //for each char in string write char to file
            //end char in string loop
           for (string c : pegs) {
               fout << c;
           }
            //write get winner of game to file
             //write a new line
            fout << game->get_winner() << "\n";
            //end vector of Tic_tac_toe loop
        };

        fout.close();
}

vector<unique_ptr<Tic_tac_toe>> get_games() {

    //Create vector unique ptr of TicTacToe boards
    vector<unique_ptr<Tic_tac_toe>> boards;

    //Open File
    ifstream fin;
    fin.open("myFile.txt");

    //Create a string line 
    string line;   

    //while getline(read_file, line)// get a line from file
    while (getline(fin, line)) {
        
        //Create vector<string> pegs 
        vector<string> pegs;

        //for each ch in line - 1 (read only first 9 or 16 characters) 
        for (char c : line.substr(0,line.length() - 1)) {

        //Create a string with ch. Example string(1, ch)
        //Add the string to vector of string
            pegs.push_back(string(1, c));

        }

        //Create a string to get the winner(last item in the vector of string)
        string winner = string(1, line[line.length() - 1]);

        //Create unique ptr of TicTacToe board
		unique_ptr<Tic_tac_toe> game;

        if (pegs.size() == 9) {
            //if vector of string size 9
            //create board of TicTacToe3 using make_unique
            //with vector of pegs and winner as parameter            
            game = make_unique<Tic_tac_toe_3>(pegs, winner);


        } else if (pegs.size() == 16) {
            //else if size 16
            //create board of TicTacToe4 using make_unique
            //with vector of pegs and winner as parameter
            game = make_unique<Tic_tac_toe_3>(pegs, winner);  
        }

        //add the board to the boards vector
        boards.push_back(move(game));
    }

    //close the file
    fin.close();

    //return the boards vector
    return boards;

};