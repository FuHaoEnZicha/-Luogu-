#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= i;j++)
        {
            sum+=j;
        }
    }
    cout << sum << endl;
    return 0;
}