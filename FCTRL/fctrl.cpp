#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number, x;
    cin >> number;
    for (int j = 0; j < number; j++)
    {
        cin >> x;
        int multiple = 0;
        // get the log of number divided by log of 5 to see what power of 5 to go up to
        int fivlog = int(log(x)/log(5)) + 1;
        for(int i = 1; i < fivlog; i++)
        {
            // if multiple of 5, add 1. if multiple of 25, add another 1, and so on.
            multiple += x/pow(5, i);
        }
        cout << multiple << endl;
    }
}
