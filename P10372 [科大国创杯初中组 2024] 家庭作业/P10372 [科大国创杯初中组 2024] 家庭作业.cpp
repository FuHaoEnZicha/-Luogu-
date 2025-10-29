#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1;i <= t;i++)
    {
        int a, b, c;
        char d;
        cin >> a >> d >> b >> d >> c;
        if (a+b == c)
        {
            cout << "Right!" << endl;
        }
        else
        {
            cout << "Wrong!" << endl;
        }
    }
    return 0;
}