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
    int n = s.length();
    if (n < 2)
    {
        cout<<"true";
        return 0;
    }
    if (s[0]>='a' && s[0] <= 'z')
    {
        cout<<"false";
        return 0;
    }
    cout<<"true";
    return 0;
}
