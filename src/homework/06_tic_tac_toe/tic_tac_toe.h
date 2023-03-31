//h
#include <iostream>
#include <string>
#include <vector>


class TicTacToe
{
    public:
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        void display_board() const;
        bool game_over();
        std::string get_winner();
    
    private:
        void set_next_player();
        bool check_board_full() const;
        void clear_board();
        std::string player;
        std::vector<std::string> pegs = {9, " "};
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
        std::string winner;
};