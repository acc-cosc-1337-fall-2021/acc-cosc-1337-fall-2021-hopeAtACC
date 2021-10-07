//write include statements
#include "dna.h"
//write using statements
using std::cout; using std::cin; using std::endl;

int main() 
{
	int choice, factorialize, num1, num2;

	do
	{
		cout << endl << "Choose one of the calculations to perform: \n"
			 <<	"1 - Factorial \n"
			 <<	"2 - Greatest Common Divisor \n"
			 <<	"3 - Exit \n" << endl;
		cin >> choice;

		if (choice == 1) 
		{
			cout << endl << "Please type an integer greater than or equal to zero that you would like to factorialize: ";
			cin >> factorialize;
			cout << endl << "The factorial of " << factorialize << " is " << factorial(factorialize) << endl;
		}
		else if (choice == 2)
		{
			cout << endl <<  "Please type the first integer to find a common divisor of: ";
			cin >> num1;
			cout << "Please type the second integer: ";
			cin >> num2;
			cout << endl << "The common divisor of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
		}
		else if (choice == 3)
		{
			exit(0);
		}
	}

	while (choice != 3);

	return 0;

}
