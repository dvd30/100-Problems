#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct points{
    int x;int y;
};

bool distinct(points point[])
{
    for (int i = 1; i < 3 - 1; i++)
    {
        int x = point[i].x, y = point[i].y;
        for (int j = i + 1; j < 3; j++)
        {
            if (x == point[j].x && y == point[j].y)
            {
                return false;
            }
        }
    }
    return true;
}

bool in_line(points point[])
{
    int x1 = point[1].x;
    int x2 = point[2].x;
    int x3 = point[3].x;
    int y1 = point[1].y;
    int y2 = point[2].y;
    int y3 = point[3].y;
    int a = ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)))/2;
    if (a != 0)
    {
        return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    points point[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>point[i].x;
        cin>>point[i].y;
    }
    if (distinct(point))
    {
        if (!in_line(point))
        {
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
    return 0;
}
