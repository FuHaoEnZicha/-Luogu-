#include <iostream>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;
    int sum = 0;
    for (int i = l;i <= r;i++)
    {
        int num = i;
        while (1)
        {
            if (num % 10 == 2)
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