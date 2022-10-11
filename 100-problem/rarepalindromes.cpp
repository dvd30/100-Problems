#include <iostream>
using namespace std;

bool is_palindrome(string s, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

string substr(string s, int start, int end)
{
    string sub = "";
    for (int i = start; i < end; i++)
    {
        sub += s[i];
    }
    return sub;
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string temp = s.substr(i, j - i + 2);
            if (is_palindrome(temp, temp.length()) == false)
            {
                break;
            }
            if (j == n - 1)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}