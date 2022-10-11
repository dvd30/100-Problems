
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int n;
    cin>>n;
    cin>>s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'D')
        {
            s[i] = 'U';
        }
        else if (s[i] == 'U')
        {
            s[i] = 'D';
        }
    }
    cout<<s;
    return 0;
}
