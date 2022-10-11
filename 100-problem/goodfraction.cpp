#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(double n, double i, double j)
{
    double x = (i*(j+1))/(j*(i+1));
    double y = i/j;
    if (x == y)
    {
        return true;
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double n; 
    int count = 0;
    cin>>n;
    for (double i = 0; i < n; i++)
    {
        for (double j = i + 1; j < n; j++)
        {
            if (check(n,i,j))
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
