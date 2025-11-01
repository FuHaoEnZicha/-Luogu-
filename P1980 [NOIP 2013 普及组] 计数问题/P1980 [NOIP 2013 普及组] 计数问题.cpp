#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cin >> n >> x;
    int sum = 0;
    for (int i = 1;i <= n;i++)
    {
        int num = i;
        while (1)
        {
            if (num % 10 == x)
            {
                sum++;
            }num /= 10;
            if (num / 1 == 0)
            {
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}