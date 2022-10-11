
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

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];
    if (n < 3)
    {
        cout<<"0";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int min = a[0];
    int min2 = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > min && a[i] < min2)
        {
            min2 = a[i];
        }
    }
    int diff = max - min2;
    cout<<diff;
    return 0;
}