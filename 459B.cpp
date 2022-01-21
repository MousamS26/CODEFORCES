#include <bits/stdc++.h>
using namespace std;

int maximum = INT_MAX;
int a[200005];

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	long long n; cin >> n;
	int mini(maximum), maxi(0);

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mini = min(mini, a[i]);
		maxi = max(maxi, a[i]);
	}

	int beatyDiff = maxi - mini;
	long long x(0), y(0);
	for (int i = 0; i < n; i ++)
	{
		x += (a[i] == mini);
		y += (a[i] == maxi);
	}
	cout << beatyDiff << " ";
	if (maxi == mini)
		cout << n * (n - 1) / 2;
	else
		cout << x * y;
	return 0;

}