#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> ans;
    while (n > 0)
    {
        int rem = n % 6;
        ans.push_back(rem);
        n = n/6;
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout<<ans[i]; 
    }
    return 0;
}
