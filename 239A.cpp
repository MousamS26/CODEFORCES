#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    //s = x + y
    int y, k, n, s;
    cin >> y >> k >> n;
    for (s = k; s <= y; s += k);
    if (s > n)
        cout << -1;
    for (; s <= n; s += k)
        cout << s - y << " ";
    return 0;
}

