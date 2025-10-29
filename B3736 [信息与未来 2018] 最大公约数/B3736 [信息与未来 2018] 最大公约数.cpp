#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll x, y, z;
    cin >> x >> y >> z;
    ll sum = __gcd(__gcd(x, y), z);
    cout << sum << endl;
    return 0;
}