#include <iostream>
#define ll long long
using namespace std;
int a[100005],b[100005],n,maxn = 0;
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)   
    {
        cin >> a[i];
        if (a[i] > maxn)
        {
            maxn = a[i];
        }
        b[a[i]]++;
    }
    for (int i = 0;i <= maxn;i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}