#include <iostream>
#include <string>
#include "func.h"



using namespace std;

int main() 
{
	int menuresponse;
	string dna;

	do
	{
		cout << "MENU\n\n1- Get GC Content\n2- Get DNA Complement\n3- Exit\n";
		cin >> menuresponse;
		double answer;

		switch (menuresponse)
		{
		case 1:
			cout << "\nPlease input the DNA values you'd like to see the GC Content of:\n";
			cin >> dna;
			answer = get_gc_content(dna);
			if (answer < 1)
			{
				answer = answer * 100;
				cout << answer;
				cout << "%\n";
			}

			else 
			{
				cout << answer;
				cout << "00%\n";
			}
			return 0;
			break;

		case 2:
			cout << "\nPlease input the DNA values you'd like to see the DNA complement for:\n";
			cin >> dna;
			cout << get_dna_complement(dna);
			cout << "\n";
			return 0;
			break;
		
		case 3:
			char confirmation;
			cout << "\nAre you sure you'd like to quit? (Y or N)\n";
			cin >> confirmation;
			if (confirmation == 'Y')
			{
				cout << "Goodbye\n";
				break;
			}

			else if (confirmation == 'N')
			{
				menuresponse = 0;
				break;
			}

			else 
			{
				cout << "\nError: Invalid Input\n";
				menuresponse = 0;
				break;
			}

		default:
			break;
		}
	} 
	
	while (menuresponse != 3);
	

	return 0;
}