#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    int h,m,s,ms,mms;
    char c;
    cin >> h >> c >> m >> c >> s >> c >> ms;
    ll sum1 = h * 360000 + m * 6000 + s * 100 + ms;
    cin >> h >> c >> m >> c >> s >> c >> ms >> c >> mms;
    ll sum2 = h * 360000 + m * 6000 + s * 100 + ms;
    cout << sum2-sum1 << endl;
    return 0;
}