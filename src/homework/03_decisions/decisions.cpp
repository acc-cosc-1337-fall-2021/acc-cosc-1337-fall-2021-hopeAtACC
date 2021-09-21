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

string get_letter_grade_using_switch(int grade)
{
    string letterGrade;

    switch (grade/10)
    {
        case 10:
        case 9:
            letterGrade = "A";
            break;
        case 8: 
            letterGrade = "B";
            break;
        case 7: 
            letterGrade = "C";
            break;
        case 6: 
            letterGrade = "D";
            break;
        default: 
            letterGrade = "F";
    }

    return letterGrade;
}

