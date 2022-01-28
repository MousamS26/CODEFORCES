#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, x, sum(0);
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		sum += x;
	}
	cout << (sum % n == 0 ? n : n - 1);
	return 0;
}