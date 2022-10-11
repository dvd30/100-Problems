#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string n, k;
    cin >> n;
    cin >> k;
    int correct = 0;
    int partials = 0;
    // bool repeat = false;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == k[i])
        {
            correct++;
            n[i] = ' ';
            k[i] = ' ';
        }
    }
    for (int i = 0; i < n.length(); i++)
    {
        for (int j = 0; j < k.length(); j++)
        {
            if (n[i] == k[j] && i != j && (n[i] != ' ' && k[j] != ' '))
            {
                partials++;
                k[j] = ' ';
                n[i] = ' ';
            }
        }
    }
    cout << correct << "A" << partials << "B" << endl;
    return 0;
}
