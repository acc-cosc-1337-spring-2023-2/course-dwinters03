#include <iostream>
#include <string>
#include <vector>
#include <math.h>
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

/*void TicTacToe::display_board() const
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
}*/

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
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
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

ostream& operator<<(ostream& out, const TicTacToe& game)
{
    int pegnum = sqrt(game.pegs.size());
    for (int i = 0; i < pegnum; i++)
    {
        for(int j = 0; j < pegnum; j++)
        {
            cout << game.pegs.at(i * pegnum + j);
            if (j < (pegnum-1))
            {
                cout << " | ";
            }

        }
        cout << endl;
        if (i < (pegnum-1))
        {
            if (pegnum == 3)
            {
                cout << "---------" << endl;
            }
            else
            {
                cout << "--------------" << endl;
            }
        }
    }
    out << endl;
    return out;
}

istream& operator>>(istream& in, TicTacToe& game)
{
    int position;
    bool valid_position = false;
    while (valid_position == false)
    {
        cout << "What position would you like to fill?\n";
        cin >> position;
        if (position > 0 && position < (game.pegs.size() + 1))
        {
            valid_position = true;
            break;
        }
        else
        {
            cout << "\nInvalid Position. Please select a position of 1 through 9\n";
        }
    }
    
    //cout << "What position would you like to fill?\n";
    //cin >> position;
	game.mark_board(position);
    return in;
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& games)
{
    update_winner_count(games -> get_winner());
    this->games.push_back(std::move(games));
}

ostream& operator<<(std::ostream& out, const TicTacToeManager& manager) 
{
    for (auto& game : manager.games)
    {
        out << *game << endl;
    }
    out << "X wins: " << manager.x_win << "\n";
    out << "O Wins: " << manager.o_win << "\n";
    out << "Ties: " << manager.ties << "\n";
    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& w, int& t)
{
    for (int i = 0; i < games.size(); i++)
    {
        TicTacToe& game = *games[i];
        if(game.get_winner() == "X")
        {
            w++;
        }
        else if (game.get_winner() == "O")
        {
            o++;
        }
        else if (game.get_winner() == "C")
        {
            t++;
        }
    }
}

void TicTacToeManager::update_winner_count(string winner)
{
    //TicTacToe tictactoe;
    //TicTacToe& game = tictactoe; 
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}
