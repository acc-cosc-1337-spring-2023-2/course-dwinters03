//cpp
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

using namespace std;


void TicTacToe::start_game(string first_player)
{
    if (first_player != "X" && first_player != "O")
    {
        cout << "Invalid Input. Please enter X or O only.";
    }
    else
    {
        player = first_player;
        clear_board();
    }
}
void TicTacToe::mark_board(int position)
{
    if (pegs[position - 1] == "X" || pegs[position - 1] == "O")
    {
        cout << "Error: This place is already occupied. Please enter a valid position.\n";
    }
    else
    {
        pegs[position = position-1] = player;
        set_next_player();
    }
}

string TicTacToe::get_player() const 
{
    return player;
}

void TicTacToe::display_board() const
{
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j <3; j++)
        {
            cout << pegs.at(i * 3 + j);
            if (j < 2)
            {
                cout << " | ";
            }

        }
        cout << endl;
        if (i < 2)
        {
            cout << "---------" << endl;
        }
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}

void TicTacToe::clear_board()
{
    for(int i = 0; i < int(pegs.size()); i++)
    {
        pegs.at(i) = " ";
    }
}

bool TicTacToe::check_board_full() const
{
    for(int i = 0; i < int(pegs.size()); i++)
    {
        if(pegs[i] != "X" && pegs[i] != "O")
        {
            return false;
        }
    }
    return true;
}

bool TicTacToe::game_over() const
{
    return check_board_full();
}