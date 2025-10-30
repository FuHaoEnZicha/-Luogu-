#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 0;
    int maxn = -1e+5;
    for (int i = 1;i <= n;i++)
    {
        int x, y;
        cin >> x >> y;
        if (x >= 90 && x <= 140 && y >= 60 && y <= 90)
        {
            num++;
        }
        else
        {
            if (num >= maxn)
            {
                maxn = num;
            }
            num=0;
        }
    }
    if (num >= maxn)
    {
        maxn = num;
    }
    cout << maxn << endl;
    return 0;
}