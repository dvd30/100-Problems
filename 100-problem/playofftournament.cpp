#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int winner(int a, int b)
{
    return (a > b) ?  a : b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 4;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int f1 = winner(arr[0], arr[1]);
    int f2 = winner(arr[2], arr[3]);
    for (int i = 0; i < n; i++)
    {
        if (f1 > f2)
        {
            if (arr[i] < f1 && arr[i] > f2)
            {
                cout<<"NO";
                return 0;
            }
        }
        else
        {
            if (arr[i] < f2 && arr[i] > f1)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}