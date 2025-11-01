#include <iostream>
#include <cstdio>
#define ll long long
#define endl "\n"
using namespace std;
int sum[105];
int main()
{
    //freopen("apple.in", "r", stdin);
    //freopen("apple.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int a[105][105];
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= m;j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= m;j++)
        {
            sum[j]+=a[i][j];
        }
    }
    double num[105];
    for (int i = 1;i <= m;i++)
    {
        num[i] = sum[i] * 1.00000 / n;
    }
    for (int i = 1;i <= n;i++)
    {
        int e = 0;
        for (int j = 1;j <= m;j++)
        {
            if (a[i][j] >= num[j])
            {
                e++;
            }
        }
        cout << e << endl;
    }
    return 0;
}