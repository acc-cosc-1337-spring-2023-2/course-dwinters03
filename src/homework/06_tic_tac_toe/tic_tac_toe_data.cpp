#include <vector>
#include <fstream>
#include <memory>
#include <string>
#include <iostream>
#include <math.h>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

/*TicTacToeData::TicTacToeData(const std::string& filename)
{
    std::ifstream file("filename.txt");
    std::vector<std::string> pegs;

    if (file.is_open())
    {
        std::string line;
        std::string winner;
        getline(file, line);

        while(getline(file, line))
        {
            for(int c = 0; c < line.size() - 1; c++)
            {
                std::string peg(1, c);
                pegs.push_back(std::move(peg));;
            }

}*/

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream file("filename.txt", std::ios_base::app);
    if (file.is_open())
    {
        for (const auto& game : games)
        {
            int pegnum = sqrt(games.size() + 1);
            for (int i = 0; i < pegnum; i++)
            {
                for(int j = 0; j < pegnum; j++)
                {
                    file << game -> get_pegs().at(i * pegnum + j);
                }
            }   
        }
        file << *games[games.size() - 1];
        file << "\n";
        file.close();
    }
    else if (!file.is_open())
    {
        std::cout << "File did not open.";
    }
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    std::vector<std::unique_ptr<TicTacToe>> games;
    std::vector<std::unique_ptr<TicTacToe>> boards;
    std::vector<std::string> pegs;

    std::ifstream file("filename.txt");
    if (file.is_open())
    {
        std::string line;
        std::string winner;
        getline(file, line);

        while(getline(file, line))
        {
            for(int c = 0; c < line.size() - 1; c++)
            {
                std::string peg(1, c);
                pegs.push_back(std::move(peg));;
            }

            if (line.size() == 10)
            {
                winner = line[10];
            }
            else if (line.size() == 17)
            {
                winner = line[17];
            }
            
            if (boards.size() == 9)
            {
                std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe3> (pegs, winner);
                boards.push_back(std::move(board));
            }
            else if (boards.size() == 16)
            {
                std::unique_ptr<TicTacToe> board = std::make_unique<TicTacToe4> (pegs, winner);
                boards.push_back(std::move(board));
            }
        }
        file.close();
    }
    else
    {
        std::cout << "Error opening file.";
    }
    return boards;
}
