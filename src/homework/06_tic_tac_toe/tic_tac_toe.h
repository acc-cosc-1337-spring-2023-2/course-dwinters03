#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <iostream>
#include <string>
#include <vector>


class TicTacToe
{
    public:
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        //void display_board() const;
        bool game_over();
        std::string get_winner();
        friend std::ostream& operator<<(std::ostream& os, const TicTacToe& game);
        friend std::istream& operator>>(std::istream& is, TicTacToe& game);
    
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

class TicTacToeManager
{
    public:
        void save_game(TicTacToe b);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& o, int& w, int& t);

    private:
        std::vector <TicTacToe> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(std::string winner);
};

#endif
