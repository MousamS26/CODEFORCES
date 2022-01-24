#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n(0); cin >> n;
	int x[8] = {0};
	int temp(0);
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		++x[temp];
	}
	if (x[5] > 0 || x[7] > 0 || x[1] != n / 3 || x[2] < x[4] || x[6] !=  x[2] + x[3] - x[4])
	{
		cout << -1;
	}
	else
	{
		for (int i = 0; i < x[4]; i++)
			cout << "1 2 4\n";
		for (int i = 0; i < x[3]; i++)
			cout << "1 3 6\n";
		for (int i = 0; i < x[2] - x[4]; i++)
			cout << "1 2 6\n";
	}
	return 0;
}