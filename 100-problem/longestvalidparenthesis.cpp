#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    int n = s.length(), count=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == ')')
                {
                    count+=2;
                    s[j] = ' ';
                    s[i] = ' ';
                    break;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
