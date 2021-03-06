//write include statements
#include "func.h"
//write using statements
using std::cout; using std::cin; using std::endl;

int main() 
{	
	int choice;
	string dna;
	string confirmation;

	do
	{
		cout << endl << "Choose one of the following perform: \n"
			 <<	"1 - Get GC Content \n"
			 <<	"2 - Get DNA Complement \n"
			 <<	"3 - Exit \n" << endl;
		cin >> choice;

		if (choice == 1) 
		{
			cout << endl << "Please type a string of DNA to find the GC content: ";
			cin >> dna;
			cout << endl << "The GC content of " << dna << " is " << get_gc_content(dna) << endl;
		}
		else if (choice == 2)
		{
			cout << endl <<  "Please type a string of DNA to get the DNA complement: ";
			cin >> dna;
			cout << endl << "The DNA complement of " << dna << " is: " << get_dna_complement(dna) << endl;
		}
		else if (choice == 3)
		{
			cout << "Are you sure you want to quit?  Type \"Y\" to confirm or \"N\" to cancel. ";
			cin >> confirmation;
			if (confirmation == "Y" || confirmation == "y")
			{
				exit(0);
			}
		}
		else
		{
			cout << "That was not a valid menu choice. ";
		}
	}

	while (choice != 1 || choice != 2);

	return 0;

}