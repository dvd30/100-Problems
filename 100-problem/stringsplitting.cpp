
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string make_substr(string S, int start, int end)
{
    string A = "";
    for (int i = start; i < end; i++)
    {
        A += S[i];
    }
    return A;
}

bool in_it(string B,string A)
{
    int M = B.length();
    int N = A.length();
    if (M > N)
    {
        return false;
    }
    // cabd ab
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
        {
            if (A[i + j] != B[j])
            {
                break;
            }
        }
        if (j == M)
        {
            return true;
        }
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string S;
    cin>>S;
    for (int i = 0; i < n; i++)
    {
        string A = "";
        string B = "";
        A = make_substr(S, 0, i);
        B = make_substr(S, i, n);
        if (in_it(B, A))
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
