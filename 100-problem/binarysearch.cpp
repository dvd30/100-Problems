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

int binary_search(int a[], int begin, int end, int k)
{
    if (end >= begin)
        {
        int mid = begin + (end-begin)/2;
        if (a[mid] == k)
        {
            return mid;
        }
        if (a[mid] > k)
        {
            return binary_search(a, begin, mid - 1, k);
        }
        return binary_search(a, mid + 1, end, k);
        }
    return -1;
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
    sort(a, a + n);
    if (binary_search(a, 0, n, k) == -1)
    {
        cout<<"Not Found";
        return 0;
    }
    cout<<binary_search(a, 0, n, k);
    return 0;
}