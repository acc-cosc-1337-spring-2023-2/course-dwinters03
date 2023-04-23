#include <vector>
#include <fstream>
#include <memory>
#include <string>
#include <iostream>
#include <math.h>
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


using namespace std;

int main() 
{
	TicTacToeData data(string("filename.txt"));
	TicTacToeManager manager(data);
	//unique_ptr<TicTacToe> board = make_unique<TicTacToe>();
	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe3>();
	unique_ptr<TicTacToe> game4 = make_unique<TicTacToe4>();
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
			cout << "\nWould you like to play on a 3x3 grid or a 4x4 grid?\n1.3x3 Grid\n2. 4x4 Grid\n";
			cin >> menu_variable;			
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

			if (menu_variable == 1)
			{
				game3->start_game(player);
				do
				{
					cin >> *game3;
					cout << "\n";
					cout << *game3 << "\n";
				}
				while (game3->game_over() == false);

				if (game3->get_winner() == "C" )
				{
					cout << "\nTIE!\n";
				}
				else
				{
					cout << "\n" << game3 -> get_winner() << " wins!!\n";
				}
				manager.save_game(game3);
        		manager.get_winner_total(o, x, t); //don't remove, makes infinite loop happen
			}
			else if (menu_variable == 2)
			{
				game4 -> start_game(player);
				do
				{
					cin >> *game4;
					cout << "\n";
					cout << *game4 << "\n";
				}
				while (game4 -> game_over() == false);

				if (game4 -> get_winner() == "C" )
				{
					cout << "\nTIE!\n";
				}
				else
				{
					cout << "\n" << game4 -> get_winner() << " wins!!\n";
				}
				manager.save_game(game4);
        		manager.get_winner_total(o, x, t); //don't remove, makes infinite loop happen
			}
			else
			{
				cout << "Invalid input.";
			}
		}
	}
	while (quit != true);

	return 0;
}
