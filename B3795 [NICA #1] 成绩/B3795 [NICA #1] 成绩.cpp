#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if((a<60&&b>=60&&c>=60)||(a>=60&&b<60&&c>=60)||(a>=60&&b>=60&&c<60)||(a>=60&&b>=60&&c>=60))
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }
    int d, e, f;
    cin >> d >> e >> f;
    if((a*d+b*e+c*f)/(d+e+f)<60)
    {
        cout << "FAIL" << endl;
    }
    else
    {
        cout << "PASS" << endl;
    }
    return 0;
}