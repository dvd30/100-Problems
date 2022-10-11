#include <iostream>
using namespace std;

int max_divisor(int n)
{
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            max = i;
            break;
        }
    }
    return max;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int chance = 0;
    if (n < 2)
    {
        cout<<"Suresh";
        return 0;
    }
    while (n > 1)
    {
        int divisor = max_divisor(n);
        n -= divisor;
        chance++;
    }
    if (chance%2 == 0)
    {
        cout<<"Suresh";
    }
    else{
        cout<<"Ramesh";
    }
    return 0;
}
