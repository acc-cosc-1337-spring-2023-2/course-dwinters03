#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

#include "tic_tac_toe.h"
#include <vector>
#include <string>
#include <memory>
#include <iostream>

class TicTacToe;

class TicTacToeData
{
    public:
        TicTacToeData(const std::string& filename);
        //std::vector<const std::string&> filename;
        void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
        std::vector<std::unique_ptr<TicTacToe>> get_games();

    private:
};

#endif