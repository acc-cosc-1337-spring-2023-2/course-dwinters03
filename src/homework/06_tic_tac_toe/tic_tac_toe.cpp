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

bool TicTacToe::game_over()
{
    if((check_column_win() == true) || (check_row_win() == true) || (check_diagonal_win() == true))
    {
        set_winner();
        return true;
    }
    else if((check_column_win() == false && check_row_win() == false && check_diagonal_win() == false) && check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    if((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O"))
    {
        return true;
    }
    else if ((pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") || (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O"))
    {
        return true;
    }
    else if ((pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") || (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"))
    {
        return true;
    }
    else if ((pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"))
    {
        return true;
    }
    else if ((pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    else if ((pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X") || (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}
