//write include statements
#include "decisions.h"
#include <stdlib.h>

using std::cout; using std::cin; using std::endl;

int main() 
{
	int choice, grade;
	//asks user to select from menu

	//displays menu
	cout << "MAIN MENU \n\n"
		 << "1-Letter grade using if\n"
		 << "2-Letter grade using switch\n"
		 << "3-Exit\n\n";
	
	//asks user for choice, stores their choice
	cout << "Enter your choice: ";
	cin >> choice;
	
	if (choice == 1)
	{
		cout << "Please enter a numerical grade from 0 - 100: ";
		cin >> grade;
		if (grade < 0 || grade > 100)
		{
			cout << "That number is out of range.  Please enter a number from 0 - 100: ";
		}
		else
		{
			cout << "The letter grade is: " + get_letter_grade_using_if(grade);
		}
	}
	else if (choice == 2)
	{
		cout << "Please enter a numerical grade from 0 - 100: ";
		cin >> grade;
		if (grade < 0 || grade > 100)
		{
			cout << "That number is out of range.  Please enter a number from 0 - 100: ";
		}
		else
		{
			cout << "The letter grade is: " + get_letter_grade_using_switch(grade);
		}
	} 
	else if (choice == 3)
	{
		exit(0);
	}
	

	
	return 0;
}