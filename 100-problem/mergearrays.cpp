#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin>>n>>m;
    int a1[n], a2[m], a3[m+n];
    for (int i = 0; i < n; i++)
    {
        cin>>a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>a2[i];
    }
    int i = 0, j = 0, k = 0;
    while(j < n && k < m)
    {
        if (a1[j] < a2[k])
        {
            a3[i] = a1[j];
            i++;
            j++;
        }
        else
        {
            a3[i] = a2[k];
            i++;
            k++;
        }
    }
    while (j < n)
    {
        a3[i] = a1[j];
        i++;
        j++;
    }
    while (k < m)
    {
        a3[i] = a2[k];
        k++;
        i++;
    }
    for (int l = 0; l < m + n; l++)
    {
        cout<<a3[l]<<" ";
    }
    return 0;
}
