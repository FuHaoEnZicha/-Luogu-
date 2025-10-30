#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll n;
    cin >> n;
    double sum = 0;
    for (int i = 1;i <= n;i++)
    {
        ll x;
        cin >> x;
        if (x % 70 == 0)
        {
            sum += x / 70 * 0.1;
        }
        else
        {
            sum += (x / 70 + 1) * 0.1;
        }
    }
    printf("%.1lf",sum);
    return 0;
}