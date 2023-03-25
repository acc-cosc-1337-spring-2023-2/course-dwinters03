#include <iostream>
#include <string>
#include "tic_tac_toe.h"

using namespace std;

int main() 
{
	TicTacToe tictactoe;
	string player;
	int position;
	int menu_variable;
	bool valid_player;
	bool quit = false;
	do
	{
		cout << "Welcome to the TicTacToe Program!\n1. Play Tic Tac Toe\n2. Quit\n";
		cin >> menu_variable;
		if (menu_variable == 2)
		{
			quit = true;
		}
		else
		{
			do
			{
				cout << "Will you be playing as X or O?\n";
				cin >> player;
				if (player != "X" && player != "O")
				{
					valid_player = false;
				}
				else
				{
					valid_player = true;
				}
			
			} 
			while (valid_player != true);
		
			tictactoe.start_game(player);
			do
			{
				cout << "What position would you like to fill?\n";
				cin >> position;
				tictactoe.mark_board(position);
				tictactoe.display_board();
			}
			while (tictactoe.game_over() == false);
		}
		
	} 
	while (quit != true);
	
	
	
	return 0;
}