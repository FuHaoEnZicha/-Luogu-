#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll a[1000005];
    int n;
    cin >> a[1] >> a[2];
    cin >> n;
    ll sum = a[1] + a[2];
    int s = a[2] - a[1];
    for (int i = 3;i <= n;i++)
    {
        a[i] = s+a[i-1];
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}