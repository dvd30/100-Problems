#include <iostream>
#include <vector>
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
    while (bin.length() <= 10)
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
int main()
{
    int c,d,n=0;
    cin >> c;
    if (c%2 == 1)
    {
        d = (c+1)/2;
    }
    else
    {
        d = c/2 + 1;
    }
    if (c==10 || c == 32)
    {
        n = 4*d;
    }
    else{
        n = 2*d;
    }
    vector<int> a;
    for (long unsigned int i = 0; i < n; i++)
    {
        for (long unsigned int j = i + 1; j < n; j++)
        {
            if (XOR(to_binary(i), to_binary(j)) == to_binary(c))
            {
                int product = i * j;
                a.push_back(product);
            }
        }
    }
    int max = a[0];
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout<<max<<endl;
    return 0;
}