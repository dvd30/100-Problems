#include <iostream>
using namespace std;

int main()
{
    //n = 1909
    int n, val = 1;
    int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string values[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    cin>>n;
    string ans = "";
    for (int i = 12; i >= 0; i--)
    {
        while(n - num[i] >= 0)
        {
            ans += values[i];
            n -= num[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}