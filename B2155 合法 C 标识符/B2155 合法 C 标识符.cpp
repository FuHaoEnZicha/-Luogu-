#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    string a;
    cin >> a;
    if (a[0] >= '0' && a[0] <= '9')
    {
        cout << "no" << endl;
        return 0;
    }
    for (int i = 1;i < a.length();i++)
    {
        if ((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_')
        {
            
        }
        else
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}