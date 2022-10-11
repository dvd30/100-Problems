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
    string words[2];
    for (int i = 0; i < 2; i++)
    {
        cin>>words[i];
    }
    string tag="<";
    for (int i = 0; i < words[0].length(); i++)
    {
        if (words[0][i] < 'a')
        {
            words[0][i] += 32;
        }
        tag += words[0][i];
    }
    tag += ">";
    for (int i = 0; i < words[1].length(); i++)
    {
        tag += words[1][i];
    }
    tag += "<";
    tag += "/";
    for (int i = 0; i < words[0].length(); i++)
    {
        if (words[0][i] < 'a')
        {
            words[0][i] += 32;
        }
        tag += words[0][i];
    }
    tag += ">";
    cout<<tag;
    return 0;
}