#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int l[100000], r[100000], n, a = 1000000000, b(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> l[i] >> r[i];
		a = min(a, l[i]);
		b = max(b, r[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a == l[i] && b == r[i])
		{
			cout << i + 1;
			return 0;
		}
	}
	cout << -1;

	return 0;
}