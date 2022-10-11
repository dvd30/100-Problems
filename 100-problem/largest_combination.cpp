#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // string A[n];
    vector <string> A;
    string num = "";
    for (int i = 0; i < n; i++)
    {
        string x="";
        cin>>x;
        A.push_back(x);
    }
    int max = (A[0][0] - '0');
    int index = 0;
    int j = 0;
    while (j < n)
    {
        for (int i = 1; i < A.size(); i++)
        {
            if(max < (A[i][0] - '0'))
            {
                max = (A[i][0] - '0');
                index = i;
            }
        }
        num += A[index];
        A.erase(A.begin() + index, A.begin() + index + 1);
        j++;
        index = 0;
        max = (A[0][0] - '0');
    }
    cout<<num<<endl;
    return 0;
}