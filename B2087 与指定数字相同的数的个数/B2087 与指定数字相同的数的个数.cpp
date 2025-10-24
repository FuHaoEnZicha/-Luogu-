#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 0;
    int a[n+5];
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    for (int i = 1;i <= n;i++)
    {
        if (a[i] == m)
        {
            num++;
        }
    }
    cout << num;
    return 0;
}