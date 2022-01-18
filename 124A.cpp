#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, a, b;
	cin >> n >> a >> b;
	if (n - a > b)
	{
		cout << b + 1;
	}
	else
	{
		cout << n - a;
	}
	return 0;
}
