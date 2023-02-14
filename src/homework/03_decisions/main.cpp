//write include statements
#include <iostream>
#include <string>
#include "decisions.h"



using std::cout;
using std::cin;
using std::string;

int main() 
{
	int num;
	cout << "MAIN MENU\n1- Letter Grade Using If\n2- Letter Grade Using Switch\n3- Exit\n";
	cin >> num;
	menu(num);
}