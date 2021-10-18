//add include statements
#include "func.h"
//add function code here

using std::string; using std::cout;

double get_gc_content(const string& dna)
{
    double gc = 0;
    //loops to find all G or C characters in dna
    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            //adds to gc quantity if G or C exists in that index
            gc += 1;
        }
    }
    //returns calcualted ratio of GC charcters to overall string characters 
    return gc/dna.length(); 
};

string reverse_string(string dna)
{
    string reverse = "";
    //loops through dna string adding the end index chracter to a reverse string each time
    for(int i = dna.length() - 1; i >= 0 ; i--)
    {
        reverse = reverse + dna[i];  
    }
    return reverse;   
};

string get_dna_complement(string dna)
{
    string complement = "";
    //starts with the reversed string returned from reverse function
    string reversed = reverse_string(dna);
    //for a character in reversed it adds its complement to new complement string
    for (int i = 0; i < reversed.length(); i++)
    {
        if (reversed[i] == 'A')
        {
            complement += 'T';
        }
        else if (reversed[i] == 'T')
        {
            complement += 'A';
        }
        else if (reversed[i] == 'C')
        {
            complement += 'G';
        }
        else if (reversed[i] == 'G')
        {
            complement += 'C';
        }
    }

    return complement;
}
