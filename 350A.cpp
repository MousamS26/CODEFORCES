#include <bits/stdc++.h>
using namespace std;

const int N = 300 + 5;
int n, m, a[N], b[N];

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);

	int mini = 2 * a[0];

	mini = max(mini, a[n - 1]);

	// cout << mini;

	if (b[0] <= mini)
		cout << -1;
	else
		cout << mini;
	return 0;
}