﻿//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout; using std::cin; using std::endl;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num, result;

	cout << "Type a number to multiply ";
	cin >> num;
	result = multiply_numbers(num);
	cout << result << endl;

	int num1 = 4;

	result = multiply_numbers(num1);
	cout << result;

	return 0;
}
