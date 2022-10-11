#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string reverse(string word)
{
    int n = word.length();
    for (int i = 0; i < n/2; i++)
    {
        char temp = word[i];
        word[i] = word[n-1-i];
        word[n-1-i] = temp;
    }
    return word;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    string ans = "";
    getline(cin, s);
    for (long unsigned int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ')
        {
            word += s[i];
            if (i == s.length() - 1)
            {
                break;
            }
            i++;
        }
        ans += reverse(word);
        word="";
        if (s[i] == ' ')
        {
            ans += ' ';
        }
    }
    cout<<ans;
    return 0;
}