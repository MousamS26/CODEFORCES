#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < min(n, m); i + 2)
	{
		cout << (n > m ? "BG" : "GB");
	}
	for (int j = 0; j < abs(n - m); ++j)
	{
		cout << (n > m ? "B" : "G");
	}
	return 0;
}