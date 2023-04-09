#include <iostream>
#include <string>
#include "tic_tac_toe.h"

using namespace std;



int main() 
{
	TicTacToe tictactoe;
	TicTacToeManager manager;
	string player;
	int position;
	int x = 0;
	int o = 0;
	int t = 0;
	int menu_variable;
	bool valid_player;
	bool quit = false;

	cout << "Welcome to the TicTacToe Program!\n";

	do
	{
		cout << "\n1. Play Tic Tac Toe\n2. View Game History\n3. Quit\n";
		cin >> menu_variable;
		if (menu_variable == 3)
		{
			quit = true;
		}
		else if (menu_variable == 2)
		{
			cout << manager;
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
				cin >> tictactoe;
				cout << "\n";
				cout << tictactoe << "\n";
			}
			while (tictactoe.game_over() == false);

			if (tictactoe.get_winner() == "C" )
			{
				cout << "\nTIE!\n";
			}
			else
			{
				cout << "\n" << tictactoe.get_winner() << " wins!!\n";
			}
			manager.save_game(tictactoe);
        	manager.get_winner_total(o, x, t); //don't remove, makes infinite loop happen
		}
		//manager.save_game(tictactoe);
        //manager.get_winner_total(o, x, t); //don't remove, makes infinite loop happen
		
	} 
	while (quit != true);
	
	
	
	return 0;
}

