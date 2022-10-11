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
    int a, b, c;
    cin>>a>>b>>c;
    int sum = 0;
    if (a == b || a == c)
    {
        cout<<sum;
    }
    else if (b == c)
    {
        sum = a;
        cout<<sum;
    }
    else
    {
        sum = a + b + c;
        cout<<sum;
    }
    return 0;
}