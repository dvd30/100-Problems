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
    if (s.length() % 2 == 0)
    {
        cout<<"false";
        return 0;
    }
    int middle_ind = ((s.length() + 1)/2) - 1;
    cout<<s[middle_ind - 1]<<s[middle_ind]<<s[middle_ind + 1];
    return 0;
}