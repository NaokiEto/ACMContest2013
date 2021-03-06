#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    cout << "the number of requirements needed are: " << R << " and the number of courses we can choose from: " << C << endl;

    int u, n;
    int coursereq;

    int reqs[C];
    int units[C];

    for (int i = 0; i < C; i++)
    {
        cin >> u >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> coursereq;
        }
        cout << "the number of units this course is: " << u << " and the number of requirements is: " << n << endl;
        units[i] = u;
        reqs[i] = n;
    }

    int totalreqs = 0;
    for (int k = 0; k < C; k++)
    {
        totalreqs += reqs[k];
    }

    if (totalreqs < R)
    {
        cout << "TRANSFER" << endl;
    }

    else
    {
        int minList[C]; 

        std::fill(minList, minList + C, 30);

        int min = reqs[0];
        // the index of the course

        int indexList[C];
        std::fill(indexList, indexList + C, 30);
        for (int size = 0; size < C; size++)
        {
            minList[size] = reqs[0];
            indexList[size] = 0;
            for(int l = 0; l < C; l++)
            {
                // if the minimum reqs is less than the required reqs
                if(min < R)
                {
                    minList[size] = reqs[l];
                    indexList[size] = l;
                }
                if ((reqs[l] < min) && (reqs[l] >= R))
                {
                    minList[size] = reqs[l];
                    indexList[size] = l;
                }
            }
        }

        
        cout << "the number of minimum units is: " << units[indexList[0]] << endl;
    }
}
