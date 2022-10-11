#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int a[n], key[n], temp[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>key[i];
    }
    for (int i=0; i<n; i++)
    {
            temp[key[i] - 1] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
