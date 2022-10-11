#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

string get_substring(string s, int start, int end) {
    string sub = "";
    for (int i = start; i < end; i++) {
        sub += s[i];
    }
    return sub;
}

string get_repeating(string s, int n) {
    string res = "";
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        string temp = get_substring(s, 0, c);
        int j = 0;
        for (j = 0; j < c; j++)
        {
            if (s[j + i + 1] != temp[j])
            {
                c++;
                break;
            }
        }
            if (j == c)
            {
                res = temp;
                break;
            }
    }
    return res;
}

bool power(float n, int d)
{
    float x = log(n)/log(d);
    if (ceil(x) == floor(x))
    {
        return true;
    }
    return false;
}

float find_mod(float n, float d)
{
    float mod;
    if (n<0)
    {
        mod = -n;
    }
    else if (n>0)
    {
        mod = n;
    }
    if (d<0)
    {
        d = -d;
    }
    while (mod >= d)
    {
        mod = mod - d;
    }
    if (n<0)
    {
        return -mod;
    }
    return mod;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float n, d;
    cin>>n>>d;
    float ans = 0;
    bool repeat = false;
    if (find_mod(n, d) == 0)
    {
        ans = n/d;
        cout<<ans<<endl;
    }
    else if (power(d, 2) || power(d, 5))
    {
        ans = n/d;
        cout<<ans<<endl;
    }
    else
    {
        ans = n/d;
        string result = to_string(ans);
        string initial = get_substring(result, 0, 2);
        string decimal = get_substring(result, 2, result.length());
        string repeat = get_repeating(decimal, decimal.length());
        string final = initial + "(" + repeat + ")";
        cout<<final<<endl;
    }
    return 0;   
}
