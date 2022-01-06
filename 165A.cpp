#include <iostream>
using namespace std;


#include<iostream>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n, x[260], y[260], c = 0, r, l, u, d;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
	for (int i = 0; i < n; ++i)
	{
		for (int j = r = l = d = u = 0; j < n; ++j)
		{
			r |= x[j] > x[i] && y[j] == y[i];
			l |= x[j] < x[i] && y[j] == y[i];
			d |= x[j] == x[i] && y[j] < y[i];
			u |= x[j] == x[i] && y[j] > y[i];
		}
		if (r && l && d && u) ++c;
	}
	cout << c << "\n";
	return 0;
}