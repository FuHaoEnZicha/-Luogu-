#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll x, n;
    cin >> x >> n;
    ll sum = 1;
    for (int i = 1;i <= n;i++)
    {
        sum += sum*x;
    }
    cout << sum << endl;
    return 0;
}