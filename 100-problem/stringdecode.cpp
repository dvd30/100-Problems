#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_int(char a)
{
    if (a >= '0' && a <= '9')
    {
        return true;
    }
    return false;
}

bool is_alpha(char s)
{
    if (s <= 'z' && s >= 'a')
    {
        return true;
    }
    return false;
}


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string code = "", decode = "";
    getline(cin, code);
    for (long unsigned int i = 0; i < code.length(); i++)
    {
        if (is_int(code[i]))
        {
            int index = code[i] - '0';
            while (is_alpha(code[i]) == false)
            {
                i++;
            }
            string str = "";
            while (is_alpha(code[i]))
            {
                str += code[i];
                i++;
            }
            if (is_int(code[i]))
            {
                int ind = code[i] - '0';
                while (is_alpha(code[i]) == false)
                {
                    i++;
                }
                while (is_alpha(code[i]))
                {
                    int k = 0;
                    while(k < ind)
                    {
                       str += code[i];
                        k++;
                    }
                    i++;
                }
            }
            for (int j = 0; j < index; j++)
            {
                for (long unsigned int k = 0; k < str.length(); k++)
                {
                    decode += str[k];
                }
            }
        }
        else if (!is_int(code[i]) && is_alpha(code[i]))
        {
            decode += code[i];
        }
    }
    cout << decode << endl;
    return 0;
}
