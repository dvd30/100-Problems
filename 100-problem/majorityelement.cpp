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
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0, element = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == element)
            {
                count++;
            }
        }
        if (count >= n/2)
        {
            cout<<element;
            return 0;
        }
    }
    return 0;
}
