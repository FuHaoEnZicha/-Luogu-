//咕值与用户名的颜色直接挂钩，目前，0∼99 分为灰名，100∼119 分为蓝名，120∼169 分为绿名，170∼229 分为橙名，230∼500 分为红名，此标准会根据实际情况进行适当更改。
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;
    if (sum >= 0 && sum <= 99)
    {
        cout << "Gray" << endl;
    }
    else if (sum >= 100 && sum <= 119)
    {
        cout << "Blue" << endl;
    }
    else if (sum >= 120 && sum <= 169)
    {
        cout << "Green" << endl;
    }
    else if (sum >= 170 && sum <= 229)
    {
        cout << "Orange" << endl;
    }
    else
    {
        cout << "Red" << endl;
    }
    return 0;
}