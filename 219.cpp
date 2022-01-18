#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int k;
	string s, u, v;
	cin >> k >> s;
	sort(s.begin(), s.end());
	// cout << s << endl;
	for (int i = 0; i < s.length(); i += k)
	{
		u += s[i];
	}
	for (int i = 0; i < k; ++i)
	{
		v += u;
	}
	u = v;
	sort(u.begin(), u.end());
	if (u != s)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << v << endl;
	}
	return 0;
}