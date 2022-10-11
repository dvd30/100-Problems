#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n;
    cin >> n;
    // will already give reversed binary expansion of the num

    string bin = "";
    int rem = 0;
    while (n > 0)
    {
        rem = n % 2;
        bin += (rem + '0');
        n = n / 2;
    }
    while (bin.length() != 32)
    {
        bin += '0';
    }
    long long result = 0;
    int val = 0;
    for (int i = bin.length() - 1; i  >= 0; i--)
    {
        rem = (bin[i] - '0');
        result += rem * pow(2, val);
        val++;
    }
    cout<<result<<endl;
    return 0;
}