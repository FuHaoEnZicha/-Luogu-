#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
signed main()
{
    ll x, y, t, num=1;
    cin >> x >> y >> t;
    cout << (t * x * y) / (y - x);
    return 0;
}