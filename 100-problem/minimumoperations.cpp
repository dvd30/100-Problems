#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum = 0, operations = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum % k != 0)
    {
        int rem = sum % k;
        arr[0] += rem;
        operations++;
    }
    cout<<operations;
    return 0;
}
