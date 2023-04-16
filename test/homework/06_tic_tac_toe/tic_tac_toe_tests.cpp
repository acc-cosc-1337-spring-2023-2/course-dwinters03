#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"


/*using namespace std;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TicTacToe tictactoe;
string player;

TEST_CASE("Test First Player Set To X")
{
	tictactoe.start_game("X");
	REQUIRE(tictactoe.get_player() == "X");
}

TEST_CASE("Test First Player Set To O")
{
	tictactoe.start_game("O");
	REQUIRE(tictactoe.get_player() == "O");
}

TEST_CASE("Test Win By First Column")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(1);
	tictactoe.mark_board(2);
	tictactoe.mark_board(4);
	tictactoe.mark_board(3);
	tictactoe.mark_board(7);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("Test Win By Second Column")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(2);
	tictactoe.mark_board(1);
	tictactoe.mark_board(5);
	tictactoe.mark_board(3);
	tictactoe.mark_board(8);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("Test Win By Third Column")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(3);
	tictactoe.mark_board(2);
	tictactoe.mark_board(6);
	tictactoe.mark_board(1);
	tictactoe.mark_board(9);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("Test Win By First Row")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(1);
	tictactoe.mark_board(7);
	tictactoe.mark_board(2);
	tictactoe.mark_board(8);
	tictactoe.mark_board(3);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("Test Win By Second Row")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(4);
	tictactoe.mark_board(7);
	tictactoe.mark_board(5);
	tictactoe.mark_board(8);
	tictactoe.mark_board(6);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("Test Win By Third Row")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(7);
	tictactoe.mark_board(1);
	tictactoe.mark_board(8);
	tictactoe.mark_board(2);
	tictactoe.mark_board(9);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("Test Win Diagonally From Top Left")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(1);
	tictactoe.mark_board(7);
	tictactoe.mark_board(5);
	tictactoe.mark_board(8);
	tictactoe.mark_board(9);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("Test Win Diagonally From Bottom Left")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(7);
	tictactoe.mark_board(2);
	tictactoe.mark_board(5);
	tictactoe.mark_board(8);
	tictactoe.mark_board(3);
	REQUIRE(tictactoe.game_over() == true);
}

TEST_CASE("game_over test 1")
{
	tictactoe.start_game("X");
	tictactoe.mark_board(2);
	tictactoe.mark_board(1);
	tictactoe.mark_board(3);
	tictactoe.mark_board(5);
	tictactoe.mark_board(4);
	tictactoe.mark_board(6);
	tictactoe.mark_board(9);
	tictactoe.mark_board(8);
	tictactoe.mark_board(7);
	tictactoe.game_over();
	REQUIRE(tictactoe.get_winner() == "C");
	
}*/