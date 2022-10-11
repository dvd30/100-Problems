#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool answer(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        while(arr[i]!=0)
        {
            arr[i]--;
            arr[i+1]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; 
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (answer(n, arr))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
