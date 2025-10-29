#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << n/2+1 << endl;
    }
    else
    {
        cout << n/2+n/2+1 << endl;
    }
    return 0;
}