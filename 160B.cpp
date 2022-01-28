#include <bits/stdc++.h>
using namespace std;
int n, a(0), b(0);
string s;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	cin >> n;
	cin >> s;
	sort(s.begin(), s.end() - n);
	sort(s.begin() + n, s.end() );
	// cout << s;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] < s[n + i])
			a++;
		if (s[i] > s[n + i])
			b++;
	}
	cout << ((a == n || b == n) ? "YES" : "NO");
	return 0;
}