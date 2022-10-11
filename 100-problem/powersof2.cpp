#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_power_of_2(int n)
{
    while (n >= 0)
    {
        if (n == 1)
        {
            return true;
        }
        int rem = n % 2;
        if (rem == 0 && n == 2)
        {
            return true;
        }
        else if (rem == 1)
        {
            return false;
        }
        n = n / 2;
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    if (is_power_of_2(n))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
