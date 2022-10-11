#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0], count = 0;
    for (int i = 1; i < n; i++)
    {
        if (min == '1')
        {
            if (a[i] == '0')
            {
                count++;
            }
        }
        else{
            min = '1';
        }
    }
    cout<<count;
    return 0;
}