#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string column;
    cin>>column;
    int ans = 0, val = 1;
    for (int i = column.length() - 1; i >= 0; i--)
    {
        int temp = (column[i] - 'A' + 1);
        ans += (temp * val);
        val = val*26;
    }
    cout<<ans;
    return 0;
}
