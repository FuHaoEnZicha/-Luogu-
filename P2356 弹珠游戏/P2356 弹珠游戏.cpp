#include <iostream>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+5][n+5];
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            cin >> a[i][j];
        }
    }
    bool flag = true;
    for (int i = 1;i <= n;i++) // 判断有没有容身之地
    {
        for (int j = 1;j <= n;j++)
        {
            if (a[i][j] == 0)
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "Bad Game!" << endl;
        return 0;
    }
    int sum = 0, maxn = -1e+5;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            sum = 0;
            if (a[i][j] == 0)
            {
                for (int k = 1;k <= n;k++)
                {
                    sum += a[i][k];
                }
                for (int k = 1;k <= n;k++)
                {
                    sum += a[k][j];
                }
                if (sum > maxn)
                {
                    maxn = sum;
                }
            }
        }
    }
    cout << maxn << endl;
    return 0;
}