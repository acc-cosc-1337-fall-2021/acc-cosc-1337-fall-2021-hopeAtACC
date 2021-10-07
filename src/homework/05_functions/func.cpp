//add include statements
#include "func.h"
//add function code here

using std::string; using std::cout;

double get_gc_content(const string& dna)
{
    double gc = 0;
    
    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            gc += 1;
        }
    }  
    return gc/dna.length(); 
};

string reverse_string(string dna)
{
    string reverse = "";
    
    for(int i = dna.length() - 1; i >= 0 ; i--)
    {
        reverse = reverse + dna[i];  
    }
    return reverse;   
};

string get_dna_complement(string dna)
{
    string complement = "";
    string reversed = reverse_string(dna);

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
