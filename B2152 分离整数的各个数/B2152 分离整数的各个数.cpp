#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (1)
    {
        cout << n % 10 << " ";
        n /= 10;
        if (n / 1 == 0)
        {
            return 0;
        }
    }
    return 0;
}