#include <bits/stdc++.h>
using namespace std;
long long int n, x, y, i, j;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (i = 1; i <= n; ++i)
	{
		cin >> x;
		y = sqrt(x);
		for (j = 2; j * j < y; ++j)
		{
			if (x % j == 0)
				break;
		}
		if (j * j > y && y * y == x && x > 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;

}