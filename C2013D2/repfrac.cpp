#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <vector>

using namespace std;

int gcdenom(int X, int Y);

int main()
{

    // looks like this:
    vector<string> firstvector;

    string toappend = "";
    while (toappend != "0")
    {
    	cin >> toappend;
        if (toappend != "0")
        {
            firstvector.push_back(toappend);
        }
    }

    for (int j = 0; j < firstvector.size(); j++)
    {   
        float number = 0.0;
        int k = 2;

        string element = firstvector[j];
        string supernum = "";

        // get the number after the decimal point
        while (element[k] != '.')
        {
            const char* elem = (const char*) element[k];
            supernum.append(elem);
            k++;
            cout << "supernum " << supernum << endl;
        }

        cout << "wut" << endl;
        cout << "the size is: " << supernum.size() << endl;

        char repeat = supernum[supernum.size() - 1];
        // number after decimal point; make sure no repeating digits at the end
        j = supernum.size() - 2;

        // number of characters to erase
        int count = 1;
        // position where to start erasing
        int eraseout = supernum.size() - 1;
        while (supernum[j] == repeat)
        {
            repeat = supernum[j];
            eraseout = j;
            j--;
            count++;
        }

        supernum.erase(eraseout, count);

        cout << "the true number is: " << supernum << endl;
    
        int numofdigits = 0;
        for (int l = 0; l < supernum.size(); l++)
        {
            int elem = element[k] - '0';
            number += elem * pow(10, element.size() - k - 4);
            numofdigits++;
        }

        // figure out what number to subtract in numerator
        int firstdigits = number * 0.1;

        // figure out what initial numerator should be
        int newnum = number - firstdigits;

        // figure out what the initial denominator would be
        int denominator = 9*pow(10, numofdigits - 1);

        // figure out the gcd of the numerator and denominator
        int gcd = gcdenom(newnum, denominator);
      
        cout << newnum/gcd << "/" << denominator/gcd << endl;
    }
}

// Euclid's algorithm to find gcd
int gcdenom(int x, int y) 
{
    int X = x;
    int Y = y;

    while (X != Y)
    {
        if (X > Y)
        {
            X = X - Y;
        }
        else
        {
            Y = Y - X;
        }
    }
    return X;
}
