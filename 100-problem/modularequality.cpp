#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_present(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return true;
        }
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, operation = 0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if (is_present(a, n, 1))
    {
        if (is_present(a, n, 2))
        {
            cout<<n;
            return 0;
        }
        else{
            for (int i = 0; i < n; i++)
            {
                if (a[i]!=1)
                {
                    operation++;
                }   
            }
        }
    }
    else{
        for (int i = 0; i < n; i++)
        {
            if (a[i]!=0)
            {
                operation++;
            }   
        }
    }
    cout<<operation;
    return 0;
}
