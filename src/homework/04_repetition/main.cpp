//write include statements
#include <iostream>
#include <string>
#include "dna.h"
//write using statements

using std::cout;
using std::cin;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int numresponse;

	do
	{
		cout << "1 - Factorial\n2- Greatest Common Divisor\n3 - Exit\n";
		cin >> numresponse;

		switch(numresponse)
		{
			case 1:
				int num;
				cout << "Enter the number you would like to see the factorial for.\n";
				cin >> num;
				cout << factorial(num);
				cout << "\n";
				return 0;
				break;

			case 2:
				int num1;
				int num2;
				cout << "Enter the two numbers you would like to see the GCD for.\nNumber 1:\n";
				cin >> num1;
				cout << "\nNumber 2:\n";
				cin >> num2;
				cout << "\n";
				cout << gcd(num1, num2);
				cout << "\n";
				return 0;
				break;

			case 3:
				char confirm;
				cout << "Are you sure you want to quit? (Y, N)";
				cin >> confirm;
				if (confirm == 'Y')
				{
					cout << "Goodbye\n";
				}
				else
				{
					numresponse = 0;
				}
				break;

			default:
				cout << "Invalid Input";
				break;
		}
	}	
	while (numresponse != 3);
	return 0;
}