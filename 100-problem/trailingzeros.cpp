#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n = 0, count = 0;
    cin>>n;
    for (int i = 5; n/i >= 1; i *= 5)
    {
        count += n/i;
    }
    
    cout<<count<<endl;
    return 0;
}