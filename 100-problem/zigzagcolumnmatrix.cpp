#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int rt = 0, lt = m, top = 0, btm = n;
    int dir = 0;
    while (rt < lt)
    {
        if (dir == 0)
        {
            for (int j = top; j < btm; j++)
            {
                cout << a[j][rt]<<" ";
            }
            rt++;
            dir = 1;
        }
        else if (dir == 1)
        {
            for (int j = btm - 1; j >= top; j--)
            {
                cout << a[j][rt]<<" ";
            }
            dir = 0;
            rt++;
        }
    }
    cout << endl;
    return 0;
}
