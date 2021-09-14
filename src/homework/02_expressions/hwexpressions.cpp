#include "hwexpressions.h"
#include <iostream>

//write function code here
double get_sales_tax(double meal_amount)
{
	return meal_amount * (TAXRATE/100);
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * (tip_rate/100);
}



