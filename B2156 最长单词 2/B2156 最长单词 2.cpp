#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    string a;
    int maxn = 0;
    string c;
    while (1)
    {
        cin >> c;
        if (c[c.size()-1] == '.')
        {
            if (c.size()-1 > maxn)
            {
                for (int i = 0;i < c.size()-1;i++)
                {
                    cout << c[i];
                }
                return 0;
            }
            break;
        }
        if (c.size() > maxn)
        {
            a = c;
            maxn = c.size();
        }
    }
    cout << a << endl;
    return 0;
}