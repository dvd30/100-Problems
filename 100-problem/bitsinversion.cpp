#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a, b;
    cin>>a>>b;
    int ans = 0;
    for (int i = 0; i < a.length(); i+=2)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        while (i < a.length() && a[i] != b[i])
        {
            i += 2;
        }
        ans++;
    }
    for (int i = 1; i < a.length(); i+=2)
    {
        if (a[i] == b[i])
        {
            continue;
        }
        while (i < a.length() && a[i] != b[i])
        {
            i += 2;
        }
        ans++;
    }
    cout<<ans;
    return 0;
}
