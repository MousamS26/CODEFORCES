#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, a[1001] = {0}, i, t;

	for (cin >> n, i = 0; i < n; i++)
	{
		cin >> t;
		a[t]++;

		if (a[t] > (n + 1) / 2)
			break;
	}

	cout << (i == n ? "YES" : "NO");

	return 0;
}