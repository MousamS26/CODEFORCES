#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	string s, t;
	cin >> s >> t;
	reverse(t.begin(), t.end());
	if (s == t)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}