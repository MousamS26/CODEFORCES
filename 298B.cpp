#include <bits/stdc++.h>
using namespace std;
int t, sx, sy, ex, ey;
char ch;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	cin >> t >> sx >> sy >> ex >> ey;
	for (int i = 1; i <= t; ++i)
	{
		cin >> ch;
		if (ch == 'N' && sy < ey)sy++;
		else if (ch == 'S' && sy > ey)sy--;
		else if (ch == 'E' && sx < ex)sx++;
		else if (ch == 'W' && sx > ex)sx--;

		if (sx == ex && sy == ey)
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
}