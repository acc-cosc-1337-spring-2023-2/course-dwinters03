//write include statements
#include <iostream>
#include <string>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;
using std::string;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	string enter_meal_prompt = "\nEnter the meal amount: ";
	string enter_tip_prompt = "\nEnter the tip rate: ";

	cout << enter_meal_prompt;
	cin >> meal_amount;
	cout << enter_tip_prompt;
	cin >> tip_rate;

	tax_amount = get_sales_tax_amount(meal_amount);
	

	tip_amount = get_tip_amount(meal_amount, tip_rate);


	total = tip_amount + tax_amount + meal_amount;

	string meal_amount_readout = "\nMeal Amount:     ";
	string sales_tax_readout = "\nSales Tax:       ";
	string tip_amount_readout = "\nTip Amount:      ";
	string total_readout = "\nTotal:           ";
	string add_line = "\n";

	cout << meal_amount_readout;
	cout << meal_amount;
	cout << sales_tax_readout;
	cout << tax_amount;
	cout << tip_amount_readout;
	cout << tip_amount;
	cout << total_readout;
	cout << total;
	cout << add_line;







}
