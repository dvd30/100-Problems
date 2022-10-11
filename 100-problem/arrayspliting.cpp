#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int a[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    for (int i = 0; i < 2*n; i++)
    {
        sum += (a[i]%2);
    }
    if (sum == n)
    {
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}
