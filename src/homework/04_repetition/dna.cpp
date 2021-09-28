//add include statements
#include "dna.h"

//factorial function
int factorial (int num)
{   
    int product = 1;
 
    while (num > 0)
    {
        product = product * num;
        num--;
    };

    return product;
};


//greatest common divisor function
int gcd (int num1, int num2)
{

    while (num1 != num2)
    {
        if (num1 < num2)
        {
            int num3 = num1;
            num3 = num1;
            num1 = num2;
            num2 = num3;
        }
        if (num1 > num2)
        {
            num1 = num1 - num2;
        }    
    }
    return num1;

}
