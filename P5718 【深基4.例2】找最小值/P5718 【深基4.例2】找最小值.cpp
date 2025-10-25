#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    int n;
    int a[105];
    cin >> n;
    for (int i = 1;i <= n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    cout << a[1];
    return 0;
}