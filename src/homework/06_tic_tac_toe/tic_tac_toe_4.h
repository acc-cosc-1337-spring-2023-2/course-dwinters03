#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class TicTacToe4 : public TicTacToe 
{
    public:
        TicTacToe4() : TicTacToe(4) {}
        TicTacToe4(std::vector<std::string> p, std::string winner) : TicTacToe(p, winner) {}

    
    private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};

#endif