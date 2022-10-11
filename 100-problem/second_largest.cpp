#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    int max = A[0];
    int max2 = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            if (max2 < A[i - 1])
            {
                max2 = A[i - 1];
            }
        }
        else{
            if(max2 < A[i] && A[i] < max)
            {
                max2 = A[i];
            }
        }
    }
    cout<<max2<<endl;
    return 0;
}