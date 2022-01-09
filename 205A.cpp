#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, i, a, b = 1000000001, x(0), y(0);
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		if (a == b)
			y = 1;
		if (a < b)
			b = a, y = 0, x = i;
	}
	if (y > 0)
		cout << "Still Rozdil";
	else
		cout << x;
	return 0;
}
