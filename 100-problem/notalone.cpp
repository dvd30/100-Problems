
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

bool is_alone(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k && a[i - 1] != a[i] && a[i + 1] != a[i])
        {
            return true;
        }
    }
    return false;
}

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        if (is_alone(a, n, k))
        {
            if (a[i] == k && i != n - 1 && i != 0)
            {
                if (a[i + 1] > a[i - 1])
                {
                    a[i] = a[i + 1];
                }
                else
                {
                    a[i] = a[i - 1];
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}