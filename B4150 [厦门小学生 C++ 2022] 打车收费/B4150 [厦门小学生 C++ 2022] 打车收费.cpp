#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 3)
    {
        cout << "10" << endl;
    }
    else if (n > 3 && n <= 8)
    {
        ll sum = 10 + (n-3)*3;
        cout << sum << endl;
    }
    else
    {
        ll sum = 25 + (n-8)*5;
        cout << sum << endl;
    }
    return 0;
}