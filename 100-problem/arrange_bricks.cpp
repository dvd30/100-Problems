#include <iostream>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int sb, bb, l;
    cin>>sb>>bb>>l;
    int i = 0, j = 0;
    int big = 7;
    int small = 1;
    int length = l;
    for(i = 0; i <= bb && i * big <= l; i++);
    i--;
    l = l - (i*big);
    for(j = 0; j <= sb && j * small <= l; j++);
    j--;
    // cout<<i << " "<<j<<endl;
    if ((i*big)+(j*small)==length)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}