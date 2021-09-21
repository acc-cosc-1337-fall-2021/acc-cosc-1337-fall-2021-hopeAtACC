//write include statement for decisions header
#include "decisions.h"


//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    if (grade >= 90) 
    {
        return "A";
    }
    else if (grade >= 80)
    {
        return "B";
    }
    else if (grade >= 70)
    {
        return "C";
    }
    else if (grade >= 60)
    {
        return "D";
    }
    else 
    {
        return "F";
    }

};

