#include <iostream>
using namespace std;
int a[20005],sum[1000];
int main()
{
    int n;
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
        if (sum[a[i]] == 0)
        {
            cout << a[i] << " ";
            sum[a[i]]++;
        }
    }
    return 0;
}