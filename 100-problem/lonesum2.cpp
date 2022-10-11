
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
    int arr[n];
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    break;
                }
            }
        }
        if (j == n)
        {
            a.push_back(arr[i]);
        }
    }
    int sum = 0;
    for (int i = 0; i < a.size() ; i++)
    {
        sum += a[i]; 
    }
    cout<<sum;
    return 0;
}