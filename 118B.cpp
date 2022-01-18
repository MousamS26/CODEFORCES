#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	for (int row = -n; row <= n; ++row)
	{
		int top = n - abs(row);
		for (int i = 0; i < abs(row); ++i)
		{
			cout << "  ";
		}
		for (int i = 0; i < top; ++i)
		{
			cout << i << " ";
		}
		for (int i = top; i > 0; --i)
		{
			cout << i << " ";
		}
		cout << 0 << endl;
	}
	return 0;
}