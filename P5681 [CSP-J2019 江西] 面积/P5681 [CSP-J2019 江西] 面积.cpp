#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a * a > b * c)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
    }
    return 0;
}