#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n = 0;
    cin>>n;
    string words[n], common="";
    for (int i = 0; i < n; i++)
    {
        cin>>words[i];
    }
    int size = words[0].length();
    for (int i = 0; i < n; i++)
    {
        if (words[i].length() < size)
        {
            size = words[i].length();
        }
    }
    bool time = true;
    for (int j = 0; j < size && time == true; j++)
    {
        char temp = words[0][j];
        for (int i = 0; i < n; i++)
        {
            if (temp != words[i][j])
            {
                time = false;
                break;
            } 
            else if(i == n - 1)
            {
                common += words[i][j];
            }
        }
    }
    if (common.length() == 0)
    {
        cout<<"-1";
    }
    cout<<common;
    return 0;
}
