#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string to_binary(int n)
{
    string ans;
    while(n > 0)
    {
        int rem = n % 2;
        ans += rem + '0';
        n = n / 2;
    }
    int m = ans.length();
    for (int i = 0; i <= m/2; i++)
    {
        char temp = ans[i];
        ans[i] = ans[m-1-i];
        ans[m-1-i] = temp;
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int dist = 0;
    vector<int> store;
    string ans = to_binary(n);
    int m = ans.length();
    for (int i = 0; i < m - 1; i++)
    {
        if (ans[i] == '1')
        {
            for (int j = i + 1; j < m; j++)
            {
                if (ans[j] == '1')
                {
                    if (j - i > dist)
                    {
                        dist = j - i;
                        break;
                    }
                }
            }
        }
    }
    cout<<dist;
    return 0;
}
