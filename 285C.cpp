#include <bits/stdc++.h>
using namespace std;
long long i, n, s, a[300001];
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; ++i)
	{
		s += abs(i + 1 - a[i]);
	}
	cout << s;
	return 0;

}