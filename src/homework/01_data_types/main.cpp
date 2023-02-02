//write include statements
#include <iostream>
#include <string>
#include "data_types.h"


//write namespace using statement for cout
using std::cout;
using std::cin;
using std::string;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cin >> num;
	int result;
	string spaceline = "\n";
	result = multiply_numbers(num);
	cout << result;
	cout << spaceline;

	int num1 = 4;
	result = multiply_numbers(num1);
	cout << result;
	cout << spaceline;
}