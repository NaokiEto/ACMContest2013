#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a[170];
    a[0]=1;
    int m=1;
    int temp = 0;
    for(int i=1; i<=n; i++)  // to multiply n number 
    {
       int x;
       for(int j=0;j<m;j++)
       {
           x = a[j]*i+temp;
           a[j]=x%10;
           temp = x/10;
       }
       while(temp!=0)
       { 
         a[m]=temp%10;
         temp = temp/10;
         m++;
       }
    }
}


