#include <vector>
#include <iostream>
#include <climits>
using namespace std;

struct Table
{
    int size;
    int sum;
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int a[n];
    int size = (n * (n + 1)) / 2;
    Table table[size];
    int index = 0, max_ind = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            table[index].size = j - i + 1;
            table[index].sum = sum;
            index++;
        }
    }
    bool same = true;
    for (int i = 0; i < n; i++)
    {
        int compare_size = table[i].size;
        vector<int> addn;
        for (int j = i; j < size; j++)
        {
            if (table[j].size == compare_size)
            {
                addn.push_back(table[j].sum);
            }
        }
        for (long unsigned int j = 1; j < addn.size(); j++)
        {
            int temp = addn[0];
            if (temp != addn[j])
            {
                same = false;
                break;
            }
            else
            {
                same = true;
                max_ind = compare_size;
            }
        }
    }
    cout << max_ind << endl;
    return 0;
}
