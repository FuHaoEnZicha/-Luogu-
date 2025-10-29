#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll n, v, m, a;
    cin >> n >> v >> m >> a;
    ll num = v;
    ll sum = 0;
    for (ll i = 1;i <= n;i++)
    {
        sum+=num;
        if (i % m == 0)
        {
            num+=a;
        }
    }
    cout << sum;
    return 0;
}