//write include statements
#include "hwexpressions.h"
#include <iomanip>
#include <iostream>

//write namespace using statement for cout
using std::cout; using std::cin; using std::setprecision; using std::fixed; using std::endl;


int main()
{

	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	//stores number for meal_amount
	cout << "What was the cost of your meal? ";
	cin >> meal_amount;

	//calculates and tax_amount based on meal_amount
	tax_amount = get_sales_tax(meal_amount);

	//stores number for tip_rate
	cout << "What is your tip rate? ";
	cin >> tip_rate;

	//calculates the tip amount from meal_amount and tip_rate
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	//calculates the total
	total = tip_amount + tax_amount + meal_amount;

	cout << "Meal Amount: $" << setprecision(2) << fixed << meal_amount << endl;
	cout << "Sales Tax: $" << setprecision(2) << fixed << tax_amount << endl;
	cout << "Tip Amount: $"  << setprecision(2) << fixed << tip_amount << endl;
	cout << "Total: $"  << setprecision(2) << fixed << total << endl;

	return 0;
}
