#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    long long a[5];
    cin >> a[1] >> a[2] >> a[3];
    sort(a+1,a+4);
    cout << a[1] << " " << a[2] << " " << a[3];
    return 0;
}