#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string binary_addition(vector<string> a)
{
    string sum = "";
    int j = 0;
    while (j <= 8)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i][j] == '1')
            {
                sum += '1';
                break;
            }
            if (i == a.size() - 1)
            {
                sum += '0';
            }
        }
        j++;
    }
    return sum;
}

void reverse(string s)
{
    int n = s.length();
    for (int i = 0; i <= n/2; i++)
    {
        char temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }
}
    
vector<string> to_binary(vector<int> a)
{
    vector<string> temp;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        string bin = "";
        int num = a[i];
        while (num > 0)
        {
            int rem = num%2;
            bin += rem + '0';
            num /= 2;
        }
        if (bin.length() == 8)
        {
            int diff = 8 - bin.length();
            for (int i = 0; i < diff; i++)
            {
                bin += '0';
            }
        }
        reverse(bin);
        temp.push_back(bin);
    }
    return temp;
}

int to_decimal(string binary)
{
    int decimal = 0;
    int val = 1, n = binary.length();
    for (int i = 0; i < n; i++)
    {
        int rem = binary[i] - '0';
        decimal += (rem * val);
        val *= 2;
    }
    return decimal;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n = 0;
    cin>>n;
    vector<int> summation;
    summation.push_back(0);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            summation.push_back(sum);
        }
    }
    vector<string> binary = to_binary(summation);
    string result = binary_addition(binary);
    int val = to_decimal(result);
    cout<<val;
    return 0;
}
