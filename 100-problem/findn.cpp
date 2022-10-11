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
    int n, m, k, count = 0;
    cin>>n>>m>>k;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            count++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (b[i] == k)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}