#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int m, n;
    cin>>m>>n;
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int l = 0, r = n - 1, d = 0, t = 0, b = m - 1;
    while(t <= b && l <= r)
    {
        if (d == 0)
        {
            for (int i = l; i <= r; i++)
            {
                cout<<matrix[t][i]<<" ";
            }
            t++;
        }
        if (d == 1)
        {
            for (int i = t; i <= b; i++)
            {
                cout<<matrix[i][r]<<" ";
            }
            r--;
        }
        if (d == 2)
        {
            for (int i = r; i >= l; i--)
            {
                cout<<matrix[b][i]<<" ";
            }
            b--;
        }
        if (d == 3)
        {
            for (int i = b; i >= t; i--)
            {
                cout<<matrix[i][l]<<" ";
            }
            l++;
        }
        d = (d+1)%4;
    }
    return 0;
}
