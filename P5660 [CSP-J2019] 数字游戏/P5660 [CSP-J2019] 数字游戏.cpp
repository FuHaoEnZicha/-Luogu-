#include <iostream>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    string n;
    cin >> n;
    int num = 0;
    for (int i = 0;i < 8;i++)
    {
        if (n[i] == '1')
        {
            num++;
        }
    }
    cout << num << endl;
    return 0;
}