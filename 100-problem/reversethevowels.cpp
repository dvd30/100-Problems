#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct vowel{
    char vowel;
    int index;
};

bool is_vowel(char s)
{
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    {
        return true;
    }
    return false;
}

void swap(string a, string b)
{
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string in;
    cin>>in;
    vector<vowel> vow;
    for (int i = 0; i < in.length(); i++)
    {
        if (is_vowel(in[i]))
        {
            vow.push_back({in[i], i});
        }
    }
    for (int i = 0; i < vow.size() / 2; i++)
    {
        int n = vow.size();
        swap(vow[i].vowel, vow[n-i-1].vowel);
    }
    for (int i = 0; i < vow.size(); i++)
    {
        in[vow[i].index] = vow[i].vowel;
    }
    cout<<in;
    return 0;
}
