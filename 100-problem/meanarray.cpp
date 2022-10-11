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
    int arr[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    int operations = 0;
    float avg = 0.00, sum = 0.00;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum/n;
    if (avg == 1)
    {
        cout<<operations;
        return 0;
    }
    if (sum > 0)
    {
        operations = sum - n;
    }
    else if (sum < 0)
    {
        operations = 1;
    }
    cout<<operations;
    return 0;
}
