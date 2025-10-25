#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int uo = 11+n*3,oc=n*5;
    if (oc > uo)
    {
        cout << "Luogu";
    }
    if (oc < uo)
    {
        cout << "Local";
    }
}