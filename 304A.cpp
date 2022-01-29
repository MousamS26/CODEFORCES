#include<bits/stdc++.h>
using namespace std;
int n, a;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			int x = sqrt(i * i + j * j);
			if (x <= n && x * x == (i * i + j * j))
				a++;
		}
	}
	cout << a;
}