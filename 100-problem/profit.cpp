#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0;
    cin>>n;
    int profit = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i+1])
        {
            profit += (a[i+1]-a[i]);
        }
    }
    cout<<profit<<endl;
    return 0;
}