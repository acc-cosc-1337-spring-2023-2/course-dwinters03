//add include statements
#include <iostream>
#include <string>
#include "func.h"
//add function code here

using namespace std;



double get_gc_content(const string & dna)
{
    int lengthofstring = dna.length();
    double GCcounter = 0;
    for (char c : dna)
    {
        if (c == 'G'|| c == 'C')
        {
            GCcounter++;
        }
    }

    double GCcontent = GCcounter/lengthofstring;
    
    return GCcontent;
}

string get_reverse_string(string dna)
{
    string reversed_dna(dna.length(), ' ');
    for(int i = 0; i < (int)dna.length(); i++)
    {
        reversed_dna[i] = dna[dna.length() - i -1];
    }
    return reversed_dna;
}

string get_dna_complement(string dna)
{
    string dnacomp = get_reverse_string(dna);
    for (int i = 0; i < (int)dnacomp.length(); i++)
    {
        if (dnacomp[i] == 'C')
        {
            dnacomp[i] = 'G';
            
        }

        else if (dnacomp[i] =='G')
        {
            dnacomp[i] = 'C';
        }

        else if (dnacomp[i] == 'T')
        {
            dnacomp[i] = 'A';
        }

        else if (dnacomp[i] == 'A')
        {
            dnacomp[i] = 'T';
        }

        else 
        {
            cout << "Error.";
        }
    }
    return dnacomp;
}
