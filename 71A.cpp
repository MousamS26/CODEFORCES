#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif

	int tt;
	string s;
	cin >> tt;
	while (tt--)
	{
		cin >> s;
		if (s.length() > 10)
		{
			cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
		}
		else
		{
			cout << s << endl;
		}
	}
}
