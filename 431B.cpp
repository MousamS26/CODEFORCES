#include <bits/stdc++.h>
using namespace std;

int b[6][6];

int main()
{
#ifndef ONLINE_JUDbE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> b[i][j];
		}
	}
	int p[6], pans[6], ans(-1), temp;
	for (int i = 0; i < n; i++)
	{
		p[i] = i;
	}
	do
	{
		//for 01234 kids
		temp = b[p[0]][p[1]] + b[p[1]][p[0]];
		temp += b[p[2]][p[3]] + b[p[3]][p[2]];

		//for 1234 kids
		temp += b[p[1]][p[2]] + b[p[2]][p[1]];
		temp += b[p[3]][p[4]] + b[p[4]][p[3]];

		//for 234 kids
		temp += b[p[2]][p[3]] + b[p[3]][p[2]];

		//for 34 kids

		temp += b[p[3]][p[4]] + b[p[4]][p[3]];

		if (temp > ans)
		{
			ans = temp;
			for (int i = 0; i < n; ++i)
			{
				pans[i] = p[i];
			}
		}
	}
	while (next_permutation(p, p + n));
	cout << ans << endl;
	return 0;
}