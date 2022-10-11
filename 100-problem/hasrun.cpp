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
    string s;
    cin>>s;
    string r = "run";
    int index = 0;
    if (s.length() < 2)
    {
        cout<<"false";
        return 0;
    }
    for (int i = 0; i < s.length() - 2; i++)
    {
        if (index < 2)
        {
            int j = 0;
            while (j < 3)
            {
                if (s[i] == r[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    index++;
                    break;
                }
            }
            if (j == 3)
            {
                cout<<"true";
                return 0;
            }
        }
    }
    cout<<"false";
    return 0;
}