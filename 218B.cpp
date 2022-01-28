#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, m, a[1001], b[1001], maxi(0), mini(0);
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + m);
	sort(b, b + m);
	int k = n, i = 0;
	while (k--)
	{
		if (a[i] == 0)
		{
			i++;
		}
		mini += a[i];
		a[i]--;
	}
	k = n, i = n - 1;
	while (k--)
	{
		sort(b, b + m);
		maxi += b[m - 1];
		b[m - 1]--;
	}
	cout << maxi << " " << mini << endl;

	return 0;

}