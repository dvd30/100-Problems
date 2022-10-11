#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a, b;
        cin>>a>>b;
        if (a.length() < b.length());
        {
            string temp = a;
            a = b;
            b = temp;
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string ans = "";
        int carry = 0;
        for (long unsigned int i = 0; i < a.length(); i++)
        {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            ans += to_string(sum%10);
            carry = sum/10;    
        }
        int n = a.length();
        for (long unsigned int i = n; i < b.length(); i++)
        {
            int sum = (b[i] - '0') + carry;
            ans += to_string(sum%10);
            carry = sum/10;
        }
        ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
    return 0;
}