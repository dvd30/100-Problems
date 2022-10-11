
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
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int b[n];
    for (int i = 1; i < n; i++)
    {
        b[i - 1] = a[i];
    }
    b[n -1] = a[0];
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}