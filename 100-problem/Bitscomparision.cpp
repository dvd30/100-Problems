#include <iostream>
using namespace std;
string to_binary(int n)
{
    string bin = "";
    while (n > 0)
    {
        int rem = n % 2;
        bin += (rem + '0');
        n /= 2;
    }
    while (bin.length() <= 14)
    {
        bin += '0';
    }
    return bin;
}
string XOR(string a, string b)
{
    string x="";
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            x += '0';
        }
        else{
            x += '1';
        }
    }
    return x;
}

int to_decimal(string a)
{
    int n = 0, val = 1;
    for (int i = 0; i < a.length(); i++)
    {
        n += (a[i]-'0')*val;
        val *= 2;
    }
    return n;
}

int main()
{
    int x, y, n, count = 0;
    cin>>x>>y>>n;
    for (int i = 0; i <= n; i++)
    {
        if (to_decimal(XOR(to_binary(x), to_binary(i))) < to_decimal(XOR(to_binary(y), to_binary(i))))
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}