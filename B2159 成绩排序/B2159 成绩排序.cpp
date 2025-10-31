#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#define ll long long
#define endl "\n"

using namespace std;

struct Student{
    string id;
    int sum;
}a[25];

bool cmp(Student x, Student y)
{
    if (x.sum == y.sum)
    {
        return x.id < y.id;
    }
    return x.sum > y.sum;
}
int n;
int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i].id >> a[i].sum;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1;i <= n;i++)
    {
        cout << a[i].id << " " << a[i].sum << endl;
    }
    return 0;
}