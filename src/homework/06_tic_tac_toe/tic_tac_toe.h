#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "tic_tac_toe_data.h"


class TicTacToeData;

class TicTacToe
{
    public:
        void start_game(std::string first_player);
        void mark_board(int position);
        std::string get_player() const;
        bool game_over();
        std::string get_winner();
        friend std::ostream& operator<<(std::ostream& os, const TicTacToe& game);
        friend std::istream& operator>>(std::istream& is, TicTacToe& game);
        TicTacToe(int size) : pegs(size * size, " ") {}
        TicTacToe(std::vector<std::string> p, std::string win) {}
        std::vector<std::string> get_pegs() const;

    
    private:
        void set_next_player();
        bool check_board_full() const;
        void clear_board();
        std::string player;
        void set_winner();
        std::string winner;

    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
};

class TicTacToeManager
{
    public:
        void save_game(std::unique_ptr<TicTacToe>& games);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& o, int& w, int& t);
        TicTacToeManager() = default;
        TicTacToeManager(TicTacToeData& d);
        ~TicTacToeManager();

    private:
        std::vector<std::unique_ptr<TicTacToe>> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        std::unique_ptr<TicTacToeData> data;
        void update_winner_count(std::string winner);
};

#endif
