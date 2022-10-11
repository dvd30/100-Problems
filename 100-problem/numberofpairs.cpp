#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, l, r;
    cin>>n>>l>>r;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;
            sum = a[i] + a[j];
            if (sum >= l && sum <= r)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
