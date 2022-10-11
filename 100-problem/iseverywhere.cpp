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

bool is_everywhere(int a[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == k || a[i + 1] == k)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
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
    if (is_everywhere(a, n, k))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}