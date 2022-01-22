#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n, x, a1(0), a2(0);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        x == 100 ? a1++ : a2++;
    }
    if (a1 % 2 != 0 || a1 == 0 && n % 2 != 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
