#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    long long a[1000005],b[1000005];
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    for (int i = 1;i <= n;i++)
    {
        cin >> b[i];
    }
    for (int i = 1;i <= n;i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum << endl;
    return 0;
}