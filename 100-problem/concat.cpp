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
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string a, b, ans = "";
    cin >> a >> b;
    int j = 0, n = a.length(), i = 0, l = n;
    int k = 0;
    while (a[l - 1 - k] == b[j])
    {
        if (k % 2 == 1)
        {
            b[j] = ' ';
            l++;
        }
        else if (k % 2 == 0)
        {
            a[l-1-k] = ' ';
            j--;
        }
        k++;
        j++;
    }
    while (i < n)
    {
        if (a[i] != ' ')
        {
            ans += a[i];
        }
        i++;
    }
    int m = 0;
    while (m < b.length())
    {
        if (b[m] != ' ')
        {
            ans += b[m];
        }
        m++;
    }
    cout << ans << endl;
    return 0;
}