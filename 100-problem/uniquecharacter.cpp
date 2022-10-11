#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct dict{
    char alpha;
    int count;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    int n = s.length();
    if (n < 2)
    {
        cout<<"0";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        char temp=s[i];
        int j = 0;
        for (j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (s[j] == temp)
                {
                    break;
                }
            }
        }
        if (j == n)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}
