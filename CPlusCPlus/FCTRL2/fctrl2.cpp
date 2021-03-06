#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // number of factorials to compute
    int numOfFactorial;

    // the factorial to calculate, initialized to 1, will be piled on
    int factorial = 1;

    // make an array to hold 200 digits (for the factorial)
    int arr[200];

    // the temporary variable to hold the carries
    int carry;

    // factorial that the user wants calculated
    int fact;

    // index in array
    int idx;

    cin >> numOfFactorial;

    // do it for the amount of factorials that want to be calculated
    while (numOfFactorial--)
    {
        cin >> fact;

        // initialize the first digit (ones) to 1
        arr[0] = 1;

        int i;

        carry = 0;

        int digitCounter = 1;

        int x;

        int j;
    
        // go through one factorial
        for (i = 1; i < fact + 1; i ++)
        {

            // work with the used elements in the array
            for (idx = 0; idx < digitCounter; idx++)
            {
                // calculate array element, add in the carry
                x = arr[idx] * i + carry;

                // get the remainder
                arr[idx] = x%10;

                // the carry part
                carry = x/10;
            }

            // determine how many digits there are, as well as insert the carry parts
            // into the array
            while (carry > 0)
            {
                arr[digitCounter] = carry%10;
                carry = carry/10;
                digitCounter++;
            }
        }

        // output the digits backward (since the 0th element is the 1's, the 
        // 1st element is the tens and so on)
        for (j = digitCounter - 1; j >= 0; j--)
        {
            cout << arr[j];
        }
        cout << endl;
    }
    
    return 0;
}
