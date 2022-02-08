#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int t, x, n, c, j;
	cin >> t;
	while (t--)
	{
		cin >> n, c = 0;
		for (j = 0; j < n; j++)
			cin >> x, c += x & 1;
		puts(c & 1 || c % n ? "YES" : "NO");
	}
}

