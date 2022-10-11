#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s, s1 = "";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        char temp = s[i];
        int count = 0, index = 0;
        for (int j = i; j < s.length() && s[j] == temp; j++)
        {
            if (s[j] == temp)
            {
                count++;
            }
            index = j;
        }
        i = index;
        if (count != 1)
        {
            s1 += s[i];
            s1 += (count + '0');
        }
        else
        {
            s1 += s[i];
        }
    }
    cout << s1.length() << endl;
    return 0;
}
