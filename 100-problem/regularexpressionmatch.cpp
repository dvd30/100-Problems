#include <iostream>
#include<vector>
using namespace std;

bool is_alpha(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return true;
    }
    return false;
}

int main()
{
    string h, d;
    bool status = true;
    cin >> h >> d;
    for (long unsigned int i = 0; i < d.length(); i++)
    {
        if (is_alpha(d[i]))
        {
            int count = 0;
            if (d[i-1] == '*' || d[i-1] == '.' || d[i+1] == '.' || d[i+1] == '*')
            {
                long unsigned int j = 0;
                for (j = 0; j < h.length(); j++)
                {
                    if (h[j] == d[i])
                    {
                        count++;
                    }
                    if (count > 0)
                    {
                        break;
                    }
                }
            }
            else
            {
                for (long unsigned int j = 0; j < h.length(); j++)
                {
                    if (d[i] == h[j])
                    {
                        status = false;
                        break;
                    }
                }
            }
            if (status == false)
            {
                break;
            }
        }
    }
    if (status == false)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
    return 0;
}